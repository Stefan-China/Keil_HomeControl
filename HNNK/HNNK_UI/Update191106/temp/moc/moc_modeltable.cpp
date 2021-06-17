/****************************************************************************
** Meta object code from reading C++ file 'modeltable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_1_align/modeltable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeltable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelTable_t {
    QByteArrayData data[10];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelTable_t qt_meta_stringdata_ModelTable = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ModelTable"
QT_MOC_LITERAL(1, 11, 14), // "selectEogModel"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "modelpath"
QT_MOC_LITERAL(4, 37, 13), // "onCellEntered"
QT_MOC_LITERAL(5, 51, 3), // "row"
QT_MOC_LITERAL(6, 55, 6), // "colunm"
QT_MOC_LITERAL(7, 62, 13), // "onCellClicked"
QT_MOC_LITERAL(8, 76, 6), // "column"
QT_MOC_LITERAL(9, 83, 17) // "onModelDownloaded"

    },
    "ModelTable\0selectEogModel\0\0modelpath\0"
    "onCellEntered\0row\0colunm\0onCellClicked\0"
    "column\0onModelDownloaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   37,    2, 0x08 /* Private */,
       7,    2,   42,    2, 0x08 /* Private */,
       9,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    8,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void ModelTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelTable *_t = static_cast<ModelTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectEogModel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onCellEntered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->onCellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->onModelDownloaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ModelTable::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelTable::selectEogModel)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ModelTable::staticMetaObject = {
    { &TableBase::staticMetaObject, qt_meta_stringdata_ModelTable.data,
      qt_meta_data_ModelTable,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelTable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelTable.stringdata0))
        return static_cast<void*>(this);
    return TableBase::qt_metacast(_clname);
}

int ModelTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TableBase::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ModelTable::selectEogModel(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
