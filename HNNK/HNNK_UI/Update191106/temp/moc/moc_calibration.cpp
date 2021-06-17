/****************************************************************************
** Meta object code from reading C++ file 'calibration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_1_align/calibration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calibration_t {
    QByteArrayData data[23];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calibration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calibration_t qt_meta_stringdata_Calibration = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Calibration"
QT_MOC_LITERAL(1, 12, 12), // "modelUpdated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 9), // "modelpath"
QT_MOC_LITERAL(4, 36, 15), // "modelDownloaded"
QT_MOC_LITERAL(5, 52, 12), // "getModelDone"
QT_MOC_LITERAL(6, 65, 36), // "QMap<int,QSharedPointer<Model..."
QT_MOC_LITERAL(7, 102, 8), // "scoremap"
QT_MOC_LITERAL(8, 111, 20), // "on_btnChoose_clicked"
QT_MOC_LITERAL(9, 132, 20), // "on_btnUpdate_clicked"
QT_MOC_LITERAL(10, 153, 22), // "on_btnGetTasks_clicked"
QT_MOC_LITERAL(11, 176, 10), // "count_down"
QT_MOC_LITERAL(12, 187, 13), // "onResultReady"
QT_MOC_LITERAL(13, 201, 6), // "Value&"
QT_MOC_LITERAL(14, 208, 13), // "onResultError"
QT_MOC_LITERAL(15, 222, 7), // "onError"
QT_MOC_LITERAL(16, 230, 4), // "code"
QT_MOC_LITERAL(17, 235, 7), // "message"
QT_MOC_LITERAL(18, 243, 6), // "onSent"
QT_MOC_LITERAL(19, 250, 12), // "onGetModelId"
QT_MOC_LITERAL(20, 263, 5), // "value"
QT_MOC_LITERAL(21, 269, 14), // "onGetUserModel"
QT_MOC_LITERAL(22, 284, 15) // "processOneModel"

    },
    "Calibration\0modelUpdated\0\0modelpath\0"
    "modelDownloaded\0getModelDone\0"
    "QMap<int,QSharedPointer<ModelInfo> >\0"
    "scoremap\0on_btnChoose_clicked\0"
    "on_btnUpdate_clicked\0on_btnGetTasks_clicked\0"
    "count_down\0onResultReady\0Value&\0"
    "onResultError\0onError\0code\0message\0"
    "onSent\0onGetModelId\0value\0onGetUserModel\0"
    "processOneModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calibration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    2,   97,    2, 0x08 /* Private */,
      14,    4,  102,    2, 0x08 /* Private */,
      15,    2,  111,    2, 0x08 /* Private */,
      18,    1,  116,    2, 0x08 /* Private */,
      19,    1,  119,    2, 0x08 /* Private */,
      21,    1,  122,    2, 0x08 /* Private */,
      22,    1,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 13, QMetaType::Int,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::Long,    2,
    QMetaType::Void, 0x80000000 | 13,   20,
    QMetaType::Void, 0x80000000 | 13,   20,
    QMetaType::Void, 0x80000000 | 13,   20,

       0        // eod
};

void Calibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calibration *_t = static_cast<Calibration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->modelDownloaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->getModelDone((*reinterpret_cast< const QMap<int,QSharedPointer<ModelInfo> >(*)>(_a[1]))); break;
        case 3: _t->on_btnChoose_clicked(); break;
        case 4: _t->on_btnUpdate_clicked(); break;
        case 5: _t->on_btnGetTasks_clicked(); break;
        case 6: _t->count_down(); break;
        case 7: _t->onResultReady((*reinterpret_cast< Value(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->onResultError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< Value(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 9: _t->onError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->onSent((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 11: _t->onGetModelId((*reinterpret_cast< Value(*)>(_a[1]))); break;
        case 12: _t->onGetUserModel((*reinterpret_cast< Value(*)>(_a[1]))); break;
        case 13: _t->processOneModel((*reinterpret_cast< Value(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Calibration::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calibration::modelUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Calibration::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calibration::modelDownloaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Calibration::*_t)(const QMap<int,QSharedPointer<ModelInfo>> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calibration::getModelDone)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Calibration::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Calibration.data,
      qt_meta_data_Calibration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Calibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calibration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calibration.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Calibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Calibration::modelUpdated(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Calibration::modelDownloaded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Calibration::getModelDone(const QMap<int,QSharedPointer<ModelInfo>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
