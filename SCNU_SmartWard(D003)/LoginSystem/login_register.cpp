#include "login_register.h"
#include "ui_login_register.h"


int DELAY_TIME=200;
Login_Register::Login_Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login_Register)
{
    ui->setupUi(this);
    this->setFocusPolicy(Qt::ClickFocus);
    key="njYD76zs";

    //设置阴影方法1
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


    pressed=false;//初始化时鼠标左键未按下，设置为false

    this->setFixedSize(911,484);//固定窗口的大小
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground,true);

    m_ForgetPW=new ForgetPassword_1();//初始化一个忘记密码界面类的对象
    m_Register=new Register();//初始化一个注册界面类的对象

    //给一些label安装事件过滤器
    ui->label_ForgetPW->installEventFilter(this);
    ui->label_RegisterAccount->installEventFilter(this);

    ui->btn_Login->setFocusPolicy(Qt::StrongFocus);

    //设置输入密码的lineEdit的格式
    ui->lineEdit_password->setPlaceholderText("请输入密码");//提示文字
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);//输入密码的格式
    QRegExp rx_password("^[^\u4e00-\u9fa5 ]{6,20}$");//密码6~20位字母、数字、符号
    QValidator *validator2 = new QRegExpValidator(rx_password,ui->lineEdit_password);
    ui->lineEdit_password->setValidator(validator2);
    //设置输入账号的ComboBox的格式
    ui->combo_account->lineEdit()->setPlaceholderText("请输入账号");
    //实例化一个正则表达式，限制只能输入数字，且个数为11//rx=QRegExp("^[0-9]{1,11}$");
    QRegExp rx_account("^[0-9]{1,11}$");
    QValidator *validator1 = new QRegExpValidator(rx_account,ui->combo_account->lineEdit());
    ui->combo_account->lineEdit()->setValidator(validator1);

    //高+4.10下拉框
    connect(ui->combo_account,SIGNAL(signal_to_db_remove_account(QString)), this, SLOT(remove_account(QString)));
    ui->combo_account->setEditable(true);
    ui->combo_account->setMaxVisibleItems(6);//一次性最多显示6个，超过6个就要使用滑动条了
    if(databs.Traverse())//检测数据库里是否有已经保存的数据
    {
        databs.add_account();//把已经保存的数据读取到databs.accounts里面
        for( int i = 0 ; i < databs.accounts.size() ; i++ )
        {
            ui->combo_account->increaseItem(QString::number(databs.accounts[i]));//设置下拉框items
        }
    }
    //高+4.10下拉框
    connect(ui->btn_GotoOfficialWeb,&QPushButton::clicked,this,&Login_Register::GoToOfficialWeb);
    connect(ui->btn_Min,&QPushButton::clicked,this,&Login_Register::Be_Mini);
    connect(ui->btn_Close,&QPushButton::clicked,this,&Login_Register::Be_Close);
    connect(ui->btn_Login,&QPushButton::clicked,this,&Login_Register::Login);
    connect(m_Register,&Register::Show_login,[=](){
        m_Register->close();
        this->show();
        ui->btn_Login->setText("登录");
        ui->label_err->clear();
    });
    connect(m_ForgetPW,&ForgetPassword_1::Toshow_login,[=](){
        m_ForgetPW->close();
        this->show();
        ui->btn_Login->setText("登录");
        ui->label_err->clear();
        //ui->label_err->setText("密码重置，请登录");
    });

    m_pHttpClient = new HttpHelper();
    m_pJRPCClient = new JRPCClient(this, m_pHttpClient);   //ps虚函数与多态，基类指针指向子类m_pHttpClient
    m_pHttpClient->setUrl(QUrl("http://124.172.189.59:8888/Admin/Api.php?s=index/index"));

    connect(m_pJRPCClient, SIGNAL(resultReady(Value&,int)), this, SLOT(onResultReady(Value&,int)));
    connect(m_pJRPCClient, SIGNAL(resultError(int,QString,Value&,int)), this, SLOT(onResultError(int,QString,Value&,int)));
    connect(m_pJRPCClient, SIGNAL(error(int,QString)), this, SLOT(onError(int,QString)));
    connect(m_pJRPCClient, SIGNAL(sent(long)), this, SLOT(onSent(long)));

//高+4.17
    QList<MyLineEdit *> my_lineEdit = this->findChildren<MyLineEdit *>();
    foreach (MyLineEdit *lineedit, my_lineEdit) {
        //connect(lineedit, SIGNAL(clicked()), this, SLOT(on_clicked()));
        //connect(lineedit, SIGNAL(LostFocus()), this, SLOT(on_focusout()));
    }
    QList<ComboBox *> my_ComboBox = this->findChildren<ComboBox *>();
    foreach (ComboBox *combobox, my_ComboBox) {
        //connect(combobox, SIGNAL(clicked()), this, SLOT(on_clicked()));
        //connect(combobox, SIGNAL(GetFocus()), this, SLOT(on_focusin()));
        //connect(combobox, SIGNAL(LostFocus()), this, SLOT(on_focusout()));
    }
}

Login_Register::~Login_Register()
{
//    if(databs.isOpen())
//    {
//        databs.close();
//    }
    delete ui;
}

bool Login_Register::ping_server(const QString ip)
{
    QString cmdstr = QString("ping %1 -n 1 -w %2").arg(ip).arg(1000);
    cmd.start(cmdstr);
    cmd.waitForReadyRead(1000);
    cmd.waitForFinished(1000);
    QString response = cmd.readAll().data();
    if(response.indexOf("TTL") == -1)
    {
        Login_state = 1;//离线登录
        return false;
    }else{
        Login_state = 0;//在线登录
        return true;
    }
}

//高4.25+
void Login_Register::on_clicked()
{
    flag = 1;
    show_soft();
}
void Login_Register::on_focusin()
{
    flag = 1;
    show_soft();
}
//高4.17+(4.25 改)
void Login_Register::on_focusout()
{
    flag = 0;
    Sleep(300);
    if( flag != 1 )
    close_soft();
}


//高+4.10 下拉框
void Login_Register::remove_account(QString account)
{
    databs.deleteByaccount(account.toLongLong());//删除当前items
}

void Login_Register::Check_UserDir(QString account)
{
    QDir *qd = new QDir();
    bool exist = qd->exists(QString("user/%1").arg(account));
    if(exist){
        qDebug("该用户在本地已拥有单独的文件夹");
    }else {
        qDebug("该用户在本地没有单独的文件夹,需要为其创建");
        if(!qd->mkpath(QString("user/%1").arg(account)))
        {
            qDebug("为当前用户创建本地文件夹失败");
        }else{
            qDebug("已成功为当前用户创建本地文件夹");
        }
    }
}

void Login_Register::CheckAutoLogin()
{
    QDir *qd = new QDir;
//5.7高注释  QString dir_str=QCoreApplication::applicationDirPath();
//5.7高注释  bool exist = qd->exists(dir_str+"Login_info.ini");
//5.7高修改
    bool exist = qd->exists("HNNK_UI/Login_info.ini");
    if(exist){
//5.7高注释      setting=new QSettings(QCoreApplication::applicationDirPath()+"Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
//5.7高修改
    setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
    bool ischecked;
    if(setting->value("info/ischecked")=="true")
    {ischecked=true;}else{ischecked=false;}
    ui->checkBox_autoLogin->setChecked(ischecked);
    }
    //如果勾选了自动登录，则"登录按钮"直接显示为"登录中..."
    if(ui->checkBox_autoLogin->isChecked())
    {
        ui->combo_account->setCurrentText(setting->value("info/account").toString());
        auto_login();
    }
}

//延时函数(单位:毫秒)
void Login_Register::Sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Login_Register::hideMainWindow()
{
//    m_MW.hide();//先隐藏APP主界面
}
void Login_Register::ReLogin()
{
//    m_MW->setWindowOpacity(0);
//    m_MW->HNNK_UI_begin(m_MW->m_is_first);
//    QTimer::singleShot(500, this, [=](){
//        m_MW->hide();
//        m_MW->HideHoverwindow();
//    });
//5.29    hoverWindow->hide();                    //高+ 2020.03.02
    ui->label_err->clear();
//    ui->label_err->setText("密码更改，重新登录");
    ui->combo_account->lineEdit()->clear();
    ui->lineEdit_password->clear();
    this->show();
    if(!ui->combo_account->hasFocus())            //6.15+ 让账号栏的comboBox获取到键盘焦点
        {ui->combo_account->setFocus();}
    ui->btn_Login->setEnabled(true);
    ui->btn_Login->setText("登录");
//    if(m_MW!=nullptr)
//    {
//        delete m_MW;
//        m_MW=nullptr;
//    }

}

void Login_Register::ReLogin1()
{
//    m_MW->hide();
//    m_MW->HideHoverwindow();
//5.29    hoverWindow->hide();                    //高+ 2020.03.02
    if(ui->checkBox_autoLogin->isChecked()){
        ui->checkBox_autoLogin->setChecked(false);//先取消自动登录
//5.7高注释      setting=new QSettings(QCoreApplication::applicationDirPath()+"Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
//5.7高修改
        setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
        setting->setValue("info/account","");//记录此时用户账号
        setting->setValue("info/ischecked","false");//记录此时用户设置的"下次自动登录"的状态
    }
    ui->label_err->clear();
    ui->label_err->setText("已注销，请重新登录");
    ui->combo_account->lineEdit()->clear();
    ui->lineEdit_password->clear();
    this->show();
    if(!ui->combo_account->hasFocus())            //6.15+ 让账号栏的comboBox获取到键盘焦点
        {ui->combo_account->setFocus();}
    ui->btn_Login->setEnabled(true);
    ui->btn_Login->setText("登录");

//    if(m_MW!=nullptr)
//    {
//        delete m_MW;
//        m_MW=nullptr;
//    }
    //SHOW要隐藏
}

void Login_Register::Delete_HoverWindow()
{
//5.29    if(hoverWindow){
//5.29        delete hoverWindow;
//5.29    }
}

void Login_Register::offline_login_auto()
{
    //读取用户输入的账号密码信息
    std::string account = ui->combo_account->currentText().toStdString();
    int uid = databs.query_uid(QString::fromStdString(account).toLongLong());
    std::string  password_auto = databs.query(QString::fromStdString(account).toLongLong());
    ui->lineEdit_password->setText(QString::fromStdString(password_auto));


    ui->btn_Login->setText("登录中...");
    ui->btn_Login->setEnabled(false);

    Sleep(1000);                        //避免一闪而过，这里sleep了1秒

    this->hide();
//    if(!m_MW){
//       m_MW=new MainWindow();
//       connect(m_MW,SIGNAL(GoToReLogin()),this,SLOT(ReLogin()));
//       connect(m_MW,SIGNAL(GoToReLogin1()),this,SLOT(ReLogin1()));
//       connect(m_MW,&MainWindow::Close_Login,[=](){
//       this->close();
//       if(m_MW)
//       {
//              delete m_MW;
//       }
//       });
//              m_MW->show();
//       }
//       else{
//                if(m_MW->isHidden())
//                {
//                    m_MW->show();
//                    m_MW->ShowHoverWindow();
//                }
//           }
////            if(Value_first_login=="0"){
////                m_MW->m_is_first=true;
////            }else{
////                m_MW->m_is_first=true;
////            }
//            m_MW->HNNK_UI_begin(m_MW->m_is_first);      //进入首页跳转

            ui->btn_Login->setText("登录");
            ui->btn_Login->setEnabled(true);

            map_userInfo.insert("account",QString::fromStdString(account));
            map_userInfo.insert("uid",QString::number(uid));
            map_userInfo.insert("Login_state",QString::number(Login_state));//将登录状态传给mainwindow
//            m_MW->SendUserInfo(map_userInfo,false);//将用户信息传给APP

            //登录成功后判断当前账号在下拉框数据库中是否已经存在，若不存在则保存进去
            if(!databs.query_comboBox(QString::fromStdString(account).toLongLong()))
            {
                databs.insert(QString::fromStdString(account).toLongLong());
                ui->combo_account->increaseItem(QString::fromStdString(account));//设置下拉框items
            }
            qDebug("离线自动登录成功");
}

//自动登录(获取账号之后直接去本地数据库里查找密码)
//自动登录成功后会收到服务器返回的成功的状态码，如果为真，则发送一个信号给主界面，主界面接收到信号之后，隐藏自动登录窗口，跳到主界面
void Login_Register::auto_login()
{
    if(ping_server("124.172.189.59") == false)          //ping服务器失败，转离线模式
    {
        offline_login_auto();
    }
    else{

        ui->btn_Login->setText("登录中...");
        ui->btn_Login->setEnabled(false);
        QString account_auto= ui->combo_account->currentText();//拿这个auto_account去数据库里找密码，同时把这个账户加密
        QString UUID_auto=SignTool.UUID;
        //    QString Time_auto=SignTool.Get_Time();
        std::string  cipherText_password_auto;
        cipherText_password_auto=databs.query(account_auto.toLongLong());//这里获取到的密码就是(base64Encode了的)密文
        ui->lineEdit_password->setText(QString::fromStdString(cipherText_password_auto));

        Sleep(1000);                                            //避免一闪而过，这里sleep了1秒

        Document doc;
        doc.SetObject();
        Document::AllocatorType& allocator = doc.GetAllocator();

        Value params(kObjectType);
        Value str_account(kStringType);
        Value str_password(kStringType);
        Value str_sim(kStringType);

        std::string account = account_auto.toStdString();
        std::string password = cipherText_password_auto;
        std::string sim = UUID_auto.toStdString();

        map_sign.insert("account",QString::fromStdString(std::string(account)));//账号
        map_sign.insert("password",QString::fromStdString(std::string(password)));//密码
        map_sign.insert("sim",QString::fromStdString(std::string(sim)));//客户端识别码
        QByteArray ba_sing=SignTool.sign(map_sign);

        str_account.SetString(account.c_str(), account.length());
        str_password.SetString(password.c_str(), password.length());
        str_sim.SetString(sim.c_str(), sim.length());

        params.AddMember("account", str_account, allocator);
        params.AddMember("password", str_password, allocator);
        params.AddMember("sim", str_sim, allocator);

        m_pJRPCClient->m_pTransport->m_sign=ba_sing;
        m_pJRPCClient->call("userLogin", params, 6);

    }


}

void Login_Register::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        drag_point=event->globalPos()-this->pos();
        pressed=true;
        event->accept();
    }
}

void Login_Register::mouseReleaseEvent(QMouseEvent *event)
{
     pressed=false;
}

void Login_Register::mouseMoveEvent(QMouseEvent *event)
{
        if(pressed)
        {
            this->move(event->globalPos()-drag_point);//鼠标拖动窗口
            event->accept();
        }
}

//绘制背景底图
void Login_Register::paintEvent(QPaintEvent *event)
{

}

//设置登录快捷键
void Login_Register::keyPressEvent(QKeyEvent* event)
{
    if((event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) && ui->btn_Login->isEnabled())
    {
        Login();
    }
}

//事件过滤器,处理label的点击操作
bool Login_Register::eventFilter(QObject *obj, QEvent *event)
{
   if(event->type()==QEvent::MouseButtonRelease)
   {
       //"忘记密码？"标签被点击
       if(obj==ui->label_ForgetPW)
       {
           this->hide();
           Sleep(DELAY_TIME);
           m_ForgetPW->show();//显示忘记密码界面

        return true;
       }
       else if(obj==ui->label_RegisterAccount)
       {
           this->hide();
           Sleep(DELAY_TIME);
           m_Register->show();//显示注册界面

        return true;
       }
       else{
           return false;
       }
   }else
   {
       // pass the event on to the parent class
       return QWidget::eventFilter(obj, event);
   }
}

void Login_Register::offline_login()
{
    //读取用户输入的账号密码信息
    std::string account = ui->combo_account->currentText().toStdString();
    std::string password = ui->lineEdit_password->text().toStdString();
    int uid;

    //根据账号在本地数据库中查询密码并核对用户输入是否正确
    if(databs.query1(QString::fromStdString(account).toLongLong())==false)//数据库中不存在该账户
    {
        //把返回来的uid(和账号密码)存储到数据库中
        ui->label_err->setText("请先连接网络");
    }else{
        std::string  query_password=databs.query(QString::fromStdString(account).toLongLong()); //查询数据库中存储的密码
        uid = databs.query_uid(QString::fromStdString(account).toLongLong());

        if(password != query_password)                           //核对输入的密码
        {
            ui->label_err->setText("密码错误！");
        }else                                                   //输入的都是正确的，进行离线登录
        {

            ui->btn_Login->setText("登录中...");
            ui->btn_Login->setEnabled(false);

            this->hide();
            //蔡＋
            MainObject *mainObject=new MainObject(this);
            mainObject->setInit();
            LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);
            ui->btn_Login->setText("登录");
            ui->btn_Login->setEnabled(true);

            map_userInfo.insert("account",QString::fromStdString(account));
            map_userInfo.insert("uid",QString::number(uid));
            map_userInfo.insert("Login_state",QString::number(Login_state));//将登录状态传给mainwindow
//            m_MW->SendUserInfo(map_userInfo,false);//将用户信息传给APP

            //登录成功后判断当前账号在下拉框数据库中是否已经存在，若不存在则保存进去
            if(!databs.query_comboBox(QString::fromStdString(account).toLongLong()))
            {
                databs.insert(QString::fromStdString(account).toLongLong());
                ui->combo_account->increaseItem(QString::fromStdString(account));//设置下拉框items
            }
            //高+4.10下拉框
            if(ui->checkBox_autoLogin->isChecked())//勾选了下次自动登录(保存当前的账号和"下次自动登录"的状态到本地)
            {
                //先判断ini文件是否已经存在，若存在，则直接设置value，若不存在，则先新建再设置value
                QDir *qd = new QDir;

    //5.7高修改
                bool exist = qd->exists("HNNK_UI/Login_info.ini");
                if(exist){
    //5.7高修改
                    setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
                    setting->setValue("info/account",QString::fromStdString(account));//记录此时用户账号
                    setting->setValue("info/ischecked","true");//记录此时用户设置的"下次自动登录"的状态
                }else{
    //5.7高修改
                    setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在新建一个ini
                    setting->setValue("info/account",QString::fromStdString(account));//记录此时用户账号
                    setting->setValue("info/ischecked","true");//记录此时用户设置的"下次自动登录"的状态
                }
            }else{
                QDir *qd = new QDir;

    //5.7高修改
                bool exist = qd->exists("HNNK_UI/Login_info.ini");
                if(exist){

    //5.7高修改
                    setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
                    setting->setValue("info/account","");//记录此时用户账号
                    setting->setValue("info/ischecked","false");//记录此时用户设置的"下次自动登录"的状态
                }
            }
            qDebug("离线登录成功");
        }
    }
}

//登录
void Login_Register::Login()
{
    ui->label_err->clear();

    if(ping_server("124.172.189.59") == false)          //ping服务器失败，转离线模式
    {
        offline_login();
    }
    else{

        ui->btn_Login->setText("登录中...");
        ui->btn_Login->setEnabled(false);

        Document doc;
        doc.SetObject();
        Document::AllocatorType& allocator = doc.GetAllocator();

        Value params(kObjectType);
        Value str_account(kStringType);
        Value str_password(kStringType);
        Value str_sim(kStringType);

        std::string account = ui->combo_account->currentText().toStdString();
        std::string password = ui->lineEdit_password->text().toStdString();
        std::string sim = SignTool.UUID.toStdString();

        map_sign.insert("account",QString::fromStdString(std::string(account)));//账号
        map_sign.insert("password",QString::fromStdString(std::string(password)));//密码
        map_sign.insert("sim",QString::fromStdString(std::string(sim)));//客户端识别码
        QByteArray ba_sing=SignTool.sign(map_sign);

        str_account.SetString(account.c_str(), account.length());
        str_password.SetString(password.c_str(), password.length());
        str_sim.SetString(sim.c_str(), sim.length());

        params.AddMember("account", str_account, allocator);
        params.AddMember("password", str_password, allocator);
        params.AddMember("sim", str_sim, allocator);

        m_pJRPCClient->m_pTransport->m_sign=ba_sing;
        m_pJRPCClient->call("userLogin", params, 5);

    }
}

//打开官网
void Login_Register::GoToOfficialWeb()
{
    QDesktopServices::openUrl(QUrl("https://blog.csdn.net/qq_28810395"));
}

//最小化窗口
void Login_Register::Be_Mini()
{
   this->showMinimized();
}

//关闭窗口
void Login_Register::Be_Close()
{
    DWORD pid2 = GetCurrentProcessId(); // 当前进程ID
    HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS,FALSE,pid2); // 获取进程句柄
    if( hProc == NULL)
        {
            qDebug() << "OpenProcess error ";
            return;
        }
    BOOL ret = TerminateProcess(hProc,0); // 强制进程退出
        if(ret == FALSE)
        {
            qDebug() << "TerminateProcess error ";
            return ;
        }
        CloseHandle(hProc);


}

//3.20+
void Login_Register::onResultReady(Value &result, int id)
{
        switch(id) {
        case 5://登录
            if (result.IsString()) {
                QString content = result.GetString();
                qDebug("userLogin : %s", content.toUtf8().data());
                Document doc;
                if(!doc.Parse(content.toStdString().data()).HasParseError())
                {
                    QString msg_back;
                    int code;
                    QString Value_account,Value_nickname,Value_user_id,Value_headimgurl,Value_headimg_suffix,Value_first_login;
                    if(doc.HasMember("data") && doc["data"].IsObject()){
                        const Value& result_data = doc["data"];
                        Value_account=result_data["account"].GetString();
                        Value_nickname=result_data["nickname"].GetString();
                        Value_user_id=QString::number(result_data["user_id"].GetInt());
                        Value_headimgurl=result_data["headimgurl"].GetString();
                        Value_headimg_suffix=result_data["headimg_suffix"].GetString();
                        Value_first_login=QString::number(result_data["first_login"].GetInt());

                        qDebug() << "account = " << result_data["account"].GetString() << endl;
                        qDebug() << "nickname = " << result_data["nickname"].GetString() << endl;
                        qDebug() << "user_id = " << result_data["user_id"].GetInt() << endl;
                        qDebug() << "headimgurl = " << result_data["headimgurl"].GetString() << endl;
                        qDebug() << "headimg_suffix = " << result_data["headimg_suffix"].GetString() << endl;
                        qDebug() << "first_login = " << result_data["first_login"].GetInt() << endl;
                    }
                    if (doc.HasMember("code") && doc["code"].IsInt()) {
                        code = doc["code"].GetInt();
                        qDebug() << "code=" << QString::number(code) <<endl;
                    }
                    if (doc.HasMember("msg") && doc["msg"].IsString()) {
                        msg_back = doc["msg"].GetString();
                        qDebug() << "msg: " << doc["msg"].GetString();
                    }

                if (code == 100) {// 请求成功
                    //①先根据手机号在本地查询看是否已经保存过，如果没有保存过，
                    //则把返回来的uid(和账号密码)存储到数据库中，如果保存过则跳过
                    qDebug()<<"登陆成功"<<endl;
                    //6.23+         监测当前用户在本地是否已经存在单独的一个文件夹，若无则新建，若有则跳过
                    Check_UserDir(Value_account);

                    this->hide();
                    MainObject *mainObject=new MainObject(this);
                    mainObject->setInit();
                    LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);
//
                    //////////////////////高+ 2020.03.02/////////////////

                    ui->btn_Login->setText("登录");

                    //高+4.10下拉框
                    //登录成功后判断当前账号在下拉框数据库中是否已经存在，若不存在则保存进去
                    if(!databs.query_comboBox(Value_account.toLongLong()))
                    {
                        databs.insert(Value_account.toLongLong());
                        ui->combo_account->increaseItem(Value_account);//设置下拉框items
                    }
                    //高+4.10下拉框
                    if(ui->checkBox_autoLogin->isChecked())//勾选了下次自动登录(保存当前的账号和"下次自动登录"的状态到本地)
                    {
                        //先判断ini文件是否已经存在，若存在，则直接设置value，若不存在，则先新建再设置value
                        QDir *qd = new QDir;
            //5.7高注释  QString dir_str=QCoreApplication::applicationDirPath();
            //5.7高注释  bool exist = qd->exists(dir_str+"Login_info.ini");
            //5.7高修改
                        bool exist = qd->exists("HNNK_UI/Login_info.ini");
                        if(exist){
            //5.7高注释      setting=new QSettings(QCoreApplication::applicationDirPath()+"Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
            //5.7高修改
                            setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
                            setting->setValue("info/account",Value_account);//记录此时用户账号
                            setting->setValue("info/ischecked","true");//记录此时用户设置的"下次自动登录"的状态
                        }else{
            //5.7高注释      setting=new QSettings(QCoreApplication::applicationDirPath()+"Login_info.ini",QSettings::IniFormat);//此时是在新建一个ini
            //5.7高修改
                            setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在新建一个ini
                            setting->setValue("info/account",Value_account);//记录此时用户账号
                            setting->setValue("info/ischecked","true");//记录此时用户设置的"下次自动登录"的状态
                        }
                    }else{
                        QDir *qd = new QDir;
            //5.7高注释  QString dir_str=QCoreApplication::applicationDirPath();
            //5.7高注释  bool exist = qd->exists(dir_str+"Login_info.ini");
            //5.7高修改
                        bool exist = qd->exists("HNNK_UI/Login_info.ini");
                        if(exist){
            //5.7高注释      setting=new QSettings(QCoreApplication::applicationDirPath()+"Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
            //5.7高修改
                            setting=new QSettings("HNNK_UI/Login_info.ini",QSettings::IniFormat);//此时是在打开一个ini
                            setting->setValue("info/account","");//记录此时用户账号
                            setting->setValue("info/ischecked","false");//记录此时用户设置的"下次自动登录"的状态
                        }
                    }
                    if(databs.query1(Value_account.toLongLong())==false)//数据库中不存在该账户
                    {
                        //把返回来的uid(和账号密码)存储到数据库中
                        databs.insert(Value_user_id.toStdString(),Value_account.toLongLong(),std::string(ui->lineEdit_password->text().toStdString()));
                    }else{
                        std::string  cipher_password_update=databs.query(Value_account.toLongLong());
                        if(cipher_password_update!=std::string(ui->lineEdit_password->text().toStdString()))//如果是改完密码之后再次登录，则需要把密码更新
                        {
                         databs.updateById(Value_account.toLongLong(),std::string(ui->lineEdit_password->text().toStdString()));
                        }else
                        {qDebug()<<"该账户在数据库中已存在"<<endl;}
                    }
                    //②保存昵称"name": "", 头像"headimgurl": "http://124.172.189.59:8888/APISET/data/images/defaultImg.png"
                    map_userInfo.insert("name",Value_nickname);//昵称
                    map_userInfo.insert("headimgurl",Value_headimgurl);
                    map_userInfo.insert("state","online");
                    map_userInfo.insert("account",Value_account);
                    map_userInfo.insert("uid",Value_user_id);
                    map_userInfo.insert("headimg_suffix",Value_headimg_suffix);
                    map_userInfo.insert("Login_state",QString::number(Login_state));//将登录状态传给mainwindow
//                    m_MW->SendUserInfo(map_userInfo,true);//将用户信息传给APP
                }else if(code == 101){
                    //请求失败，重新登录
                    ui->btn_Login->setEnabled(true);
                    //ui->label_err->setText("登录失败");
                    ui->label_err->setText(msg_back);
                    ui->btn_Login->setText("登录");
                }
               }
            }
            break;
        case 6://自动登录
            if (result.IsString()) {
                QString content = result.GetString();
                qDebug("user auto_Login : %s", content.toUtf8().data());
                Document doc;
                if(!doc.Parse(content.toStdString().data()).HasParseError())
                {
                    int code;
                    QString msg_back;
                    QString Value_account,Value_nickname,Value_user_id,Value_headimgurl,Value_headimg_suffix,Value_first_login;
                    if(doc.HasMember("data") && doc["data"].IsObject()){
                        const Value& result_data = doc["data"];
                        Value_account=result_data["account"].GetString();
                        Value_nickname=result_data["nickname"].GetString();
                        Value_user_id=QString::number(result_data["user_id"].GetInt());
                        Value_headimgurl=result_data["headimgurl"].GetString();
                        Value_headimg_suffix=result_data["headimg_suffix"].GetString();
                        Value_first_login=QString::number(result_data["first_login"].GetInt());

                        qDebug() << "account = " << result_data["account"].GetString() << endl;
                        qDebug() << "nickname = " << result_data["nickname"].GetString() << endl;
                        qDebug() << "user_id = " << result_data["user_id"].GetInt() << endl;
                        qDebug() << "headimgurl = " << result_data["headimgurl"].GetString() << endl;
                        qDebug() << "headimg_suffix = " << result_data["headimg_suffix"].GetString() << endl;
                        qDebug() << "first_login = " << result_data["first_login"].GetInt() << endl;
                    }
                    if (doc.HasMember("code") && doc["code"].IsInt()) {
                        code = doc["code"].GetInt();
                        qDebug() << "code=" << QString::number(code) <<endl;
                    }
                    if (doc.HasMember("msg") && doc["msg"].IsString()) {
                        msg_back = doc["msg"].GetString();
                        qDebug() << "msg: " << doc["msg"].GetString();
                    }

                if (code == 100) {// 请求成功
                    //①先根据手机号在本地查询看是否已经保存过，如果没有保存过，则把返回来的uid(和账号密码)存储到数据库中，如果保存过则跳过
                    qDebug()<<"登陆成功"<<endl;
                    this->hide();

                    //高+4.10下拉框
                    //登录成功后判断当前账号在下拉框数据库中是否已经存在，若不存在则保存进去
                    if(!databs.query_comboBox(Value_account.toLongLong()))
                    {
                        databs.insert(Value_account.toLongLong());
                        ui->combo_account->increaseItem(Value_account);//设置下拉框items
                    }
                    //高+4.10下拉框

                    MainObject *mainObject=new MainObject(this);
                    mainObject->setInit();
                    LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);

                    //②保存昵称"name": "", 头像"headimgurl": "http://124.172.189.59:8888/APISET/data/images/defaultImg.png"
                    map_userInfo.insert("name",Value_nickname);//昵称
                    map_userInfo.insert("headimgurl",Value_headimgurl);
                    map_userInfo.insert("state","online");
                    map_userInfo.insert("account",Value_account);
                    map_userInfo.insert("uid",Value_user_id);
                    map_userInfo.insert("headimg_suffix",Value_headimg_suffix);
                    map_userInfo.insert("Login_state",QString::number(Login_state));//将登录状态传给mainwindow
//                    m_MW->SendUserInfo(map_userInfo,true);//将用户信息传给APP
                }else if(code == 101){
                    //请求失败，重新登录
                    ui->btn_Login->setEnabled(true);
                    //ui->label_err->setText("登录失败");
                    ui->label_err->setText(msg_back);
                    ui->btn_Login->setText("登录");
                }
               }
            }
            break;
        default:
            break;
        }
}

void Login_Register::onResultError(int code, QString message, Value &data, int id)
{
    qDebug("JsonRPC call id %id error code %d: %s", id, code, message.toUtf8().data());
}

void Login_Register::onError(int code, QString message)
{
    qDebug("error code %d: %s", code, message.toUtf8().data());
}

void Login_Register::onSent(long bytes)
{

}
//3.20+
