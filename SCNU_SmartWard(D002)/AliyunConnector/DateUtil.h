/**
  ******************************************************************************
  * @file    DateUtil.h
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef DATEUTIL_H
#define DATEUTIL_H

/* Includes ------------------------------------------------------------------*/
#include <QDateTime>

/* Macro Definition ----------------------------------------------------------*/
#define FORMAT_ISO_8601 "yyyy-MM-dd hh:mm:ss"

/* Variables -----------------------------------------------------------------*/
/* Function Declaration ------------------------------------------------------*/
inline qint64  getTimestamp(const QString &dateTime, const QString &format)
{
    return QDateTime::fromString(dateTime, format).toMSecsSinceEpoch();
}

inline QString getTimestamp(qint64 timestamp = QDateTime::currentDateTime().toMSecsSinceEpoch())
{
    return QString::number(timestamp);
}

inline QString getDateTime(qint64 timestamp = QDateTime::currentDateTime().toMSecsSinceEpoch(),
                           const QString &format = FORMAT_ISO_8601)
{
    return QDateTime::fromMSecsSinceEpoch(timestamp).toString(format);
}

#endif // DATEUTIL_H

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
