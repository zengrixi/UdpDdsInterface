#include "config.h"

#include <QFile>
#include <QDebug>


#define CONFIG_PATH "config.json"
#define FIGHTERPOS2ME_PATH ""
#define FIGHTERPOS2ENEMY_PATH ""


Q_GLOBAL_STATIC(Config, self)


Config *Config::instance()
{
    return self();
}


Config::Config()
    : QObject()
{
    
}


Config::~Config()
{

}


QMap<QString, QVariant> Config::getDetectionRange(const QString &name)
{
#if 0
    foreach (QVariant ranges, _config["detectionRange"].toList())
    {
        QMap<QString, QVariant> rm = ranges.toMap();
        if ( rm["sensor"].toString().contains(name) )
        {
            return rm;
        }
    }
#endif

    return QMap<QString, QVariant>();
}


QList<int> Config::getEntityPlatID2Me(const QString &name)
{
#if 0
    foreach (QVariant attributes, _config["attribute"].toList())
    {
        QMap<QString, QVariant> rm = attributes.toMap();
        if ( rm["camp"].toString().contains("me") )
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
#endif

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


QVariant Config::readJson(const QString &filename)
{
    QString json = readFile(filename);
    if ( json.isEmpty() )
    {
        qDebug() << "Json文件不存在！";
        return QVariant();
    }

    bool ok;
    auto result = QtJson::parse(json, ok);
    if ( !ok )
    {
        qDebug() << "Json文件分析过程出错！";
        return QVariant();
    }

    return result;
}


QMap<QString, QList<vec2_t>> Config::getFighterAirRoute(const QVariant &var)
{
    QMap<QString, QList<vec2_t>> fighterList;
    
    foreach (auto v, var.toList())
    {
        QMap<QString, vec2_t> fighter;
        QMapIterator<QString, QVariant> it(v.toMap());
        while ( it.hasNext() )
        {
            auto item = it.next();
            auto key = item.key();
            auto value = item.value();
            auto id = getOneStr(key, QRegExp("\\d+"));
            auto type = getOneStr(key, QRegExp("[a-z]+"));
            auto ite = fighter.find(id);
            if ( ite != fighter.end() )
            {
                recordPos(ite.value(), type, value);
            }
            else
            {
                vec2_t vec2;
                recordPos(vec2, type, value);
                fighter.insert(id, vec2);
            }
        }

        QMap<QString, vec2_t>::const_iterator i = fighter.constBegin();
        while ( i != fighter.constEnd() )
        {
            auto find = fighterList.find(i.key());
            if ( find != fighterList.end() )
            {
                fighterList[i.key()].append(i.value());
            }
            else
            {
                QList<vec2_t> list;
                list.append(i.value());
                fighterList.insert(i.key(), list);
            }
            
            i++;
        }
    }
    
    return fighterList;
}


QMap<QString, QList<double>> Config::getDistanceErr(const QVariant &var)
{
    QMap<QString, QList<double>> disErr;

    foreach (auto v, var.toList())
    {
        QMap<QString, double> err;
        QMapIterator<QString, QVariant> it(v.toMap());
        while ( it.hasNext() )
        {
            auto item = it.next();
            auto key = item.key();
            auto value = item.value();

            err.insert(key, value.toDouble());
        }

        QMap<QString, double>::const_iterator i = err.constBegin();
        while ( i != err.constEnd() )
        {
            auto find = disErr.find(i.key());
            if ( find != disErr.end() )
            {
                disErr[i.key()].append(i.value());
            }
            else
            {
                QList<double> list;
                list.append(i.value());
                disErr.insert(i.key(), list);
            }
            
            i++;
        }
    }

    return disErr;
}


void Config::recordPos(vec2_t &pos, const QString &type, const QVariant &var)
{
    if ( type.contains("lon") )
    {
        pos.x = var.toDouble();
    }
    else if ( type.contains("lat") )
    {
        pos.y = var.toDouble();
    }
}


QString Config::getOneStr(const QString &str, const QRegExp &rx)
{
    rx.indexIn(str);
    return rx.cap(0);
}
