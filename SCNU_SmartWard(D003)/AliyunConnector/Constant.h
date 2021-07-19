/**
  ******************************************************************************
  * @file    Constant.h
  * @author  Junxin Zheng
  * @version V1.0.0
  * @date    5-January-2019
  * @brief   ...
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef CONSTANT_H
#define CONSTANT_H

/* Macro Definition ----------------------------------------------------------*/
// System Headers
#define X_CA_SIGNATURE              "X-Ca-Signature"
#define X_CA_SIGNATURE_HEADERS      "X-Ca-Signature-Headers"
#define X_CA_TIMESTAMP              "X-Ca-Timestamp"
#define X_CA_NONCE                  "X-Ca-Nonce"
#define X_CA_KEY                    "X-Ca-Key"
#define X_CA_SIGNTURE_STRING        "X-Ca-Key,X-Ca-Nonce,X-Ca-Timestamp"

// HTTP Headers
#define HTTP_HEADER_ACCEPT          "Accept"
#define HTTP_HEADER_CONTENT_MD5     "Content-MD5"
#define HTTP_HEADER_CONTENT_TYPE    "Content-Type"
#define HTTP_HEADER_USER_AGENT      "User-Agent"
#define HTTP_HEADER_DATE            "Date"

// HTTP Protocol
#define PROTOCOL_HTTP               "http"
#define PROTOCOL_HTTPS              "https"

// HTTP Method
#define METHOD_GET                  "GET"
#define METHOD_POST                 "POST"
#define METHOD_PUT                  "PUT"
#define METHOD_DELETE               "DELETE"
#define METHOD_HEADER               "HEADER"

// Content Type
#define CONTENT_TYPE_FORM           "application/x-www-form-urlencoded"
#define CONTENT_TYPE_STREAM         "application/octet-stream"
#define CONTENT_TYPE_JSON           "application/json"
#define CONTENT_TYPE_XML            "application/xml"
#define CONTENT_TYPE_TEXT           "application/text"

// Body Type
#define BODY_FORM                   "FORM"
#define BODY_STREAM                 "STREAM"

#endif // CONSTANT_H

/**************** (C) COPYRIGHT 2019 Junxin Zheng ******** END OF FILE ********/
