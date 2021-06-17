#ifndef HANDRECIVE_H
#define HANDRECIVE_H

#include <QObject>
#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include "baidu_image/http.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>
#include <QJsonArray>

class handRecieve
{
public:
    handRecieve();
    QString ui_Latitude;
    QString ui_Longtitude;
    double ui_Heartbeat;
    double ui_Diastolic;
    double ui_Shrink;
    double ui_Bodytemperature;
    double ui_Wristtemperature;
    double ui_Battery;
    double ui_Steps;
    void Server_Recieve(void);
    QString connect_flag;
    QString state_flag;
    void Drop_Server_Recieve(void);
    void Emotion_Server_Recieve(void);
    double anger;
    double disgust;
    double fear;
    double happiness;
    double neutral;
    double sadness;
    double surprise;
};

#endif // HANDRECIVE_H
