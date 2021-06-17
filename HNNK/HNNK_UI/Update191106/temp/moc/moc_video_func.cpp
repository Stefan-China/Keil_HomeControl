/****************************************************************************
** Meta object code from reading C++ file 'video_func.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_2_exerc/video_func.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video_func.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_video_func_t {
    QByteArrayData data[21];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_video_func_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_video_func_t qt_meta_stringdata_video_func = {
    {
QT_MOC_LITERAL(0, 0, 10), // "video_func"
QT_MOC_LITERAL(1, 11, 20), // "signal_wid_size_deal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "signal_media_over"
QT_MOC_LITERAL(4, 51, 5), // "index"
QT_MOC_LITERAL(5, 57, 12), // "stateChanged"
QT_MOC_LITERAL(6, 70, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(7, 90, 5), // "state"
QT_MOC_LITERAL(8, 96, 15), // "positionChanged"
QT_MOC_LITERAL(9, 112, 8), // "position"
QT_MOC_LITERAL(10, 121, 15), // "durationChanged"
QT_MOC_LITERAL(11, 137, 8), // "duration"
QT_MOC_LITERAL(12, 146, 13), // "volumeChanged"
QT_MOC_LITERAL(13, 160, 6), // "volume"
QT_MOC_LITERAL(14, 167, 19), // "on_Btn_back_clicked"
QT_MOC_LITERAL(15, 187, 19), // "on_Btn_fore_clicked"
QT_MOC_LITERAL(16, 207, 19), // "on_Btn_play_clicked"
QT_MOC_LITERAL(17, 227, 19), // "on_Btn_down_clicked"
QT_MOC_LITERAL(18, 247, 17), // "on_Btn_up_clicked"
QT_MOC_LITERAL(19, 265, 27), // "on_Btn_back_to_menu_clicked"
QT_MOC_LITERAL(20, 293, 18) // "slot_wid_size_deal"

    },
    "video_func\0signal_wid_size_deal\0\0"
    "signal_media_over\0index\0stateChanged\0"
    "QMediaPlayer::State\0state\0positionChanged\0"
    "position\0durationChanged\0duration\0"
    "volumeChanged\0volume\0on_Btn_back_clicked\0"
    "on_Btn_fore_clicked\0on_Btn_play_clicked\0"
    "on_Btn_down_clicked\0on_Btn_up_clicked\0"
    "on_Btn_back_to_menu_clicked\0"
    "slot_wid_size_deal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_video_func[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   85,    2, 0x08 /* Private */,
       8,    1,   88,    2, 0x08 /* Private */,
      10,    1,   91,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,
      19,    0,  102,    2, 0x08 /* Private */,
      20,    4,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,    2,

       0        // eod
};

void video_func::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        video_func *_t = static_cast<video_func *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_wid_size_deal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->signal_media_over((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 3: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_Btn_back_clicked(); break;
        case 7: _t->on_Btn_fore_clicked(); break;
        case 8: _t->on_Btn_play_clicked(); break;
        case 9: _t->on_Btn_down_clicked(); break;
        case 10: _t->on_Btn_up_clicked(); break;
        case 11: _t->on_Btn_back_to_menu_clicked(); break;
        case 12: _t->slot_wid_size_deal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (video_func::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&video_func::signal_wid_size_deal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (video_func::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&video_func::signal_media_over)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject video_func::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_video_func.data,
      qt_meta_data_video_func,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *video_func::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *video_func::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_video_func.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int video_func::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void video_func::signal_wid_size_deal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void video_func::signal_media_over(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
