/**
  ******************************************************************************
  * @file    AliyunThingManager.h
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  * @attention the parameters of json needed to send:
  * ----------------------------------------------------------------------------
  *       API                 |          Paramters(* not necessary)
  * ----------------------------------------------------------------------------
  * getThingDetail            | productKey deviceName
  * getThingExtendInfo        | productKey deviceName
  * getThingInfo              | productKey deviceName
  * getThingProperties        | productKey deviceName
  * getThingProperty          | productKey deviceName propertyIdentifier
  * getThingPropertyTimeline  | productKey deviceName propertyIdentifier
  *                           | start end pageSize ordered
  * queryThingCount           | productKey(*) deviceName(*) onlineStatus(*)
  *                           |                       version(1.0) apiVar(1.1.2)
  * ----------------------------------------------------------------------------
  * queryPropertyByProductKey | productKey
  *                           |                       version(1.0) apiVar(1.1.0)
  * ----------------------------------------------------------------------------
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef ALIYUNTHINGMANAGER_H
#define ALIYUNTHINGMANAGER_H

/* Includes ------------------------------------------------------------------*/
#include <QMap>
#include <QList>
#include "AliyunIoTClient.h"

/* Macro Definition ----------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Function Declaration ------------------------------------------------------*/
/* Class Declaration ---------------------------------------------------------*/
class AliyunThingJson
{
public:
    QString version     = "1.0";
    QString apiVer      = "1.1.2";
    QString productKey;
    QString deviceName;
    QString propertyIdentifier;
    qint64  start       = 0;
    qint64  end         = 0;
    qint32  pageSize    = 200;
    bool    ordered     = false;
};


class AliyunThingManager : public AliyunIoTClient
{
    Q_OBJECT
public:
    enum ThingManageAPI {
        getThingDetail = 0,
        getThingExtendInfo,
        getThingInfo,
        getThingProperties,
        getThingProperty,
        getThingPropertyTimeline,
        queryThingCount,
        queryPropertyByProductKey
    };

    explicit AliyunThingManager(const QString &key, const QString &secret,
                                const QString &host = "https://api.link.aliyun.com",
                                QObject *parent = nullptr);
    void sendRequest(ThingManageAPI api, const AliyunThingJson &json, qint32 timeout = 5000);

private:
    QString getContent(const AliyunThingJson &json);

signals:

public slots:
};

#endif // ALIYUNTHINGMANAGER_H

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
