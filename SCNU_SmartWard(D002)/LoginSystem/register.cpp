#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    //this->setFocusPolicy(Qt::StrongFocus);

    key="njYD76zs";
    ui->stackedWidget->setCurrentWidget(ui->rg);
    pressed=false;//初始化时鼠标左键未按下，设置为false
    this->setFixedSize(911,484);//固定窗口的大小
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    //设置阴影方法1
    ////////////////////////////////////////////////////////////////
    frame = new QFrame(this);
    frame->setGeometry(05, 05, this->width()-10, this->height()-10);//设置有效范围框
    frame->lower();

    shadow_effect = new QGraphicsDropShadowEffect(this);
    shadow_effect->setOffset(0, 0);
    shadow_effect->setColor(Qt::black);
    shadow_effect->setBlurRadius(10);

    frame->setGraphicsEffect(shadow_effect);

    frame->setStyleSheet("QFrame{background-color: rgb(255, 255, 255);"
                         "border-radius:10px;"
                         "border-image:url(:/image/Login_BGxxxxx.png)}"); //设置圆角与背景透明

    ////////////////////////////////////////////////////////////////

    //验证码倒计时
    timer01=new QTimer(this);
    count_downNUM=120;//短信有效期2分钟
    connect(timer01,&QTimer::timeout,this,&Register::count_down);
    timer02=new QTimer(this);
    timer02->start(300);
    connect(timer02,&QTimer::timeout,this,&Register::count_down2);

    //界面控件
    ui->lineEdit_AccountR->setPlaceholderText("请输入手机号");
    ui->lineEdit_CheckR->setPlaceholderText("请输入手机验证码");
    ui->lineEdit_password1R->setEchoMode(QLineEdit::Password);
    ui->lineEdit_password1R->setPlaceholderText("6-20位英文字母、数字、符号");
    ui->lineEdit_password2R->setEchoMode(QLineEdit::Password);
    ui->lineEdit_password2R->setPlaceholderText("请确认登录密码");

    //ui->label_getCheckNum->setCursor(Qt::PointingHandCursor);
    ui->btn_RegisterR->setCursor(Qt::PointingHandCursor);//设置鼠标样式
    ui->btn_Change1->setCursor(Qt::PointingHandCursor);
    ui->btn_getCheckNum->setCursor(Qt::PointingHandCursor);

    ui->btn_RegisterR->setFocusPolicy(Qt::StrongFocus);
    ui->btn_Change1->setVisible(false);
    ui->btn_Change2->setVisible(false);
    ui->btn_Change1->setCheckable(true);//设置按钮可检查
    ui->btn_Change2->setCheckable(true);
    ui->btn_Change1->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{border: 1px solid rgb(255,174,81); border-radius: 5px;}");
    ui->btn_Change2->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{border: 1px solid rgb(255,174,81); border-radius: 5px;}");
    //设置输入框中文件输入区，不让输入的文字在被隐藏在按钮下
    ui->lineEdit_password1R->setTextMargins(0, 0, 37, 0);
    ui->lineEdit_password2R->setTextMargins(0, 0, 37, 0);

    QRegExp rx_account("^[0-9]{1,11}$");//手机号输入只能是数字
    QValidator *validator1 = new QRegExpValidator(rx_account,ui->lineEdit_AccountR);
    ui->lineEdit_AccountR->setValidator(validator1);
    ui->lineEdit_CheckR->setValidator(validator1);
    QRegExp rx_password("^[^\u4e00-\u9fa5 ]{6,20}$");//密码6~20位字母、数字、符号
    QValidator *validator2 = new QRegExpValidator(rx_password,ui->lineEdit_password1R);
    ui->lineEdit_password1R->setValidator(validator2);
    ui->lineEdit_password2R->setValidator(validator2);
    //ui->lineEdit_password1R->setMaxLength(20);
    //rx是手机号正则表达式"((13[0-9])|(14[5,7,9])|(15[^4])|(16[6])|(18[0-9])|(17[0,1,3,5,6,7,8])|(19[9]))\\d{8}";
    //rx=QRegExp("(13[0-9]|15[012356789]|18[012346789]|14[579]|17[678]|170[059]|14[57]|166|19[89])[0-9]+$");//用于检测的正则表达式
    //这里需要更新到最新的格式
    rx=QRegExp("(1[3-9])[0-9]+$");//用于检测手机号的正则表达式

    //手机号填写完之后检测填写的手机号格式
    //connect(ui->lineEdit_AccountR,&QLineEdit::editingFinished,this,&Register::CheckAccountNum);
    //显示和隐藏密码
    connect(ui->btn_Change1,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_password1R->setEchoMode(QLineEdit::Normal);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_password1R->setEchoMode(QLineEdit::Password);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
    connect(ui->btn_Change2,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_password2R->setEchoMode(QLineEdit::Normal);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_password2R->setEchoMode(QLineEdit::Password);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
    //注册
    connect(ui->btn_RegisterR,&QPushButton::clicked,this,&Register::Register_clicked);
    //获取验证码
    connect(ui->btn_getCheckNum,&QPushButton::clicked,this,&Register::Getcode_clicked);
    //最小化
    connect(ui->btn_MinR,&QPushButton::clicked,[=](){
        this->showMinimized();
    });
    //关闭注册界面
    connect(ui->btn_CloseR,&QPushButton::clicked,[=](){
        //this->close();//close之后信号就发不出去了
        this->hide();
        Sleep(200);
        emit Show_login();
    });
    //注册成功界面最小化
    connect(ui->min_rs,&QPushButton::clicked,[=](){
        this->showMinimized();
    });
    //注册成功界面关闭
    connect(ui->close_rs,&QPushButton::clicked,[=](){
        this->close();
    });
    //跳转到登录界面
    connect(ui->btn_gotologin,&QPushButton::clicked,[=](){
        ui->btn_gotologin->setEnabled(false);
        ui->stackedWidget->setCurrentWidget(ui->rg);
        emit Show_login();
        ui->btn_gotologin->setEnabled(true);
    });


//    ui->label_getCheckNum->installEventFilter(this);//给验证码标签安装事件过滤器

    m_pHttpClient = new HttpHelper();
    m_pJRPCClient = new JRPCClient(this, m_pHttpClient);   //ps虚函数与多态，基类指针指向子类m_pHttpClient
    m_pHttpClient->setUrl(QUrl("http://124.172.189.59:8888/Admin/Api.php?s=index/index"));

    connect(m_pJRPCClient, SIGNAL(resultReady(Value&,int)), this, SLOT(onResultReady(Value&,int)));
    connect(m_pJRPCClient, SIGNAL(resultError(int,QString,Value&,int)), this, SLOT(onResultError(int,QString,Value&,int)));
    connect(m_pJRPCClient, SIGNAL(error(int,QString)), this, SLOT(onError(int,QString)));
    connect(m_pJRPCClient, SIGNAL(sent(long)), this, SLOT(onSent(long)));

    //高4.17+
    QList<MyLineEdit *> my_lineEdit = this->findChildren<MyLineEdit *>();
    foreach (MyLineEdit *lineedit, my_lineEdit) {
        //        connect(lineedit, SIGNAL(clicked()), this, SLOT(on_clicked()));
        //        connect(lineedit, SIGNAL(LostFocus()), this, SLOT(on_focusout()));
    }


}

Register::~Register()
{
    delete ui;
}

//高4.25+
void Register::on_clicked()
{
    flag = 1;
    show_soft();
}
//高4.17+(4.25 改)
void Register::on_focusout()
{
    flag = 0;
    Sleep(300);
    if( flag != 1 )
    close_soft();
}


//3.20+
void Register::onResultReady(Value &result, int id)
{
        qDebug("onResultReady");
        switch(id) {
        case 3://获取注册验证码
            if (result.IsString()) {
                QString content = result.GetString();
                qDebug("get_regist_num: %s", content.toUtf8().data());
                Document doc;
                if(!doc.Parse(content.toStdString().data()).HasParseError()) {
                    QString msg_back;
                    if (doc.HasMember("msg") && doc["msg"].IsString()) {
                        msg_back = doc["msg"].GetString();
                        qDebug() << "get_regist_num [msg]: " << doc["msg"].GetString();
                    }
                    if (doc.HasMember("code") && doc["code"].IsInt()) {
                        int code = doc["code"].GetInt();
                        qDebug() << "get_regist_num [code]=" << QString::number(code) <<endl;
                        if(code == 100)
                        {
                            ui->btn_getCheckNum->setEnabled(false);
                            timer01->start(1000);
                            count_down();//(设置一个定时器，让获取验证码按钮的点击间隔为2分钟)
                        }
                        if(code != 100 ){
                            qDebug()<<"获取注册验证码失败 code!= 100"<<endl;
                            //ui->label_errR->setText("获取验证码失败");
                            ui->label_errR->setText(msg_back);
                        }
                    }
                }
            }
            break;
        case 4://注册
            if (result.IsString()) {
                QString content = result.GetString();
//                qDebug("regist: %s", content.toLatin1().data());
                Document doc;
                if(!doc.Parse(content.toStdString().data()).HasParseError()) {
                    QString msg_back;
                    if (doc.HasMember("msg") && doc["msg"].IsString()) {
                        msg_back = doc["msg"].GetString();
                        qDebug() << "msg: " << doc["msg"].GetString();
                    }
                    if (doc.HasMember("code") && doc["code"].IsInt()) {
                        int code = doc["code"].GetInt();
                        qDebug() << "regist [code]=" << QString::number(code) <<endl;
                        if(code == 100){
                            //显示一个注册成功的界面两秒之后返回登录界面
                            qDebug()<<"注册成功 code= 100"<<endl;
                            ui->stackedWidget->setCurrentWidget(ui->rs);
                            ui->btn_RegisterR->setEnabled(true);
                        }else if(code == 101){
                            qDebug()<<"注册失败 code!= 100"<<endl;
                            //ui->label_errR->setText("注册失败");
                            ui->label_errR->setText(msg_back);
                            ui->btn_RegisterR->setEnabled(true);
                        }
                    }
                    if (doc.HasMember("msg") && doc["msg"].IsString()) {
                        qDebug() << "regist [msg]: " << doc["msg"].GetString();
                    }
                }
            }
            break;
        default:
            break;
        }
}

void Register::onResultError(int code, QString message, Value &data, int id)
{
    qDebug("JsonRPC call id %id error code %d: %s", id, code, message.toUtf8().data());
}

void Register::onError(int code, QString message)
{
    qDebug("error code %d: %s", code, message.toUtf8().data());
}

void Register::onSent(long bytes)
{

}
//3.20+


//延时函数(单位:毫秒)
void Register::Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

//关闭窗口之后清除所有之前填写的信息
void Register::closeEvent(QCloseEvent *event)
{
    ui->label_errR->clear();
    ui->lineEdit_AccountR->clear();
    ui->lineEdit_password1R->clear();
    ui->lineEdit_password2R->clear();
    ui->lineEdit_CheckR->clear();

    //5.15+高
//    ui->label_getCheckNum->setEnabled(true);//再次激活按钮
//    ui->label_getCheckNum->setText("获取验证码");
    ui->btn_getCheckNum->setEnabled(true);//再次激活按钮
    ui->btn_getCheckNum->setText("获取验证码");
    ui->btn_Change1->setDefault(true);
    timer01->stop();
    count_downNUM=120;//还原为120s

}

//倒计时(点击获取验证码之后(之前的填的账号、密码信息无格式错误时才开始))
void Register::count_down()
{
    if(count_downNUM!=0){
        count_downNUM--;
        QString tim_left=QString::number(count_downNUM);
//        ui->label_getCheckNum->setText(tim_left+"s后重新获取");
        ui->btn_getCheckNum->setText(tim_left+"s后获取");
    }else{
//        ui->label_getCheckNum->setEnabled(true);//120s之后，再次激活按钮
//        ui->label_getCheckNum->setText("获取验证码");
        ui->btn_getCheckNum->setEnabled(true);//120s之后，再次激活按钮
        ui->btn_getCheckNum->setText("获取验证码");
        timer01->stop();
        count_downNUM=120;//还原为120s
    }
}
//密码可视
void Register::count_down2()
{
    if(ui->lineEdit_password1R->text().isEmpty())
    {
        ui->btn_Change1->setVisible(false);
        ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change1->setChecked(false);
        ui->lineEdit_password1R->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change1->setVisible(true);
    }
    if(ui->lineEdit_password2R->text().isEmpty())
    {
        ui->btn_Change2->setVisible(false);
        ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change2->setChecked(false);
        ui->lineEdit_password2R->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change2->setVisible(true);
    }
}

//获取验证码
void Register::Getcode_clicked()
{
    ui->label_errR->clear();

    QString account_Num=ui->lineEdit_AccountR->text();//获取填写的账号
    QString Password_Num=ui->lineEdit_password1R->text();//获取密码1
    QString PwConfirm_Num=ui->lineEdit_password2R->text();//获取密码2

    //在这里把用户的账号密码信息上传
    //获取到服务区的返回值之后判断，如果为假，表示该手机号已注册过了，在label_errR上提示用户"该手机号已被注册"并清空之前填写的信息
    //如果为真，则下一步用户填写验证码，再用户点击“立即注册”时，会上传用户填写的验证码到服务器去做判断
    Document doc;
    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();

    Value params(kObjectType);
    Value str_account(kStringType);             //账号
    Value str_password(kStringType);            //密码
    Value str_surePassword(kStringType);        //确认密码
    Value str_sim(kStringType);                 //客户端识别码

    std::string account = account_Num.toStdString();
    std::string password = Password_Num.toStdString();
    std::string surePassword = PwConfirm_Num.toStdString();
    std::string sim = SignTool.UUID.toStdString();

    map_sign.insert("account",QString::fromStdString(std::string(account)));
    map_sign.insert("password",QString::fromStdString(std::string(password)));
    map_sign.insert("passwordSure",QString::fromStdString(std::string(surePassword)));
    map_sign.insert("sim",QString::fromStdString(std::string(sim)));
    QByteArray ba_sing=SignTool.sign(map_sign);

    str_account.SetString(account.c_str(), account.length());
    str_password.SetString(password.c_str(), password.length());
    str_surePassword.SetString(surePassword.c_str(), surePassword.length());
    str_sim.SetString(sim.c_str(), sim.length());

    params.AddMember("account", str_account, allocator);
    params.AddMember("password", str_password, allocator);
    params.AddMember("surePassword", str_surePassword, allocator);
    params.AddMember("sim", str_sim, allocator);

    m_pJRPCClient->m_pTransport->m_sign=ba_sing;
    m_pJRPCClient->call("userRegisterCode", params, 3);
}
//账号检测
void Register::CheckAccountNum()
{
    ui->label_errR->clear();
    //验证是否是手机号格式
    QString AccountNum=ui->lineEdit_AccountR->text();
    if(rx.exactMatch(AccountNum))
    {
        qDebug("手机号匹配成功");
    }else{
        qDebug("手机号匹配有误");
        ui->label_errR->setText("手机号匹配有误,请重新输入");
        //ui->label_star1->setStyleSheet("color: rgb(255, 0, 0);");
        ui->lineEdit_AccountR->clear();
        AccountNum.clear();
    }
//    if(AccountNum.isEmpty())
//    {
//        ui->label_star1->setStyleSheet("color: rgb(255, 0, 0);");
//    }
}

//立即注册
void Register::Register_clicked()
{
     ui->btn_RegisterR->setEnabled(false);
     QString account_Num=ui->lineEdit_AccountR->text();    //获取填写的账号
//     qDebug()<<"account_Num="<<account_Num<<endl;
     QString Password_Num=ui->lineEdit_password1R->text(); //获取密码1
//     qDebug()<<"Password_Num="<<Password_Num<<endl;
     QString PwConfirm_Num=ui->lineEdit_password2R->text();//获取密码2
//     qDebug()<<"PwConfirm_Num="<<PwConfirm_Num<<endl;
     QString Check_str=ui->lineEdit_CheckR->text();        //获取验证码
//     qDebug()<<"Check_str="<<Check_str<<endl;
     if(account_Num == ""||rx.exactMatch(account_Num)==0){ui->label_errR->setText("账号为空或格式错误");
     ui->btn_RegisterR->setEnabled(true);}
     else if (Password_Num =="") {ui->label_errR->setText("请输入密码");
         ui->btn_RegisterR->setEnabled(true);
     }
     else if (PwConfirm_Num == "") {ui->label_errR->setText("请输入确认密码");
         ui->btn_RegisterR->setEnabled(true);
     }
     else if (Password_Num !=PwConfirm_Num) {ui->label_errR->setText("两次密码不一致");
         ui->btn_RegisterR->setEnabled(true);
     }
     else {

     Document doc;
     doc.SetObject();
     Document::AllocatorType& allocator = doc.GetAllocator();

     Value params(kObjectType);
     Value str_account(kStringType);
     Value str_password(kStringType);
     Value str_password_sure(kStringType);
     Value str_registNum(kStringType);
     Value str_sim(kStringType);

     std::string account = account_Num.toStdString();                       //std::string("18670660590");
     std::string password = Password_Num.toStdString();                      //std::string("123456");
     std::string password_sure = PwConfirm_Num.toStdString();                 //std::string("123456");
     std::string registNum = Check_str.toStdString();                           //std::string("4321");
     std::string sim = SignTool.UUID.toStdString();

     map_sign.insert("account",QString::fromStdString(std::string(account)));
     map_sign.insert("password",QString::fromStdString(std::string(password)));
     map_sign.insert("passwordSure",QString::fromStdString(std::string(password_sure)));
     map_sign.insert("provingCode",QString::fromStdString(std::string(registNum)));
     map_sign.insert("sim",QString::fromStdString(std::string(sim)));
     QByteArray ba_sing=SignTool.sign(map_sign);

     str_account.SetString(account.c_str(), account.length());
     str_password.SetString(password.c_str(), password.length());
     str_password_sure.SetString(password_sure.c_str(), password_sure.length());
     str_registNum.SetString(registNum.c_str(),registNum.length());
     str_sim.SetString(sim.c_str(), sim.length());

     params.AddMember("account", str_account, allocator);
     params.AddMember("password", str_password, allocator);
     params.AddMember("surePassword", str_password_sure, allocator);
     params.AddMember("code", str_registNum, allocator);
     params.AddMember("sim", str_sim, allocator);

     m_pJRPCClient->m_pTransport->m_sign=ba_sing;
     m_pJRPCClient->call("userRegister", params, 4);
}
/*
     //第一步，信息加密(需要加密的信息有:sim、timeStamp、account、password、surePassword、code(验证码)),不要忘记了base64Encode
          QString sim=SignTool.UUID;//获取主板唯一标识码(UUID)
//          qDebug()<<"sim="<<sim<<endl;
          std::string cipher_sim=EnDecryptTool.des_encrypt(sim.toStdString(),key);
          char *cipher_sim1=EnDecryptTool.Base64Encode(cipher_sim.c_str(),cipher_sim.length(),false);
//          qDebug()<<"cipher_sim1="<<cipher_sim1<<endl;

          QString timestamp=SignTool.Get_Time();
//          qDebug()<<"timestamp="<<timestamp<<endl;
          std::string cipher_timestamp=EnDecryptTool.des_encrypt(timestamp.toStdString(),key);
          char *cipher_timestamp1=EnDecryptTool.Base64Encode(cipher_timestamp.c_str(),cipher_timestamp.length(),false);
//          qDebug()<<"cipher_timestamp1="<<cipher_timestamp1<<endl;

          std::string cipher_account=EnDecryptTool.des_encrypt(account_Num.toStdString(),key);
          char *cipher_account1=EnDecryptTool.Base64Encode(cipher_account.c_str(),cipher_account.length(),false);
//          qDebug()<<"cipher_account1="<<cipher_account1<<endl;

          std::string cipher_password=EnDecryptTool.des_encrypt(Password_Num.toStdString(),key);
          char *cipher_password1=EnDecryptTool.Base64Encode(cipher_password.c_str(),cipher_password.length(),false);
//          qDebug()<<"cipher_password1="<<cipher_password1<<endl;

          std::string cipher_surePassword=EnDecryptTool.des_encrypt(PwConfirm_Num.toStdString(),key);
          char *cipher_surePassword1=EnDecryptTool.Base64Encode(cipher_surePassword.c_str(),cipher_surePassword.length(),false);
//          qDebug()<<"cipher_surePassword1="<<cipher_surePassword1<<endl;

          std::string cipher_code=EnDecryptTool.des_encrypt(Check_str.toStdString(),key);
          char *cipher_code1=EnDecryptTool.Base64Encode(cipher_code.c_str(),cipher_code.length(),false);
//          qDebug()<<"cipher_code1="<<cipher_code1<<endl;
      //第二步，密文签名(需要签名的信息有:act和(sim、timeStamp、account、password、surePassword、code)的密文)
          map_sign.insert("act","register");
          map_sign.insert("sim",QString::fromStdString(std::string(cipher_sim1)));
          map_sign.insert("timeStamp",QString::fromStdString(std::string(cipher_timestamp1)));
          map_sign.insert("account",QString::fromStdString(std::string(cipher_account1)));
          map_sign.insert("password",QString::fromStdString(std::string(cipher_password1)));
          map_sign.insert("surePassword",QString::fromStdString(std::string(cipher_surePassword1)));
          map_sign.insert("code",QString::fromStdString(std::string(cipher_code1)));
          QByteArray ba_sing=SignTool.sign(map_sign);
//          qDebug()<<"ba_sing="<<ba_sing<<endl;
      //第三步,数据上传(需要上传的数据有:act、accessSign和(sim、timeStamp、account、password)的密文)
          //文本内容
          QHttpMultiPart *multiPart=new QHttpMultiPart(QHttpMultiPart::FormDataType);

          QHttpPart actPart;
          QByteArray act_ba;
          act_ba.append("register");
          actPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          actPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"act\";"));
          actPart.setBody(act_ba);

          QHttpPart simPart;
          QByteArray sim_ba;
          sim_ba.append(QString(cipher_sim1).toUtf8());
          simPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          simPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"sim\";"));
          simPart.setBody(sim_ba);

          QHttpPart timeStampPart;
          QByteArray timeStamp_ba;
          timeStamp_ba.append(QString(cipher_timestamp1).toUtf8());
          timeStampPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          timeStampPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"timeStamp\";"));
          timeStampPart.setBody(timeStamp_ba);

          QHttpPart accountPart;
          QByteArray account_ba;
          account_ba.append(QString(cipher_account1).toUtf8());
          accountPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          accountPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"account\";"));
          accountPart.setBody(account_ba);

          QHttpPart passwordPart;
          QByteArray password_ba;
          password_ba.append(QString(cipher_password1).toUtf8());
          passwordPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          passwordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"password\";"));
          passwordPart.setBody(password_ba);

          QHttpPart surePasswordPart;
          QByteArray surePassword_ba;
          surePassword_ba.append(QString(cipher_surePassword1).toUtf8());
          surePasswordPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          surePasswordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"surePassword\";"));
          surePasswordPart.setBody(surePassword_ba);

          QHttpPart codePart;
          QByteArray code_ba;
          code_ba.append(QString(cipher_code1).toUtf8());
          codePart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          codePart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"code\";"));
          codePart.setBody(code_ba);

          QHttpPart accessSignPart;
          QByteArray accessSign_ba;
          accessSign_ba.append(ba_sing);
          accessSignPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
          accessSignPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"accessSign\";"));
          accessSignPart.setBody(accessSign_ba);

          multiPart->append(actPart);
          multiPart->append(simPart);
          multiPart->append(timeStampPart);
          multiPart->append(accountPart);
          multiPart->append(passwordPart);
          multiPart->append(surePasswordPart);
          multiPart->append(codePart);
          multiPart->append(accessSignPart);

          QNetworkReply* reply=Upload("http://124.172.189.59:8888/APISET/user/",multiPart);
          //multiPart->setParent(reply);
      //第四步，获取返回信息
          QJsonDocument document = processReplyAsJson(reply);
          qDebug() << document;
          if (document.isObject()) {
              QJsonObject object = document.object();
              QJsonValue statusCode = object.value("ydCode");
              QString str_statusCode=statusCode.toString();
              qDebug()<<"str_statusCode="<<str_statusCode<<endl;
              if (str_statusCode == "100") {//注册成功
                  //显示一个注册成功的界面两秒之后返回登录界面
                  ui->stackedWidget->setCurrentWidget(ui->rs);
                  ui->btn_RegisterR->setEnabled(true);
              }else if(str_statusCode == "101"){//注册失败
                  ui->label_errR->setText("注册失败");
                  ui->btn_RegisterR->setEnabled(true);
              }
          }
*/
}

//设置登录快捷键
void Register::keyPressEvent(QKeyEvent* event)
{
    if((event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) && ui->btn_RegisterR->isEnabled())
    {
        Register_clicked();
    }
}

void Register::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        drag_point=event->globalPos()-this->pos();
        pressed=true;
        event->accept();
    }
}

void Register::mouseReleaseEvent(QMouseEvent *event)
{
     pressed=false;
}

void Register::mouseMoveEvent(QMouseEvent *event)
{
        if(pressed)
        {
            this->move(event->globalPos()-drag_point);//鼠标拖动窗口
            event->accept();
        }
}

//绘制背景底图
void Register::paintEvent(QPaintEvent *event)
{
//    QPixmap pix(":/image/Login_BGxxxxx.png");
//    //pix.scaled(this->size());
//    this->resize(pix.size());
//    QPainter p(this);
//    p.setRenderHint(QPainter::Antialiasing);
//    p.drawRoundedRect(this->rect(),15,15);
//    this->setMask(QBitmap(pix.mask()));
//    p.drawPixmap(this->rect(),pix);

//    p.drawPixmap(this->rect(),QPixmap(":/image/Login_BG.png"));

    //设置阴影
//    QPainter painter(this);

//    QColor m_defaultBackgroundColor = qRgb(65, 65, 65);
//    QColor m_defaultBorderColor = qRgb(69, 69, 69);
//    QPainterPath path;
//    path.setFillRule(Qt::WindingFill);
//    path.addRoundedRect(10, 10, this->width() - 20, this->height() - 20, 5, 5);

//    painter.setRenderHint(QPainter::Antialiasing, true);
//    painter.fillPath(path, QBrush(QColor(m_defaultBackgroundColor.red(),
//                                         m_defaultBackgroundColor.green(),
//                                         m_defaultBackgroundColor.blue())));

//    QColor color(45, 45, 45, 50);
//    for (int i = 0; i < 5; i++)
//    {
//        QPainterPath path;
//        path.setFillRule(Qt::WindingFill);
//        path.addRoundedRect(5 - i, 5 - i, this->width() - (5 - i) * 2, this->height() - (5 - i) * 2, 5, 5);
//        color.setAlpha(100 - qSqrt(i) * 50);
//        painter.setPen(color);
//        painter.drawPath(path);
//    }

//    painter.setRenderHint(QPainter::Antialiasing);
//    painter.setBrush(QBrush(Qt::white));
//    painter.setPen(Qt::transparent);
//    QRect rect = this->rect();
//    rect.setX(5);
//    rect.setY(5);
//    rect.setWidth(rect.width() - 5);
//    rect.setHeight(rect.height() - 5);
//    // rect: 绘制区域  15：圆角弧度
//    painter.drawRoundedRect(rect, 10, 10);
}

//事件过滤器,处理label的点击操作
//bool Register::eventFilter(QObject *obj, QEvent *event)
//{
//    if(event->type()==QEvent::MouseButtonRelease)
//    {
//        //"获取验证码"标签被点击
//        if(obj==ui->label_getCheckNum)
//        {
//            ui->label_errR->clear();

//            QString account_Num=ui->lineEdit_AccountR->text();//获取填写的账号
//            //qDebug()<<"account_Num="<<account_Num<<endl;
//            QString Password_Num=ui->lineEdit_password1R->text();//获取密码1
//            //qDebug()<<"Password_Num="<<Password_Num<<endl;
//            QString PwConfirm_Num=ui->lineEdit_password2R->text();//获取密码2
//            //qDebug()<<"PwConfirm_Num="<<PwConfirm_Num<<endl;
//            if(account_Num == ""){
//                ui->label_errR->setText("账号不能为空！");
//            }else if(Password_Num!=PwConfirm_Num)//如果两次密码输入不一致，则清空之后重新进行输入
//            {
//                ui->label_errR->setText("两次输入密码不一致！请重新输入");
//                ui->lineEdit_password1R->clear();
//                ui->lineEdit_password2R->clear();
//                Password_Num="";
//                PwConfirm_Num="";
//            }else
//            {
//                if(Password_Num == "" || PwConfirm_Num == "" )
//                {
//                    ui->label_errR->setText("密码不能为空！");
//                }
//                else{
//                    ui->label_getCheckNum->setEnabled(false);
//                    if(ui->label_getCheckNum->isEnabled()==false)
//                    {
//                        ui->label_errR->clear();

//                        //在这里把用户的账号密码信息上传
//                        //(获取到服务区的返回值之后判断，如果为假，表示该手机号已注册过了，在label_errR上提示用户"该手机号已被注册"并清空之前填写的信息)
//                        //(如果为真，则下一步用户填写验证码，再用户点击“立即注册”时，会上传用户填写的验证码到服务器去做判断)

//                        Document doc;
//                        doc.SetObject();
//                        Document::AllocatorType& allocator = doc.GetAllocator();

//                        Value params(kObjectType);
//                        Value str_account(kStringType);             //账号
//                        Value str_password(kStringType);            //密码
//                        Value str_surePassword(kStringType);        //确认密码
//                        Value str_sim(kStringType);                 //sim

//                        std::string account = account_Num.toStdString();                   //std::string("18670660590");
//                        std::string password = Password_Num.toStdString();                 // std::string("123456");
//                        std::string surePassword = PwConfirm_Num.toStdString();            //std::string("123456");
//                        std::string sim=SignTool.UUID.toStdString();

//                        str_account.SetString(account.c_str(), account.length());
//                        str_password.SetString(password.c_str(), password.length());
//                        str_surePassword.SetString(surePassword.c_str(), surePassword.length());
//                        str_sim.SetString(sim.c_str(), sim.length());

//                        params.AddMember("account", str_account, allocator);
//                        params.AddMember("password", str_password, allocator);
//                        params.AddMember("surePassword", str_surePassword, allocator);
//                        params.AddMember("sim", str_sim, allocator);

//                        m_pJRPCClient->call("userRegisterCode", params, 3);
//                    }

/*
            //第一步，信息加密(需要加密的信息有:sim、timeStamp、account、password、surePassword),不要忘记了base64Encode
                 QString sim=SignTool.UUID;//获取主板唯一标识码(UUID)
//                 qDebug()<<"sim="<<sim<<endl;
                 std::string cipher_sim=EnDecryptTool.des_encrypt(sim.toStdString(),key);
                 char *cipher_sim1=EnDecryptTool.Base64Encode(cipher_sim.c_str(),cipher_sim.length(),false);
//                 qDebug()<<"cipher_sim1="<<cipher_sim1<<endl;

                 QString timestamp=SignTool.Get_Time();
//                 qDebug()<<"timestamp="<<timestamp<<endl;
                 std::string cipher_timestamp=EnDecryptTool.des_encrypt(timestamp.toStdString(),key);
                 char *cipher_timestamp1=EnDecryptTool.Base64Encode(cipher_timestamp.c_str(),cipher_timestamp.length(),false);
//                 qDebug()<<"cipher_timestamp1="<<cipher_timestamp1<<endl;

                 std::string cipher_account=EnDecryptTool.des_encrypt(account_Num.toStdString(),key);
                 char *cipher_account1=EnDecryptTool.Base64Encode(cipher_account.c_str(),cipher_account.length(),false);
//                 qDebug()<<"cipher_account1="<<cipher_account1<<endl;

                 std::string cipher_password=EnDecryptTool.des_encrypt(Password_Num.toStdString(),key);
                 char *cipher_password1=EnDecryptTool.Base64Encode(cipher_password.c_str(),cipher_password.length(),false);
//                 qDebug()<<"cipher_password1="<<cipher_password1<<endl;

                 std::string cipher_surePassword=EnDecryptTool.des_encrypt(PwConfirm_Num.toStdString(),key);
                 char *cipher_surePassword1=EnDecryptTool.Base64Encode(cipher_surePassword.c_str(),cipher_surePassword.length(),false);
//                 qDebug()<<"cipher_surePassword1="<<cipher_surePassword1<<endl;
             //第二步，密文签名(需要签名的信息有:act和(sim、timeStamp、account、password、surePassword)的密文)
                 map_sign.insert("act","getRegisterCode");
                 map_sign.insert("sim",QString::fromStdString(std::string(cipher_sim1)));
                 map_sign.insert("timeStamp",QString::fromStdString(std::string(cipher_timestamp1)));
                 map_sign.insert("account",QString::fromStdString(std::string(cipher_account1)));
                 map_sign.insert("password",QString::fromStdString(std::string(cipher_password1)));
                 map_sign.insert("surePassword",QString::fromStdString(std::string(cipher_surePassword1)));
                 QByteArray ba_sing=SignTool.sign(map_sign);
//                 qDebug()<<"ba_sing="<<ba_sing<<endl;
             //第三步,数据上传(需要上传的数据有:act、accessSign和(sim、timeStamp、account、password、surePassword)的密文)
                 QHttpMultiPart *multiPart=new QHttpMultiPart(QHttpMultiPart::FormDataType);

                 QHttpPart actPart;
                 QByteArray act_ba;
                 act_ba.append("getRegisterCode");
                 actPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                 actPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"act\";"));
                 actPart.setBody(act_ba);

                 QHttpPart simPart;
                 QByteArray sim_ba;
                 sim_ba.append(QString(cipher_sim1).toUtf8());
                 simPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                 simPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"sim\";"));
                 simPart.setBody(sim_ba);

                 QHttpPart timeStampPart;
                 QByteArray timeStamp_ba;
                 timeStamp_ba.append(QString(cipher_timestamp1).toUtf8());
                 timeStampPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                 timeStampPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"timeStamp\";"));
                 timeStampPart.setBody(timeStamp_ba);

                 QHttpPart accountPart;
                 QByteArray account_ba;
                 account_ba.append(QString(cipher_account1).toUtf8());
                 accountPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                 accountPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"account\";"));
                 accountPart.setBody(account_ba);

                 QHttpPart passwordPart;
                 QByteArray password_ba;
                 password_ba.append(QString(cipher_password1).toUtf8());
                 passwordPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                 passwordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"password\";"));
                 passwordPart.setBody(password_ba);

                 QHttpPart surePasswordPart;
                 QByteArray surePassword_ba;
                 surePassword_ba.append(QString(cipher_surePassword1).toUtf8());
                 surePasswordPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                 surePasswordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"surePassword\";"));
                 surePasswordPart.setBody(surePassword_ba);

                 QHttpPart accessSignPart;
                 QByteArray accessSign_ba;
                 accessSign_ba.append(ba_sing);
                 accessSignPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                 accessSignPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"accessSign\";"));
                 accessSignPart.setBody(accessSign_ba);

                 multiPart->append(actPart);
                 multiPart->append(simPart);
                 multiPart->append(timeStampPart);
                 multiPart->append(accountPart);
                 multiPart->append(passwordPart);
                 multiPart->append(surePasswordPart);
                 multiPart->append(accessSignPart);

                 QNetworkReply* reply=Upload("http://124.172.189.59:8888/APISET/user/",multiPart);
                 //multiPart->setParent(reply);
             //第四步，获取返回信息
                 QJsonDocument document = processReplyAsJson(reply);
                 qDebug() << document;
                 if (document.isObject())
                 {
                     QJsonObject object = document.object();
                     QJsonValue statusCode = object.value("ydCode");
                     QString str_statusCode=statusCode.toString();
                     qDebug()<<"str_statusCode="<<str_statusCode<<endl;//HTTP状态码
                     if (statusCode == "100") {
//                         qDebug("1_1111111111111111111111111111111111");

                     }else if(statusCode == "101"){
//                         qDebug("1_2222222222222222222222222222222222");
                         ui->label_errR->setText("获取验证码失败");
                     }
                 }
               }
            }
         return true;
        }
        else{
            return false;
        }*/
//                }
//            }
//        }
//    }
//    else
//    {
//        // pass the event on to the parent class
//        return QWidget::eventFilter(obj, event);
//    }
//}
