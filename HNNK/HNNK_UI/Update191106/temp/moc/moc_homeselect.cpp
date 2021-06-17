/****************************************************************************
** Meta object code from reading C++ file 'homeselect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_6_main/homeselect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homeselect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_btn_homep_t {
    QByteArrayData data[8];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_btn_homep_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_btn_homep_t qt_meta_stringdata_btn_homep = {
    {
QT_MOC_LITERAL(0, 0, 9), // "btn_homep"
QT_MOC_LITERAL(1, 10, 10), // "newClicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "Module"
QT_MOC_LITERAL(4, 29, 3), // "mod"
QT_MOC_LITERAL(5, 33, 6), // "btn_id"
QT_MOC_LITERAL(6, 40, 7), // "Chinese"
QT_MOC_LITERAL(7, 48, 9) // "whichpage"

    },
    "btn_homep\0newClicked\0\0Module\0mod\0"
    "btn_id\0Chinese\0whichpage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_btn_homep[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QString, QMetaType::Int,    4,    5,    6,    7,

       0        // eod
};

void btn_homep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        btn_homep *_t = static_cast<btn_homep *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newClicked((*reinterpret_cast< Module(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (btn_homep::*_t)(Module , int , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&btn_homep::newClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject btn_homep::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_btn_homep.data,
      qt_meta_data_btn_homep,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *btn_homep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *btn_homep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_btn_homep.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int btn_homep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void btn_homep::newClicked(Module _t1, int _t2, QString _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_homeselect_t {
    QByteArrayData data[13];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_homeselect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_homeselect_t qt_meta_stringdata_homeselect = {
    {
QT_MOC_LITERAL(0, 0, 10), // "homeselect"
QT_MOC_LITERAL(1, 11, 22), // "signal_seleectFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "SelectMode"
QT_MOC_LITERAL(4, 46, 4), // "mode"
QT_MOC_LITERAL(5, 51, 6), // "Module"
QT_MOC_LITERAL(6, 58, 5), // "modul"
QT_MOC_LITERAL(7, 64, 5), // "btnid"
QT_MOC_LITERAL(8, 70, 11), // "chinesename"
QT_MOC_LITERAL(9, 82, 4), // "page"
QT_MOC_LITERAL(10, 87, 12), // "onSelectDone"
QT_MOC_LITERAL(11, 100, 6), // "module"
QT_MOC_LITERAL(12, 107, 4) // "name"

    },
    "homeselect\0signal_seleectFinished\0\0"
    "SelectMode\0mode\0Module\0modul\0btnid\0"
    "chinesename\0page\0onSelectDone\0module\0"
    "name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_homeselect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    4,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int, QMetaType::QString, QMetaType::Int,    4,    6,    7,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::QString, QMetaType::Int,   11,    7,   12,    9,

       0        // eod
};

void homeselect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        homeselect *_t = static_cast<homeselect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_seleectFinished((*reinterpret_cast< SelectMode(*)>(_a[1])),(*reinterpret_cast< Module(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->onSelectDone((*reinterpret_cast< Module(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (homeselect::*_t)(SelectMode , Module , int , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&homeselect::signal_seleectFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject homeselect::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_homeselect.data,
      qt_meta_data_homeselect,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *homeselect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *homeselect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_homeselect.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int homeselect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void homeselect::signal_seleectFinished(SelectMode _t1, Module _t2, int _t3, QString _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
