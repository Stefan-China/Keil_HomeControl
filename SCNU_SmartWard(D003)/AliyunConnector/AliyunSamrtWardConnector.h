#ifndef ALIYUNSAMRTWARDCONNECTOR_H
#define ALIYUNSAMRTWARDCONNECTOR_H

#include "AliyunIoTClient.h"
#include "JsonHandle.h"
#include <QDateTime>


class AliyunSamrtWardConnector:public QObject
{
    Q_OBJECT
public:
    AliyunSamrtWardConnector();
    QJsonArray getDataFromAliyun(); //返回所有设备数据
    bool setDataToAliyun(QString identifier,int value); //设置设备数据

signals:

public slots:
};

#endif // ALIYUNSAMRTWARDCONNECTOR_H
