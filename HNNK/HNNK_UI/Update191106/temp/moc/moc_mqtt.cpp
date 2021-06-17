/****************************************************************************
** Meta object code from reading C++ file 'mqtt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../oldproject/hnnk_standard/HNNK_UI/pri_0_homep/mqtt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mqtt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mqtt_t {
    QByteArrayData data[18];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mqtt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mqtt_t qt_meta_stringdata_Mqtt = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Mqtt"
QT_MOC_LITERAL(1, 5, 16), // "mqttSearchFailed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "connected"
QT_MOC_LITERAL(4, 33, 14), // "connectionLost"
QT_MOC_LITERAL(5, 48, 17), // "onPublishToDevice"
QT_MOC_LITERAL(6, 66, 10), // "devicetype"
QT_MOC_LITERAL(7, 77, 3), // "str"
QT_MOC_LITERAL(8, 81, 5), // "array"
QT_MOC_LITERAL(9, 87, 3), // "qos"
QT_MOC_LITERAL(10, 91, 6), // "retain"
QT_MOC_LITERAL(11, 98, 14), // "onErrorChanged"
QT_MOC_LITERAL(12, 113, 24), // "QMqttClient::ClientError"
QT_MOC_LITERAL(13, 138, 5), // "error"
QT_MOC_LITERAL(14, 144, 11), // "onGetHostIp"
QT_MOC_LITERAL(15, 156, 20), // "updateLogStateChange"
QT_MOC_LITERAL(16, 177, 8), // "dealInit"
QT_MOC_LITERAL(17, 186, 14) // "onSearchFailed"

    },
    "Mqtt\0mqttSearchFailed\0\0connected\0"
    "connectionLost\0onPublishToDevice\0"
    "devicetype\0str\0array\0qos\0retain\0"
    "onErrorChanged\0QMqttClient::ClientError\0"
    "error\0onGetHostIp\0updateLogStateChange\0"
    "dealInit\0onSearchFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mqtt[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    5,   72,    2, 0x0a /* Public */,
       5,    4,   83,    2, 0x2a /* Public | MethodCloned */,
       5,    3,   92,    2, 0x2a /* Public | MethodCloned */,
      11,    1,   99,    2, 0x0a /* Public */,
      14,    1,  102,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,
      16,    0,  106,    2, 0x0a /* Public */,
      17,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::UChar, QMetaType::Bool,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::UChar,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Mqtt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mqtt *_t = static_cast<Mqtt *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mqttSearchFailed(); break;
        case 1: _t->connected(); break;
        case 2: _t->connectionLost(); break;
        case 3: _t->onPublishToDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 4: _t->onPublishToDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4]))); break;
        case 5: _t->onPublishToDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 6: _t->onErrorChanged((*reinterpret_cast< QMqttClient::ClientError(*)>(_a[1]))); break;
        case 7: _t->onGetHostIp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->updateLogStateChange(); break;
        case 9: _t->dealInit(); break;
        case 10: _t->onSearchFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttClient::ClientError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Mqtt::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mqtt::mqttSearchFailed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Mqtt::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mqtt::connected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Mqtt::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mqtt::connectionLost)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Mqtt::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Mqtt.data,
      qt_meta_data_Mqtt,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Mqtt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mqtt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mqtt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Mqtt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Mqtt::mqttSearchFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mqtt::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Mqtt::connectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
