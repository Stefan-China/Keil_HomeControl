/****************************************************************************
** Meta object code from reading C++ file 'exerc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_2_exerc/exerc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'exerc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_exerc_t {
    QByteArrayData data[16];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_exerc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_exerc_t qt_meta_stringdata_exerc = {
    {
QT_MOC_LITERAL(0, 0, 5), // "exerc"
QT_MOC_LITERAL(1, 6, 21), // "signal_exerc_setmedia"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "index"
QT_MOC_LITERAL(4, 35, 19), // "slot_adjustTowindow"
QT_MOC_LITERAL(5, 55, 13), // "is_window_max"
QT_MOC_LITERAL(6, 69, 22), // "on_btn_video_0_clicked"
QT_MOC_LITERAL(7, 92, 22), // "on_btn_video_1_clicked"
QT_MOC_LITERAL(8, 115, 22), // "on_btn_video_2_clicked"
QT_MOC_LITERAL(9, 138, 22), // "on_btn_video_3_clicked"
QT_MOC_LITERAL(10, 161, 22), // "on_btn_video_4_clicked"
QT_MOC_LITERAL(11, 184, 22), // "on_btn_video_5_clicked"
QT_MOC_LITERAL(12, 207, 22), // "on_btn_video_6_clicked"
QT_MOC_LITERAL(13, 230, 23), // "on_btn_oper_web_clicked"
QT_MOC_LITERAL(14, 254, 25), // "on_btn_oper_exerc_clicked"
QT_MOC_LITERAL(15, 280, 28) // "on_btn_oper_game_llk_clicked"

    },
    "exerc\0signal_exerc_setmedia\0\0index\0"
    "slot_adjustTowindow\0is_window_max\0"
    "on_btn_video_0_clicked\0on_btn_video_1_clicked\0"
    "on_btn_video_2_clicked\0on_btn_video_3_clicked\0"
    "on_btn_video_4_clicked\0on_btn_video_5_clicked\0"
    "on_btn_video_6_clicked\0on_btn_oper_web_clicked\0"
    "on_btn_oper_exerc_clicked\0"
    "on_btn_oper_game_llk_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_exerc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   77,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void exerc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        exerc *_t = static_cast<exerc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_exerc_setmedia((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_adjustTowindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_btn_video_0_clicked(); break;
        case 3: _t->on_btn_video_1_clicked(); break;
        case 4: _t->on_btn_video_2_clicked(); break;
        case 5: _t->on_btn_video_3_clicked(); break;
        case 6: _t->on_btn_video_4_clicked(); break;
        case 7: _t->on_btn_video_5_clicked(); break;
        case 8: _t->on_btn_video_6_clicked(); break;
        case 9: _t->on_btn_oper_web_clicked(); break;
        case 10: _t->on_btn_oper_exerc_clicked(); break;
        case 11: _t->on_btn_oper_game_llk_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (exerc::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&exerc::signal_exerc_setmedia)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject exerc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_exerc.data,
      qt_meta_data_exerc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *exerc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *exerc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_exerc.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int exerc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void exerc::signal_exerc_setmedia(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
