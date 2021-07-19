/**
  ******************************************************************************
  * @file    JsonHandle.h
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef JSONHANDLE_H
#define JSONHANDLE_H

/* Includes ------------------------------------------------------------------*/
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>

/* Macro Definition ----------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Function Declaration ------------------------------------------------------*/
inline void printFormattedJson(const QJsonObject   &jsonObject,   QJsonDocument::JsonFormat jsonFormat = QJsonDocument::Indented)
{
    qDebug() << qPrintable(QString(QJsonDocument(jsonObject).toJson(jsonFormat)));
}

inline void printFormattedJson(const QJsonDocument &jsonDocument, QJsonDocument::JsonFormat jsonFormat = QJsonDocument::Indented)
{
    qDebug() << qPrintable(QString(jsonDocument.toJson(jsonFormat)));
}

inline void printFormattedJson(const QString &jsonString, QJsonDocument::JsonFormat jsonFormat = QJsonDocument::Indented)
{
    qDebug() << qPrintable(QString(QJsonDocument::fromJson(jsonString.toUtf8()).toJson(jsonFormat)));
}
#endif // JSONHANDLE_H

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
