#include "config.h"

#include <QFile>
#include <QDebug>


#define CONFIG_PATH "config.json"


Q_GLOBAL_STATIC(Config, self)


Config *Config::instance()
{
    return self();
}


Config::Config()
    : QObject()
{
    readJson();
}


Config::~Config()
{

}


QMap<QString, QVariant> Config::getDetectionRange(const QString &name)
{
    foreach (QVariant ranges, _config["detectionRange"].toList())
    {
        QMap<QString, QVariant> rm = ranges.toMap();
        if (rm["sensor"].toString().contains(name))
        {
            return rm;
        }
    }

    return QMap<QString, QVariant>();
}


QList<int> Config::getEntityPlatID2Me(const QString &name)
{
    foreach (QVariant attributes, _config["attribute"].toList())
    {
        QMap<QString, QVariant> rm = attributes.toMap();
        if (rm["camp"].toString().contains("me"))
        {
            QList<QVariant> idlist = rm[name].toList();
            QList<int> ids;
            foreach (auto id, idlist)
            {
                ids.append(id.toMap()["platid"].toInt());
            }

            return ids;
        }
    }

    return QList<int>();
}


QString Config::readFile(const QString &filename)
{
    QFile f(filename);
    if ( !f.open(QFile::ReadOnly | QFile::Text) )
    {
        return QString();
    }

    QTextStream in(&f);
    QString s = in.readAll();

    f.close();

    return s;
}


int Config::readJson()
{
    QString json = readFile(CONFIG_PATH);
    if ( json.isEmpty() )
    {
        qDebug() << ("配置文件不存在！");
        return -1;
    }

    bool ok;
    _config = QtJson::parse(json, ok).toMap();
    if ( !ok )
    {
        qDebug() << ("分析过程中出错！");
        return -1;
    }

    return 0;
}
