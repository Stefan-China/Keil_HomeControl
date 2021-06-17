/****************************************************************************
** Meta object code from reading C++ file 'basewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/basewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseWidget_t {
    QByteArrayData data[15];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseWidget_t qt_meta_stringdata_BaseWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BaseWidget"
QT_MOC_LITERAL(1, 11, 10), // "returnHome"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "publishToDevices"
QT_MOC_LITERAL(4, 40, 10), // "devicetype"
QT_MOC_LITERAL(5, 51, 3), // "str"
QT_MOC_LITERAL(6, 55, 7), // "message"
QT_MOC_LITERAL(7, 63, 3), // "qos"
QT_MOC_LITERAL(8, 67, 6), // "retain"
QT_MOC_LITERAL(9, 74, 15), // "getDeviceStatus"
QT_MOC_LITERAL(10, 90, 8), // "deviceid"
QT_MOC_LITERAL(11, 99, 3), // "msg"
QT_MOC_LITERAL(12, 103, 12), // "onReturnHome"
QT_MOC_LITERAL(13, 116, 13), // "updateMessage"
QT_MOC_LITERAL(14, 130, 12) // "QMqttMessage"

    },
    "BaseWidget\0returnHome\0\0publishToDevices\0"
    "devicetype\0str\0message\0qos\0retain\0"
    "getDeviceStatus\0deviceid\0msg\0onReturnHome\0"
    "updateMessage\0QMqttMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    5,   50,    2, 0x06 /* Public */,
       3,    4,   61,    2, 0x26 /* Public | MethodCloned */,
       3,    3,   70,    2, 0x26 /* Public | MethodCloned */,
       9,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   82,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::UChar, QMetaType::Bool,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::UChar,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    4,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   11,

       0        // eod
};

void BaseWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseWidget *_t = static_cast<BaseWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->returnHome(); break;
        case 1: _t->publishToDevices((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->publishToDevices((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4]))); break;
        case 3: _t->publishToDevices((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 4: _t->getDeviceStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->onReturnHome(); break;
        case 6: _t->updateMessage((*reinterpret_cast< const QMqttMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BaseWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseWidget::returnHome)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseWidget::*_t)(QString , QString , QByteArray , quint8 , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseWidget::publishToDevices)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseWidget::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BaseWidget::getDeviceStatus)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject BaseWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BaseWidget.data,
      qt_meta_data_BaseWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BaseWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BaseWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BaseWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void BaseWidget::returnHome()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BaseWidget::publishToDevices(QString _t1, QString _t2, QByteArray _t3, quint8 _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 4
void BaseWidget::getDeviceStatus(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
