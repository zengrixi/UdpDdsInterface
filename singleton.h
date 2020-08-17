///////////////////////////////////////////////////////////////////////////////
//
// 版权声明： Copyright (c) 2020 曾日希. All rights reserved.
// 文件名称： singleton.h
// 文件摘要： 单例模板加宏的实现
// 创建作者： 曾日希
// 创建时间： 2020-8-17
//
///////////////////////////////////////////////////////////////////////////////

#ifndef SINGLETON_H
#define SINGLETON_H

#include <QMutex>
#include <QScopedPointer>

// 使用方法：
// 1.包含此头文件
// 2.使用宏SINGLETON()

template <typename T>
class Singleton
{
public:
    static T &getInstance();
    Singleton(const Singleton &other) = delete;
    Singleton<T> &operator=(const Singleton &other) = delete;

private:
    static QMutex _mutex;
    static QScopedPointer<T> _instance;
};

//----------------------------------------------//
template <typename T>
QMutex Singleton<T>::_mutex;
template <typename T>
QScopedPointer<T> Singleton<T>::_instance;

template <typename T>
T &Singleton<T>::getInstance()
{
    if (_instance.isNull())
    {
        _mutex.lock();
        if (_instance.isNull())
        {
            _instance.reset(new T);
        }
        _mutex.unlock();
    }
    return *_instance.data();
}

//----------------------------------------------//
#define SINGLETON(Class)                                                                                                                             \
private:                                                                                                                                      \
    Class(const Class &other) = delete;                                                                                                              \
    Class &operator=(const Class &other) = delete;                                                                                                   \
    friend class Singleton<Class>;                                                                                                                   \
    friend struct QScopedPointerDeleter<Class>;                                                                                                      \
                                                                                                                                                     \
public:                                                                                                                                              \
    static Class &instance()                                                                                                                         \
    {                                                                                                                                                \
        return Singleton<Class>::getInstance();                                                                                                      \
    }

#endif // SINGLETON_H
