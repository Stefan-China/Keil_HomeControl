#ifndef PROTOCOL_H
#define PROTOCOL_H

#define UI_SOCKET_PORT  9527

//class CMDTYPE {
//public:
//    static const short CMDTYPE_QUERY    = 1;
//    static const short CMDTYPE_RESULT   = 2;
//    static const short CMDTYPE_STIMULUS = 3;
//};

class UICommand {
public:
    short int data1;
    short int event1;
    short int data2;
    short int event2;
    short int data3;
    short int event3;
    short int data4;
    short int event4;
    short int data5;
    short int event5;
    short int data6;
    short int event6;
    float content3;
    float content4;
    float content5;
    short int content6;
    short int battery;   //电量
    short int head_flag;  //佩戴标志
};

#endif // PROTOCOL_H
