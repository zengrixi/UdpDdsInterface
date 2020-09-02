
#include "savelog.h"
#include <QMutex>
#include <QFile>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDateTime>
#include <QApplication>
#include <QStringList>
#include <QDir>
#include "myhelper.h"

// 日志重定向
#if ( QT_VERSION <= QT_VERSION_CHECK(5, 0, 0))
void Log(QtMsgType eType, const char * sMsg)
#else
void Log(QtMsgType type, const QMessageLogContext &, const QString & msg)
#endif /* #if (QT_VERSION <= QT_VERSION_CHECK(5,0,0)) */
{
    // 加锁，防止多线程中 qDebug() 太频繁导致崩溃
    static QMutex mutex;
    QMutexLocker locker(&mutex);
    QString content;

    // 这里可以根据不同的类型加上不通过的头部用于区分
    switch (type)
    {
        case QtDebugMsg:
            content = QString("[调试] %1").arg(msg);
            break;

        case QtWarningMsg:
            content = QString("[警告] %1").arg(msg);
            break;

        case QtCriticalMsg:
            content = QString("[严重] %1").arg(msg);
            break;

        case QtFatalMsg:
            content = QString("[致命] %1").arg(msg);
            break;

        default:
            break;
    }

    SaveLog::instance().save(content);
}

SaveLog::SaveLog(): QObject(Q_NULLPTR)
{
    connect(this, SIGNAL(send(QString)), &SendLog::instance(), SLOT(send(QString)));
    _pFile = new QFile(this);
    _bToNet = false;

    // 默认为应用程序根目录下的 LOG 文件夹
    // 如果日志文件夹不存在则创建
    QString logDir = QString("%1/LOG").arg(qApp->applicationDirPath());
    QDir log(logDir);
    if (!log.exists())
    {
        log.mkpath(logDir);
    }
    _sPath = logDir;

    // 默认取应用程序可执行文件名称
    QString str = qApp->applicationFilePath();
    QStringList list = str.split("/");
    _sName = list.at(list.count() - 1).split(".").at(0);
    _sFileName = "";
}

SaveLog::~SaveLog()
{
    _pFile->close();
}

// 安装日志钩子，输出调试信息到文件，便于调试
void SaveLog::start()
{
#if ( QT_VERSION <= QT_VERSION_CHECK(5, 0, 0))
    qInstallMsgHandler(Log);
#else
    qInstallMessageHandler(Log);
#endif /* #if (QT_VERSION <= QT_VERSION_CHECK(5,0,0) */
}

// 卸载日志钩子
void SaveLog::stop()
{
#if ( QT_VERSION <= QT_VERSION_CHECK(5, 0, 0))
    qInstallMsgHandler(0);
#else
    qInstallMessageHandler(0);
#endif /* #if (QT_VERSION <= QT_VERSION_CHECK(5,0,0) */
}

void SaveLog::save(const QString & content)
{
    // 如果重定向输出到网络则通过网络发出去，否则输出到日志文件
    if (_bToNet)
    {
        emit send(content);
    }
    else
    {
        // 只有当日期改变时才新建和打开文件
        QString fileName = QString("%1/%2_log_%3.txt").arg(_sPath).arg(_sName).arg(QDATE);
        if (_sFileName != fileName)
        {
            _sFileName = fileName;
            if (_pFile->isOpen())
            {
                _pFile->close();
            }
            _pFile->setFileName(_sFileName);
            _pFile->open(QIODevice::WriteOnly | QIODevice::Append | QFile::Text);
        }
        QTextStream logStream(_pFile);
        logStream << content << "  ---" << TIME << "\n";
    }
}

void SaveLog::setToNet(bool toNet)
{
    _bToNet = toNet;
}

void SaveLog::setPath(const QString & path)
{
    _sPath = path;
}

void SaveLog::setName(const QString & name)
{
    _sName = name;
}

SendLog::SendLog()
{
    _pSocket = Q_NULLPTR;
    _pServer = new QTcpServer(this);
    connect(_pServer, SIGNAL(newConnection()), this, SLOT(newConnection()));
    int listenPort = 6000;

#if ( QT_VERSION > QT_VERSION_CHECK(5, 0, 0))
    _pServer->listen(QHostAddress::AnyIPv4, listenPort);
#else
    _pServer->listen(QHostAddress::Any, listenPort);
#endif /* #if (QT_VERSION > QT_VERSION_CHECK(5,0,0)) */
}

SendLog::~SendLog()
{
    if (_pSocket)
    {
        _pSocket->disconnectFromHost();
    }
    _pServer->close();
}

void SendLog::newConnection()
{
    while (_pSocket && _pSocket->isOpen())
    {
        _pSocket = _pServer->nextPendingConnection();
    }
}

void SendLog::send(const QString & content)
{
    if (_pSocket && _pSocket->isOpen())
    {
        _pSocket->write(content.toUtf8());
        _pSocket->flush();
    }
}
