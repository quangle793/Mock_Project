/****************************************************************************
** Meta object code from reading C++ file 'AudioPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DAY1_QT_META_OJECT/AudioPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioPlayer_t {
    QByteArrayData data[18];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioPlayer_t qt_meta_stringdata_AudioPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AudioPlayer"
QT_MOC_LITERAL(1, 12, 16), // "songTitleChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "artistNameChanged"
QT_MOC_LITERAL(4, 48, 14), // "updateMetaData"
QT_MOC_LITERAL(5, 63, 20), // "onMediaStatusChanged"
QT_MOC_LITERAL(6, 84, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(7, 110, 6), // "status"
QT_MOC_LITERAL(8, 117, 13), // "parseFileName"
QT_MOC_LITERAL(9, 131, 8), // "filePath"
QT_MOC_LITERAL(10, 140, 8), // "openFile"
QT_MOC_LITERAL(11, 149, 10), // "openFolder"
QT_MOC_LITERAL(12, 160, 10), // "folderPath"
QT_MOC_LITERAL(13, 171, 4), // "play"
QT_MOC_LITERAL(14, 176, 5), // "pause"
QT_MOC_LITERAL(15, 182, 4), // "stop"
QT_MOC_LITERAL(16, 187, 9), // "songTitle"
QT_MOC_LITERAL(17, 197, 10) // "artistName"

    },
    "AudioPlayer\0songTitleChanged\0\0"
    "artistNameChanged\0updateMetaData\0"
    "onMediaStatusChanged\0QMediaPlayer::MediaStatus\0"
    "status\0parseFileName\0filePath\0openFile\0"
    "openFolder\0folderPath\0play\0pause\0stop\0"
    "songTitle\0artistName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   73,    2, 0x02 /* Public */,
      11,    1,   76,    2, 0x02 /* Public */,
      13,    0,   79,    2, 0x02 /* Public */,
      14,    0,   80,    2, 0x02 /* Public */,
      15,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00495001,
      17, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void AudioPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->songTitleChanged(); break;
        case 1: _t->artistNameChanged(); break;
        case 2: _t->updateMetaData(); break;
        case 3: _t->onMediaStatusChanged((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 4: _t->parseFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->openFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->play(); break;
        case 8: _t->pause(); break;
        case 9: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioPlayer::songTitleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioPlayer::artistNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AudioPlayer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->songTitle(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->artistName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AudioPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AudioPlayer.data,
    qt_meta_data_AudioPlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AudioPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioPlayer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AudioPlayer::songTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioPlayer::artistNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
