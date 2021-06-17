#include "AliyunSamrtWardConnector.h"



//该类用于从阿里云平台获取指挥病房的个设备属性信息了

AliyunSamrtWardConnector::AliyunSamrtWardConnector()
{

}


QJsonArray AliyunSamrtWardConnector::getDataFromAliyun(){
    QString app_key="32486824",
            app_secret="e46cc5c4bfdbe46d6d19c61944bc4c8a",
            host="https://api.link.aliyun.com";
    QString url,body;
    QJsonObject token,deviceData; //存放服务器返回的数据

    AliyunIoTClient* cli = new AliyunIoTClient(app_key,app_secret,host);

    QEventLoop eventLoop;
    connect(cli, SIGNAL(Responsed()), &eventLoop, SLOT(quit()));



//1.获取访问aliyun的token
    url="/cloud/token";


    //生成request的body，json类型
    QJsonObject requestObject;
    requestObject.insert("apiVer","1.0.1");

    QJsonObject paramsObject;
    paramsObject.insert("grantType","project");
    paramsObject.insert("res","a123coWHEAQLVP8S");

    QJsonObject json;
    json.insert("id","a123iTev0dIddE9d");
    json.insert("version","1.0");
    json.insert("request",QJsonValue(requestObject));
    json.insert("params",QJsonValue(paramsObject));

    QJsonDocument document;
    document.setObject(json);

    //json的body 转为 Qstring的body
    body = QString(document.toJson(QJsonDocument::Indented));

    //向云端发送post请求
    cli->sendRequest(url,body,30000);
    eventLoop.exec();  //用于阻塞，等待请求获取到数据
    token = cli->getResponseData();




//2.获取设备的属性
    //设置api的url和body
    url="/cloud/thing/properties/get";

    requestObject.insert("apiVer","1.0.2");
    paramsObject.insert("iotId","");
    paramsObject.insert("productKey","a1Ngjiy9T0E");
    paramsObject.insert("deviceName","D001");
    json.insert("id","a123iTev0dIddE9d");
    json.insert("version","1.0");
    json.insert("request",QJsonValue(requestObject));
    json.insert("params",QJsonValue(paramsObject));
    document.setObject(json);
    body = QString(document.toJson(QJsonDocument::Indented));


    cli->sendRequest(url,body,15000);
    eventLoop.exec();
    deviceData = cli->getResponseData();

    //从json中解析需要的病房设备数据
    QJsonValue device;

    //printFormattedJson(deviceData); //debug时查看deviceData的数据是否正确
    if(!deviceData.empty())
    {
        //qDebug()<<"获取到云端的相应数据";
        if(deviceData.contains("code") && deviceData.value("code")==200 ){
            if(deviceData.contains("data")){
                QJsonValue data = deviceData.value("data");
                if(data.isArray()){
                    QJsonArray dataList = data.toArray();
                    for(int i=0; i<dataList.size();i++){
                        device = dataList.at(i);
                        if(device.isObject()){
                            //printFormattedJson(device.toObject());
                        }

                    }
                    return dataList;  //以json返回云平台设备，以数组形式，每个设备的属性是一个数组元素
                }
            }

        }else{
            qDebug()<<"服务器未正确处理请求:"<<deviceData.value("code");
        }

    }else{
        qDebug()<<"请求未被正确处理";
    }

}


bool AliyunSamrtWardConnector::setDataToAliyun(QString identifier,int value){

    QString app_key="32486824",
            app_secret="e46cc5c4bfdbe46d6d19c61944bc4c8a",
            host="https://api.link.aliyun.com";
    QString url,body;
    QJsonObject token,deviceData; //存放服务器返回的数据

    AliyunIoTClient* cli = new AliyunIoTClient(app_key,app_secret,host);
    QEventLoop eventLoop;
    connect(cli, SIGNAL(Responsed()), &eventLoop, SLOT(quit()));
    QJsonObject requestObject,paramsObject,json;
    QJsonDocument document;

    url="/cloud/token";


    //生成request的body，json类型
    requestObject;
    requestObject.insert("apiVer","1.0.1");

    paramsObject;
    paramsObject.insert("grantType","project");
    paramsObject.insert("res","a123coWHEAQLVP8S");


    json.insert("id","a123iTev0dIddE9d");
    json.insert("version","1.0");
    json.insert("request",QJsonValue(requestObject));
    json.insert("params",QJsonValue(paramsObject));


    cli->sendRequest(url,body,15000);
    eventLoop.exec();
    token = cli->getResponseData();
    //printFormattedJson(deviceTSL);

//3. 设置物的属性值
    url="/cloud/thing/properties/set";


    //生成request的body，json类型
    requestObject.insert("apiVer","1.0.2");

    //params内容生成
    QJsonObject itemsObject;
    QDateTime currentUtcTime = QDateTime::currentDateTimeUtc();

    itemsObject.insert(identifier,value);
    paramsObject.insert("iotId","KGcQCXJ4Ax88gvU0ODZw000000");
    paramsObject.insert("productKey","");
    paramsObject.insert("deviceName","");
    paramsObject.insert("items",QJsonValue(itemsObject));

    json.insert("id","a123iTev0dIddE9d");
    json.insert("version","1.0");
    json.insert("request",QJsonValue(requestObject));
    json.insert("params",QJsonValue(paramsObject));

    document.setObject(json);

    //json的body 转为 Qstring的body
    body = QString(document.toJson(QJsonDocument::Indented));

    //向云端发送post请求
    cli->sendRequest(url,body,15000);
    eventLoop.exec();  //用于阻塞，等待请求获取到数据
    QJsonObject outcome = cli->getResponseData();
    //printFormattedJson(outcome);
    if(outcome.contains("code") && outcome.value("code")==200)
        return true;
    else
        return false;
}
