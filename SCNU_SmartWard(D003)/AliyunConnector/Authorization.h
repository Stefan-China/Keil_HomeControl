/**
  ******************************************************************************
  * @file    Authorization.h
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

/* Includes ------------------------------------------------------------------*/
#include <QUuid>
#include <QCryptographicHash>
#include <QMessageAuthenticationCode>

/* Macro Definition ----------------------------------------------------------*/
/* Variables -----------------------------------------------------------------*/
/* Function ------------------------------------------------------------------*/
/******************************************************************************/
/*                              Hash Algorithm                                */
/******************************************************************************/
inline QByteArray getHash(QCryptographicHash::Algorithm method, const QString &content)
{
    return QCryptographicHash::hash(content.toUtf8(), method);
}

inline QByteArray getHash(QCryptographicHash::Algorithm method, const QString &content, const QString &secret)
{
    return QMessageAuthenticationCode::hash(content.toUtf8(), secret.toUtf8(), method);
}

/******************************************************************************/
/*                        Universally Unique Identifier                       */
/******************************************************************************/
inline QString getUuid()
{
    return QUuid::createUuid().toString().replace('{', '}').remove('}');
}

#endif // AUTHORIZATION_H

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
