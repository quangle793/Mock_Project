/****************************************************************************
** Meta object code from reading C++ file 'Media.h'
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
#error "The header file 'Media.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioPlayer_t {
    QByteArrayData data[7];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioPlayer_t qt_meta_stringdata_AudioPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AudioPlayer"
QT_MOC_LITERAL(1, 12, 8), // "openFile"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "filePath"
QT_MOC_LITERAL(4, 31, 4), // "play"
QT_MOC_LITERAL(5, 36, 5), // "pause"
QT_MOC_LITERAL(6, 42, 4) // "stop"

    },
    "AudioPlayer\0openFile\0\0filePath\0play\0"
    "pause\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    0,   37,    2, 0x02 /* Public */,
       5,    0,   38,    2, 0x02 /* Public */,
       6,    0,   39,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AudioPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AudioPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->play(); break;
        case 2: _t->pause(); break;
        case 3: _t->stop(); break;
        default: ;
        }
    }
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
