/****************************************************************************
** Meta object code from reading C++ file 'aligntest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_1_align/aligntest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aligntest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlignTest_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlignTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlignTest_t qt_meta_stringdata_AlignTest = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AlignTest"
QT_MOC_LITERAL(1, 10, 12), // "modelChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "modelpath"
QT_MOC_LITERAL(4, 34, 13), // "onSelectModel"
QT_MOC_LITERAL(5, 48, 14), // "adjustFontSize"
QT_MOC_LITERAL(6, 63, 5) // "isMax"

    },
    "AlignTest\0modelChanged\0\0modelpath\0"
    "onSelectModel\0adjustFontSize\0isMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlignTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void AlignTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlignTest *_t = static_cast<AlignTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onSelectModel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->adjustFontSize((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AlignTest::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlignTest::modelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AlignTest::staticMetaObject = {
    { &AlignBase::staticMetaObject, qt_meta_stringdata_AlignTest.data,
      qt_meta_data_AlignTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AlignTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlignTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlignTest.stringdata0))
        return static_cast<void*>(this);
    return AlignBase::qt_metacast(_clname);
}

int AlignTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AlignBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AlignTest::modelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
