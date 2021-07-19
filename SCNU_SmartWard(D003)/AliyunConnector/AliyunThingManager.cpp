/**
  ******************************************************************************
  * @file    AliyunThingManager.cpp
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "AliyunThingManager.h"

/* Variables -----------------------------------------------------------------*/
/* Function ------------------------------------------------------------------*/
/*******************************************************************************
  * @brief  Construct function.
  * @param  QString key    - The AppKey of Aliyun API Platform.
  *         QString secret - The AppSecret of Aliyun API Platform.
  *         QString host   - The host of Aliyun API Platform.
  *         QString parent - Pointer of parent object
  * @retval None.
  *****************************************************************************/
AliyunThingManager::AliyunThingManager(const QString &key, const QString &secret, const QString &host, QObject *parent) :
                                       AliyunIoTClient(key, secret, host, parent)
{
    // Do Nothing.
}


/*******************************************************************************
  * @brief  Send Requset to Aliyun API Platform.
  * @param  ThingManageAPI  api     - The Url of Api.
  *         AliyunThingJson json    - The Data (json file) to send.
  *         qint32          timeout - Timeout.
  * @retval None.
  *****************************************************************************/
void AliyunThingManager::sendRequest(ThingManageAPI api, const AliyunThingJson &json, qint32 timeout)
{
    QString url;
    switch(api)
    {
        case getThingDetail:           url = "/thing/device/detail/get";            break;  // getThingDetail     - Get detail information for the object.
        case getThingExtendInfo:       url = "/thing/device/extendinfo/get";        break;  // getThingExtendInfo - Get extended information for the object.
        case getThingInfo:             url = "/thing/device/info/get";              break;  // getThingInfo       - Get basal information for the object.
        case getThingProperties:       url = "/thing/device/properties/query";      break;  // getThingProperties - Get all the attribute snapshot data for the object.
        case getThingProperty:         url = "/thing/device/property/query";        break;  // getThingProperty   - Get one attribute snapshot data for the object.
        case getThingPropertyTimeline: url = "/thing/device/property/timeline/get"; break;  // getThingPropertyTimeline - Get all the attribute data for the object.
        case queryThingCount:          url = "/thing/device/count";                 break;  // queryThingCount    - Get the number of object.
        case queryPropertyByProductKey:url = "/thing/product/properties/get";       break;  // queryPropertyByProductKey - Get the properities of product.
    }
    AliyunIoTClient::sendRequest(url, getContent(json), timeout);
}


/*******************************************************************************
  * @brief  Get Content adapting to format of Aliyun API Platform.
  * @param  AliyunThingJson json.
  * @retval None.
  *****************************************************************************/
QString AliyunThingManager::getContent(const AliyunThingJson &json)
{
    QJsonObject params
    {
        {"productKey",         QJsonValue(json.productKey)},
        {"deviceName",         QJsonValue(json.deviceName)},
        {"propertyIdentifier", QJsonValue(json.propertyIdentifier)},
        {"start",              QJsonValue(json.start)},
        {"end",                QJsonValue(json.end)},
        {"pageSize",           QJsonValue(json.pageSize)},
        {"ordered",            QJsonValue(json.ordered)}
    };

    QJsonObject request
    {
        {"iotToken",           QJsonValue("xxxx")},
        {"apiVer",             QJsonValue(json.apiVer)}
    };

    QJsonObject body
    {
        {"id",                 QJsonValue(getUuid())},
        {"version",            QJsonValue(json.version)},
        {"request",            request},
        {"params",             params}
    };

    qDebug() << endl << "--------- Content ---------";
    printFormattedJson(body);

    return QString(QJsonDocument(body).toJson(QJsonDocument::Compact));
}

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
