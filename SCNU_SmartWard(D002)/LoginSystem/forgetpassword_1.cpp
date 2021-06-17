#include "forgetpassword_1.h"
#include "ui_forgetpassword_1.h"

ForgetPassword_1::ForgetPassword_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ForgetPassword_1)
{
    ui->setupUi(this);
    this->setFocusPolicy(Qt::ClickFocus);
    pressed=false;//初始化时鼠标左键未按下，设置为false
    this->setFixedSize(911,484);//固定窗口的大小
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    key="njYD76zs";

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

    //this->setAttribute(Qt::WA_TranslucentBackground,true);
    ////////////////////////////////////////////////////////////////

    //验证码倒计时
    timer03=new QTimer(this);
    count_downNUM=120;
    connect(timer03,&QTimer::timeout,this,&ForgetPassword_1::count_down);
    timer04=new QTimer(this);
    timer04->start(300);
    connect(timer04,&QTimer::timeout,this,&ForgetPassword_1::count_down1);

    //界面控件
    ui->lineEdit_PhoneF1->setPlaceholderText("请输入绑定的手机号");
    ui->lineEdit_Password1->setEchoMode(QLineEdit::Password);
    ui->lineEdit_Password1->setPlaceholderText("6-20位英文字母、数字、符号");
    ui->lineEdit_Password2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_Password2->setPlaceholderText("请确认登入密码");
    ui->lineEdit_CheckRF1->setPlaceholderText("请输入短信验证码");

    //ui->label_getCheckNumF1->setCursor(Qt::PointingHandCursor);
    ui->btn_SubmitF1->setCursor(Qt::PointingHandCursor);//设置鼠标样式
    ui->btn_getCheckNumF1->setCursor(Qt::PointingHandCursor);
    //ui->btn_Change1->setCursor(Qt::PointingHandCursor);
    //ui->btn_Change2->setCursor(Qt::PointingHandCursor)

    ui->btn_SubmitF1->setFocusPolicy(Qt::StrongFocus);
    ui->btn_Change1->setCheckable(true);
    ui->btn_Change2->setCheckable(true);
    ui->btn_Change1->setVisible(false);
    ui->btn_Change2->setVisible(false);
    ui->btn_Change1->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{background:transparent; border: 2px solid rgb(255,174,81); border-radius: 5px;}");
    ui->btn_Change2->setStyleSheet("QPushButton{background: transparent;}"
                                   "QPushButton:hover{background:transparent; border: 2px solid rgb(255,174,81); border-radius: 5px;}");
    ui->lineEdit_Password1->setTextMargins(0, 0, 37, 0);//设置输入框中文件输入区，不让输入的文字在被隐藏在按钮下
    ui->lineEdit_Password2->setTextMargins(0, 0, 37, 0);

    QRegExp rx_account("^[0-9]{1,11}$");
    QValidator *validator1 = new QRegExpValidator(rx_account,ui->lineEdit_PhoneF1);
    ui->lineEdit_PhoneF1->setValidator(validator1);//手机号输入只能是数字
    ui->lineEdit_CheckRF1->setValidator(validator1);
    QRegExp rx_password("^[^\u4e00-\u9fa5 ]{6,20}$");//密码6~20位字母、数字、符号
    QValidator *validator2 = new QRegExpValidator(rx_password,ui->lineEdit_Password1);
    ui->lineEdit_Password1->setValidator(validator2);
    ui->lineEdit_Password2->setValidator(validator2);
    //rx是手机号正则表达式"((13[0-9])|(14[5,7,9])|(15[^4])|(16[6])|(18[0-9])|(17[0,1,3,5,6,7,8])|(19[9]))\\d{8}";
    //这里需要更新到最新的格式
    //rx=QRegExp("(13[0-9]|15[012356789]|18[012346789]|14[579]|17[678]|170[059]|14[57]|166|19[89])[0-9]+$");//用于检测的正则表达式
    rx=QRegExp("(1[3-9])[0-9]+$");//用于检测手机号的正则表达式

    //手机号填写完之后检测填写的手机号格式
    //connect(ui->lineEdit_PhoneF1,&QLineEdit::editingFinished,this,&ForgetPassword_1::check_phoneNum);
    //显示和隐藏密码
    connect(ui->btn_Change1,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_Password1->setEchoMode(QLineEdit::Normal);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_Password1->setEchoMode(QLineEdit::Password);
            ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
    connect(ui->btn_Change2,&QPushButton::toggled,[this](bool checked){
        if (checked)
        {
            ui->lineEdit_Password2->setEchoMode(QLineEdit::Normal);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_kejian2.png"));
        }
        else
        {
            ui->lineEdit_Password2->setEchoMode(QLineEdit::Password);
            ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        }
    });
    //获取验证码
    connect(ui->btn_getCheckNumF1,&QPushButton::clicked,this,&ForgetPassword_1::Getcode_clicked);
    //提交申请
    connect(ui->btn_SubmitF1,&QPushButton::clicked,this,&ForgetPassword_1::Submit);
    //最小化
    connect(ui->btn_MinR,&QPushButton::clicked,[=](){
        this->showMinimized();
    });
    //关闭
    connect(ui->btn_CloseR,&QPushButton::clicked,[=](){
        //        this->close();
        this->hide();
        Sleep(200);
        emit Toshow_login();
    });

    //ui->label_getCheckNumF1->installEventFilter(this);//给验证码标签安装事件过滤器

    //3.20+
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

ForgetPassword_1::~ForgetPassword_1()
{
    delete ui;
}

//高4.25+
void ForgetPassword_1::on_clicked()
{
    flag = 1;
    //show_soft();
}
//高4.17+(4.25 改)
void ForgetPassword_1::on_focusout()
{
    flag = 0;
    Sleep(300);
    //if( flag != 1 )
    //close_soft();
}

void ForgetPassword_1::onResultReady(Value &result, int id)
{
    switch(id) {
    case 7://获取忘记密码验证码
        if (result.IsString())
        {
            QString content = result.GetString();
            qDebug("ForgetPassword_code: %s", content.toUtf8().data());
            Document doc;
            if(!doc.Parse(content.toStdString().data()).HasParseError()) {
                int code;
                QString msg_back;
                if (doc.HasMember("code") && doc["code"].IsInt()) {
                    code = doc["code"].GetInt();
                    qDebug() << "get_regist_num [code]=" << QString::number(code) <<endl;
                }
                if (doc.HasMember("msg") && doc["msg"].IsString()) {
                    msg_back = doc["msg"].GetString();
                    qDebug() << "get_regist_num [msg]: " << doc["msg"].GetString();
                }
                if(code == 100)
                {
                    ui->btn_getCheckNumF1->setEnabled(false);
                    timer03->start(1000);
                    count_down();//(设置一个定时器，让获取验证码按钮的点击间隔为2分钟)
                }
                if(code == 101)
                {
                    //ui->label_errRF1->setText("获取验证码失败");
                    ui->label_errRF1->setText(msg_back);
                }
            }
        }
        break;
    case 8://提交申请
        if (result.IsString()) {
            QString content = result.GetString();
            qDebug("ForgetPassword_code: %s", content.toUtf8().data());
            Document doc;
            if(!doc.Parse(content.toStdString().data()).HasParseError()) {
                int code;
                QString msg_back;
                if (doc.HasMember("code") && doc["code"].IsInt()) {
                    code = doc["code"].GetInt();
                    qDebug() << "regist [code]=" << QString::number(code) <<endl;
                }
                if (doc.HasMember("msg") && doc["msg"].IsString()) {
                    msg_back = doc["msg"].GetString();
                    qDebug() << "regist [msg]: " << doc["msg"].GetString();
                }
                if (code == 100) {//找回密码成功,跳转到登录界面
                    emit Toshow_login();
                    ui->lineEdit_PhoneF1->clear();
                    ui->lineEdit_Password1->clear();
                    ui->lineEdit_Password2->clear();
                    ui->label_errRF1->clear();
                    ui->lineEdit_CheckRF1->clear();
                    this->hide();
                    ui->btn_SubmitF1->setEnabled(true);
                }else if(code == 101){//找回密码失败
                    //ui->label_errRF1->setText("找回密码失败");
                    ui->label_errRF1->setText(msg_back);
                    ui->btn_SubmitF1->setEnabled(true);
                }
            }
        }
        break;
    default:
        break;
    }
}

void ForgetPassword_1::onResultError(int code, QString message, Value &data, int id)
{
    qDebug("JsonRPC call id %id error code %d: %s", id, code, message.toUtf8().data());
}

void ForgetPassword_1::onError(int code, QString message)
{
    qDebug("error code %d: %s", code, message.toUtf8().data());
}

void ForgetPassword_1::onSent(long bytes)
{

}


//延时函数(单位:毫秒)
void ForgetPassword_1::Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}



void ForgetPassword_1::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        drag_point=event->globalPos()-this->pos();
        pressed=true;
        event->accept();
    }
}

void ForgetPassword_1::mouseReleaseEvent(QMouseEvent *event)
{
     pressed=false;
}

void ForgetPassword_1::mouseMoveEvent(QMouseEvent *event)
{
        if(pressed)
        {
            this->move(event->globalPos()-drag_point);//鼠标拖动窗口
            event->accept();
        }
}

//设置登录快捷键
void ForgetPassword_1::keyPressEvent(QKeyEvent* event)
{
    if((event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) && ui->btn_SubmitF1->isEnabled())
    {
        Submit();
    }
}

//关闭窗口之后清除所有之前填写的信息
void ForgetPassword_1::closeEvent(QCloseEvent *event)
{
    ui->lineEdit_PhoneF1->clear();
    ui->lineEdit_Password1->clear();
    ui->lineEdit_Password2->clear();
    ui->label_errRF1->clear();
    ui->lineEdit_CheckRF1->clear();

    //5.15+高
//    ui->label_getCheckNumF1->setEnabled(true);//再次激活按钮
//    ui->label_getCheckNumF1->setText("获取验证码");
    ui->btn_getCheckNumF1->setEnabled(true);
    ui->btn_getCheckNumF1->setText("获取验证码");
    timer03->stop();
    count_downNUM=120;//还原为120s
}

//验证码倒计时
void ForgetPassword_1::count_down()
{
    if(count_downNUM!=0){
        count_downNUM--;
        QString tim_left=QString::number(count_downNUM);
//        ui->label_getCheckNumF1->setText(tim_left+"s后重新获取");//tim_left+"s后重新获取"QStringLiteral("123456")
        ui->btn_getCheckNumF1->setText(tim_left+"s后重新获取");
    }else{
//        ui->label_getCheckNumF1->setEnabled(true);//120s之后，再次激活按钮
//        ui->label_getCheckNumF1->setText("获取验证码");
        ui->btn_getCheckNumF1->setEnabled(true);
        ui->btn_getCheckNumF1->setText("获取验证码");
        timer03->stop();
        count_downNUM=120;//还原为120s
    }
}

void ForgetPassword_1::count_down1()
{
    if(ui->lineEdit_Password1->text().isEmpty())
    {
        ui->btn_Change1->setVisible(false);
        ui->btn_Change1->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change1->setChecked(false);
        ui->lineEdit_Password1->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change1->setVisible(true);
    }
    if(ui->lineEdit_Password2->text().isEmpty())
    {
        ui->btn_Change2->setVisible(false);
        ui->btn_Change2->setIcon(QIcon(":/image/btn_bukejian2.png"));
        ui->btn_Change2->setChecked(false);
        ui->lineEdit_Password2->setEchoMode(QLineEdit::Password);
    }
    else {
        ui->btn_Change2->setVisible(true);
    }
}
//账号检测
void ForgetPassword_1::check_phoneNum()
{
    ui->label_errRF1->clear();
    //验证是否是手机号格式
    QString PhoneNum=ui->lineEdit_PhoneF1->text();
    if(rx.exactMatch(PhoneNum))
    {
        qDebug("手机号匹配成功");
    }else{
        qDebug("手机号匹配有误");
        ui->label_errRF1->setText("手机号匹配有误,请重新输入");
        ui->lineEdit_PhoneF1->clear();
        PhoneNum.clear();
    }
}
//获取验证码
void ForgetPassword_1::Getcode_clicked()
{
    ui->label_errRF1->clear();
    //获取验证码处理
    QString account_Num=ui->lineEdit_PhoneF1->text();//获取填写的账号
    QString Password_Num=ui->lineEdit_Password1->text();//获取密码1
    QString PwConfirm_Num=ui->lineEdit_Password2->text();//获取密码2

    //在这里把用户的账号密码信息上传
    //(获取到服务区的返回值之后判断，如果为假，表示该手机号已注册过了，在label_errR上提示用户"该手机号已被注册"并清空之前填写的信息)
    //(如果为真，则下一步用户填写验证码，再用户点击“立即注册”时，会上传用户填写的验证码到服务器去做判断)
    Document doc;
    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();

    Value params(kObjectType);
    Value str_account(kStringType);
    Value str_password_new(kStringType);
    Value str_password_sure(kStringType);
    Value str_sim(kStringType);

    std::string account = account_Num.toStdString();
    std::string password_new = Password_Num.toStdString();
    std::string password_sure = PwConfirm_Num.toStdString();
    std::string sim = SignTool.UUID.toStdString();

    map_sign.insert("account",QString::fromStdString(std::string(account)));
    map_sign.insert("newPassword",QString::fromStdString(std::string(password_new)));
    map_sign.insert("newPasswordSure",QString::fromStdString(std::string(password_sure)));
    map_sign.insert("sim",QString::fromStdString(std::string(sim)));
    QByteArray ba_sing=SignTool.sign(map_sign);

    str_account.SetString(account.c_str(), account.length());
    str_password_new.SetString(password_new.c_str(), password_new.length());
    str_password_sure.SetString(password_sure.c_str(), password_sure.length());
    str_sim.SetString(sim.c_str(), sim.length());

    params.AddMember("account", str_account, allocator);
    params.AddMember("newPassword", str_password_new, allocator);//新密码
    params.AddMember("sureNewPassword", str_password_sure, allocator);//确认密码
    params.AddMember("sim", str_sim, allocator);

    m_pJRPCClient->m_pTransport->m_sign=ba_sing;
    m_pJRPCClient->call("userFindPassowrdCode", params, 7);
}
//提交申请
void ForgetPassword_1::Submit()
{
    ui->btn_SubmitF1->setEnabled(false);//点了一下之后就不能再点，如果提交申请失败，再次激活，或者成功之后再次激活
     //在这里再把验证码上传(接收到返回值之后判断是否上传成功，成功了则跳转到下一个界面)
    QString account_Num=ui->lineEdit_PhoneF1->text();    //获取填写的账号
//     qDebug()<<"account_Num="<<account_Num<<endl;
    QString Password_Num=ui->lineEdit_Password1->text(); //获取密码1
//     qDebug()<<"Password_Num="<<Password_Num<<endl;
    QString PwConfirm_Num=ui->lineEdit_Password2->text();//获取密码2
//     qDebug()<<"PwConfirm_Num="<<PwConfirm_Num<<endl;
    QString Check_str=ui->lineEdit_CheckRF1->text();        //获取验证码
//     qDebug()<<"Check_str="<<Check_str<<endl;

    if(account_Num == ""||rx.exactMatch(account_Num)==0)
    {ui->label_errRF1->setText("账号为空或格式错误");
    ui->btn_SubmitF1->setEnabled(true);}
    else if (Password_Num =="") {ui->label_errRF1->setText("请输入密码");
        ui->btn_SubmitF1->setEnabled(true);
    }
    else if (PwConfirm_Num == "") {ui->label_errRF1->setText("请输入确认密码");
        ui->btn_SubmitF1->setEnabled(true);
    }
    else if (Password_Num !=PwConfirm_Num) {ui->label_errRF1->setText("两次密码不一致");
        ui->btn_SubmitF1->setEnabled(true);
    }
    else {

    Document doc;
    doc.SetObject();
    Document::AllocatorType& allocator = doc.GetAllocator();

    Value params(kObjectType);
    Value str_account(kStringType);
    Value str_password_new(kStringType);
    Value str_password_sure(kStringType);
    Value str_code(kStringType);                //验证码
    Value str_sim(kStringType);

    std::string account = account_Num.toStdString();
    std::string password_new = Password_Num.toStdString();
    std::string password_sure = PwConfirm_Num.toStdString();
    std::string code = Check_str.toStdString();
    std::string sim = SignTool.UUID.toStdString();

    map_sign.insert("account",QString::fromStdString(std::string(account)));
    map_sign.insert("newPassword",QString::fromStdString(std::string(password_new)));
    map_sign.insert("newPasswordSure",QString::fromStdString(std::string(password_sure)));
    map_sign.insert("provingCode",QString::fromStdString(std::string(code)));
    map_sign.insert("sim",QString::fromStdString(std::string(sim)));
    QByteArray ba_sing=SignTool.sign(map_sign);

    str_account.SetString(account.c_str(), account.length());
    str_password_new.SetString(password_new.c_str(), password_new.length());
    str_password_sure.SetString(password_sure.c_str(), password_sure.length());
    str_code.SetString(code.c_str(),code.length());
    str_sim.SetString(sim.c_str(), sim.length());

    params.AddMember("account", str_account, allocator);
    params.AddMember("newPassword", str_password_new, allocator);//新密码
    params.AddMember("sureNewPassword", str_password_sure, allocator);//确认密码
    params.AddMember("code",str_code,allocator);
    params.AddMember("sim", str_sim, allocator);

    m_pJRPCClient->m_pTransport->m_sign=ba_sing;
    m_pJRPCClient->call("userFindPassowrd", params, 8);
    }
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
         map_sign.insert("act","findPassowrd");
         map_sign.insert("sim",QString::fromStdString(std::string(cipher_sim1)));
         map_sign.insert("timeStamp",QString::fromStdString(std::string(cipher_timestamp1)));
         map_sign.insert("account",QString::fromStdString(std::string(cipher_account1)));
         map_sign.insert("newPassword",QString::fromStdString(std::string(cipher_password1)));
         map_sign.insert("sureNewPassword",QString::fromStdString(std::string(cipher_surePassword1)));
         map_sign.insert("code",QString::fromStdString(std::string(cipher_code1)));
         QByteArray ba_sing=SignTool.sign(map_sign);
//          qDebug()<<"ba_sing="<<ba_sing<<endl;
     //第三步,数据上传(需要上传的数据有:act、accessSign和(sim、timeStamp、account、password)的密文)
         //文本内容
         QHttpMultiPart *multiPart=new QHttpMultiPart(QHttpMultiPart::FormDataType);

         QHttpPart actPart;
         QByteArray act_ba;
         act_ba.append("findPassowrd");
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
         passwordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"newPassword\";"));
         passwordPart.setBody(password_ba);

         QHttpPart surePasswordPart;
         QByteArray surePassword_ba;
         surePassword_ba.append(QString(cipher_surePassword1).toUtf8());
         surePasswordPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
         surePasswordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"sureNewPassword\";"));
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
             if (str_statusCode == "100") {//找回密码成功,跳转到登录界面
                    emit Toshow_login();
                 ui->btn_SubmitF1->setEnabled(true);
             }else if(str_statusCode == "101"){//找回密码失败
                 ui->label_errRF1->setText("找回密码失败");
                 ui->btn_SubmitF1->setEnabled(true);
             }
         }
*/

//绘制背景底图
void ForgetPassword_1::paintEvent(QPaintEvent *event)
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
/*
bool ForgetPassword_1::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type()==QEvent::MouseButtonRelease)
    {
        //"获取验证码"标签被点击
        if(obj==ui->label_getCheckNumF1)
        {
            ui->label_errRF1->clear();
            //获取验证码处理
            QString account_Num=ui->lineEdit_PhoneF1->text();//获取填写的账号
            //qDebug()<<"account_Num="<<account_Num<<endl;
            QString Password_Num=ui->lineEdit_Password1->text();//获取密码1
            //qDebug()<<"Password_Num="<<Password_Num<<endl;
            QString PwConfirm_Num=ui->lineEdit_Password2->text();//获取密码2
            //qDebug()<<"PwConfirm_Num="<<PwConfirm_Num<<endl;
            if(account_Num == ""){
                ui->label_errRF1->setText("账号不能为空！");
            }else if(Password_Num!=PwConfirm_Num)//如果两次密码输入不一致，则清空之后重新进行输入
            {
                ui->label_errRF1->setText("两次输入密码不一致！请重新输入");
                ui->lineEdit_Password1->clear();
                ui->lineEdit_Password2->clear();
                Password_Num="";
                PwConfirm_Num="";
            }else
            {
                if(Password_Num == "" || PwConfirm_Num == "" )
                {
                    ui->label_errRF1->setText("密码不能为空！");
                }
                else{
                ui->label_getCheckNumF1->setEnabled(false);
                if(ui->label_getCheckNumF1->isEnabled()==false)
                {
                    ui->label_errRF1->clear();

                    //在这里把用户的账号密码信息上传
                    //(获取到服务区的返回值之后判断，如果为假，表示该手机号已注册过了，在label_errR上提示用户"该手机号已被注册"并清空之前填写的信息)
                    //(如果为真，则下一步用户填写验证码，再用户点击“立即注册”时，会上传用户填写的验证码到服务器去做判断)
                    Document doc;
                    doc.SetObject();
                    Document::AllocatorType& allocator = doc.GetAllocator();

                    Value params(kObjectType);
                    Value str_account(kStringType);
                    Value str_password_new(kStringType);
                    Value str_password_sure(kStringType);
                    Value str_sim(kStringType);

                    std::string account = account_Num.toStdString();
                    std::string password_new = Password_Num.toStdString();
                    std::string password_sure = PwConfirm_Num.toStdString();
                    std::string sim = SignTool.UUID.toStdString();

                    str_account.SetString(account.c_str(), account.length());
                    str_password_new.SetString(password_new.c_str(), password_new.length());
                    str_password_sure.SetString(password_sure.c_str(), password_sure.length());
                    str_sim.SetString(sim.c_str(), sim.length());

                    params.AddMember("account", str_account, allocator);
                    params.AddMember("newPassword", str_password_new, allocator);//新密码
                    params.AddMember("sureNewPassword", str_password_sure, allocator);//确认密码
                    params.AddMember("sim", str_sim, allocator);

                    m_pJRPCClient->call("userFindPassowrdCode", params, 7);
                }
*/
/*
                    //第一步，信息加密(需要加密的信息有:sim、timeStamp、account、password、surePassword),不要忘记了base64Encode
                    QString sim=SignTool.UUID;//获取主板唯一标识码(UUID)
                    //qDebug()<<"sim="<<sim<<endl;
                    std::string cipher_sim=EnDecryptTool.des_encrypt(sim.toStdString(),key);
                    char *cipher_sim1=EnDecryptTool.Base64Encode(cipher_sim.c_str(),cipher_sim.length(),false);
                    //qDebug()<<"cipher_sim1="<<cipher_sim1<<endl;

                    QString timestamp=SignTool.Get_Time();
                    //qDebug()<<"timestamp="<<timestamp<<endl;
                    std::string cipher_timestamp=EnDecryptTool.des_encrypt(timestamp.toStdString(),key);
                    char *cipher_timestamp1=EnDecryptTool.Base64Encode(cipher_timestamp.c_str(),cipher_timestamp.length(),false);
                    //qDebug()<<"cipher_timestamp1="<<cipher_timestamp1<<endl;

                    std::string cipher_account=EnDecryptTool.des_encrypt(account_Num.toStdString(),key);
                    char *cipher_account1=EnDecryptTool.Base64Encode(cipher_account.c_str(),cipher_account.length(),false);
                    //qDebug()<<"cipher_account1="<<cipher_account1<<endl;

                    std::string cipher_password=EnDecryptTool.des_encrypt(Password_Num.toStdString(),key);
                    char *cipher_password1=EnDecryptTool.Base64Encode(cipher_password.c_str(),cipher_password.length(),false);
                    //qDebug()<<"cipher_password1="<<cipher_password1<<endl;

                    std::string cipher_surePassword=EnDecryptTool.des_encrypt(PwConfirm_Num.toStdString(),key);
                    char *cipher_surePassword1=EnDecryptTool.Base64Encode(cipher_surePassword.c_str(),cipher_surePassword.length(),false);
                    //qDebug()<<"cipher_surePassword1="<<cipher_surePassword1<<endl;
                    //第二步，密文签名(需要签名的信息有:act和(sim、timeStamp、account、password、surePassword)的密文)
                    map_sign.insert("act","getFindPassowrdCode");
                    map_sign.insert("sim",QString::fromStdString(std::string(cipher_sim1)));
                    map_sign.insert("timeStamp",QString::fromStdString(std::string(cipher_timestamp1)));
                    map_sign.insert("account",QString::fromStdString(std::string(cipher_account1)));
                    map_sign.insert("newPassword",QString::fromStdString(std::string(cipher_password1)));
                    map_sign.insert("sureNewPassword",QString::fromStdString(std::string(cipher_surePassword1)));
                    QByteArray ba_sing=SignTool.sign(map_sign);
                    //qDebug()<<"ba_sing="<<ba_sing<<endl;
                    //第三步,数据上传(需要上传的数据有:act、accessSign和(sim、timeStamp、account、password、surePassword)的密文)
                    QHttpMultiPart *multiPart=new QHttpMultiPart(QHttpMultiPart::FormDataType);

                    QHttpPart actPart;
                    QByteArray act_ba;
                    act_ba.append("getFindPassowrdCode");
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
                    passwordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"newPassword\";"));
                    passwordPart.setBody(password_ba);

                    QHttpPart surePasswordPart;
                    QByteArray surePassword_ba;
                    surePassword_ba.append(QString(cipher_surePassword1).toUtf8());
                    surePasswordPart.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("text/plain"));
                    surePasswordPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"sureNewPassword\";"));
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
                        }else if(statusCode == "101"){
                            ui->label_errRF1->setText("获取验证码失败");
                        }
                    }
                    */
//                }
//            }
//            return true;
//        }
//        else{
//            return false;
//        }
//    }
//    else
//    {
//        // pass the event on to the parent class
//        return QWidget::eventFilter(obj, event);
//    }
//}
