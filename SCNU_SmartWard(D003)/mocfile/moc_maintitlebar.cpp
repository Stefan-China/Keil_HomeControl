/****************************************************************************
** Meta object code from reading C++ file 'maintitlebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../titlebar/maintitlebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintitlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainTitleBar_t {
    QByteArrayData data[12];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainTitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainTitleBar_t qt_meta_stringdata_MainTitleBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MainTitleBar"
QT_MOC_LITERAL(1, 13, 26), // "on_pushButtonClose_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 24), // "on_pushButtonMin_clicked"
QT_MOC_LITERAL(4, 66, 30), // "on_pushButtonNormalMax_clicked"
QT_MOC_LITERAL(5, 97, 6), // "button"
QT_MOC_LITERAL(6, 104, 9), // "short int"
QT_MOC_LITERAL(7, 114, 6), // "i_data"
QT_MOC_LITERAL(8, 121, 23), // "slot_mainwindow_battery"
QT_MOC_LITERAL(9, 145, 1), // "e"
QT_MOC_LITERAL(10, 147, 27), // "slot_mainwindow_handbattery"
QT_MOC_LITERAL(11, 175, 7) // "recvMsg"

    },
    "MainTitleBar\0on_pushButtonClose_clicked\0"
    "\0on_pushButtonMin_clicked\0"
    "on_pushButtonNormalMax_clicked\0button\0"
    "short int\0i_data\0slot_mainwindow_battery\0"
    "e\0slot_mainwindow_handbattery\0recvMsg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainTitleBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x0a /* Public */,
       8,    1,   55,    2, 0x0a /* Public */,
      10,    1,   58,    2, 0x0a /* Public */,
      11,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void,

       0        // eod
};

void MainTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainTitleBar *_t = static_cast<MainTitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonClose_clicked(); break;
        case 1: _t->on_pushButtonMin_clicked(); break;
        case 2: _t->on_pushButtonNormalMax_clicked(); break;
        case 3: _t->button((*reinterpret_cast< short int(*)>(_a[1]))); break;
        case 4: _t->slot_mainwindow_battery((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slot_mainwindow_handbattery((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->recvMsg(); break;
        default: ;
        }
    }
}

const QMetaObject MainTitleBar::staticMetaObject = {
    { &TitleBar::staticMetaObject, qt_meta_stringdata_MainTitleBar.data,
      qt_meta_data_MainTitleBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainTitleBar.stringdata0))
        return static_cast<void*>(this);
    return TitleBar::qt_metacast(_clname);
}

int MainTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TitleBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
