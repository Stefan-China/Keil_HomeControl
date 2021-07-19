#include "database.h"

DataBase::DataBase(QObject *parent) : QObject(parent)
{
      createConnection();
      createTable_User_Info();
      createTable_comboBox();
      createTable_shortcut();   //存放快捷方式信息
}

bool DataBase::isOpen()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    return db.isOpen();
}

//建立一个数据库连接
bool DataBase::createConnection()  //创建一个连接
{
    QDir *qd = new QDir;
    QString dir_str=qd->currentPath();
    //以后就可以用"sqlite1"与数据库进行连接了

     QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "sqlite1");
     if(QSqlDatabase::contains("sqlite1")){
               db = QSqlDatabase::database("sqlite1");
     }else{
               db = QSqlDatabase::addDatabase("QSQLITE", "sqlite1");
     }
    db.setDatabaseName(dir_str+"/LocalInfo.db");
    if( !db.open())
    {
        qDebug() << "无法建立数据库连接"<<db.lastError()<<endl;
        return false;
    }
    return true;
}

void DataBase::close()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    db.close();
}

bool DataBase::createTable_User_Info()       //创建并打开数据库表
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
//    bool success = query.exec("create table User_Info(id int primary key,attribute varchar,"
//                              "type varchar,kind varchar,nation int,carnumber int,elevaltor int,"
//                              "distance int,oil int,temperature int)");
    //创建一个表 主键为uid，保存账户信息
    QStringList exist_tables=db.tables(QSql::Tables);
    if(exist_tables.contains("User_Info"))
    {
        qDebug()<<"表User_Info已存在，请直接打开"<<endl;
    }else{
        bool success = query.exec(QString("create table User_Info(uid int primary key,account varchar,password varchar)"));
        if(success)
        {
            qDebug() << QObject::tr("数据库表User_Info创建成功");
            return true;
        }
        else
        {
            qDebug() << QObject::tr("数据库表User_Info创建失败");
            return false;
        }
    }
}

bool DataBase::createTable_comboBox()       //创建并打开数据库表comboBox
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
//    bool success = query.exec("create table User_Info(id int primary key,attribute varchar,"
//                              "type varchar,kind varchar,nation int,carnumber int,elevaltor int,"
//                              "distance int,oil int,temperature int)");
    //创建一个表 主键为账号，保存账户信息
    QStringList exist_tables=db.tables(QSql::Tables);
    if(exist_tables.contains("comboBox"))
    {
        qDebug()<<"表comboBox已存在，请直接打开"<<endl;
    }else{
        bool success = query.exec(QString("create table comboBox(account int primary key)"));
        if(success)
        {
            qDebug() << QObject::tr("数据库表comboBox创建成功");
            return true;
        }
        else
        {
            qDebug() << QObject::tr("数据库表comboBox创建失败");
            return false;
        }
    }
}

bool DataBase::insert(std::string uid, long long account, std::string password)            //插入数据(uid、account、password)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.prepare("insert into User_Info(uid,account,password) values(:uid, :account,:password)");

    QVariantList uidList;
    uidList<<QString::fromStdString(uid);
    QVariantList accountList;
    accountList<<QString::number(account);
    QVariantList passwordList;
    passwordList<<QString::fromStdString(password);

    query.bindValue(":uid",uidList);
    query.bindValue(":account",accountList);
    query.bindValue(":password",passwordList);
    bool success=query.execBatch();
    if(!success)
    {
        QSqlError lastError = query.lastError();
        qDebug() << lastError.driverText() << QString(QObject::tr("插入失败"));
        return false;
    }
    return true;
}

bool DataBase::insert(long long account)//向表comboBox中插入数据(accountd)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.prepare("insert into comboBox(account) values(:account)");

    QVariantList accountList;
    accountList<<QString::number(account);
    query.bindValue(":account",accountList);
    bool success=query.execBatch();
    if(!success)
    {
        QSqlError lastError = query.lastError();
        qDebug() << lastError.driverText() << QString(QObject::tr("插入失败"));
        return false;
    }
    return true;
}


bool DataBase::Traverse()                               //遍历数据库表comboBox的所有account
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec(QString("select account from comboBox"));
    if(!query.next()){ return false;
//    qDebug("没有记录");
    }
    else {
//        qDebug("有记录");
        return true;
    }
}

void DataBase::add_account()
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec(QString("select account from comboBox"));
    while(query.next())//一行一行地遍历
    {
//        qDebug("记录。。。");
        //取出当前行
        long long account_exist=query.value("account").toLongLong();
        accounts.push_back(account_exist);
    }
}

bool DataBase::deleteByaccount(long long account_input)  //在表comboBox中删除account所对应的数据
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

    query.prepare(QString("delete from comboBox where account = %1").arg(account_input));
    if(!query.exec())
    {
        qDebug() << "删除记录失败！";
        return false;
    }
    return true;
}

bool DataBase::query_comboBox(long long account_input)      //根据账号查询在数据库comboBox中是否已存在该账号
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

    query.exec(QString("select * from comboBox where account =%1").arg(account_input));
    if(query.next()){
        return true;
    }else{
        return false;
    }
}

std::string DataBase::query(long long account_input) //根据账户查询密码、返回值表示该账户在本地数据库中对应的密码
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

    std::string password_back;

    query.exec(QString("select * from User_Info where account =%1").arg(account_input));
    while(query.next())//一行一行地遍历
    {
        //取出当前行
        password_back=query.value("password").toString().toStdString();
    }
        return password_back;
}
int DataBase::query_uid(long long account_input) //根据账户查询密码、返回值表示该账户在本地数据库中对应的密码
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

    int uid;

    query.exec(QString("select * from User_Info where account =%1").arg(account_input));
    while(query.next())//一行一行地遍历
    {
        //取出当前行
        uid=query.value("uid").toInt();
    }
        return uid;
}

bool DataBase::query1(long long account_input) //根据账户查询，返回值表示该账户在本地数据库中是否存在
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

    query.exec(QString("select * from User_Info where account =%1").arg(account_input));
    if(query.next()){
        return true;
    }else{
        return false;
    }
}

bool DataBase::updateById(long long account_input,std::string password)  //根据account更新密码(在修改密码或者找回密码操作之后执行)
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
        QSqlQuery query(db);
        query.prepare(QString("update User_Info set password='%1' where account='%2'").arg(QString::fromStdString(password)).arg(account_input));

        bool success=query.exec();
        if(!success)
        {
            qDebug()<<"更新错误哦"<<endl;
            QSqlError lastError = query.lastError();
            qDebug() << lastError.driverText() << QString(QObject::tr("更新失败"));
        }
        return true;
}




bool DataBase::createTable_shortcut()    //创建并打开数据库表
{
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);

    //创建一个表 主键为uid，保存账户信息
    QStringList exist_tables=db.tables(QSql::Tables);
    if(exist_tables.contains("kuaijie"))
    {
        query.prepare(QString("delete * from kuaijie where buttonid=%1").arg(4));

        qDebug()<<query.exec();

        qDebug()<<"表shortcut已存在，请直接打开"<<endl;
    }else{
        bool success = query.exec(QString("create table kuaijie(buttonid int , module int, resource varchar,chinese varchar,whichpage int , btn_cnt int)"));
//                                                               按钮的属性        所属模块        资源路径            中文名         所属页面      当前已添加快捷方式

        if(success)
        {
            qDebug() << QObject::tr("数据库表kuaijie创建成功");
            return true;
        }
        else
        {
            qDebug() << QObject::tr("数据库表kuaijie创建失败");
            return false;
        }
    }
}

bool DataBase::delete_shortcut()         //将元素从表中移除 （预留）
{
    qDebug()<<endl<<endl<<"truncate"<<endl<<endl;
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    bool is_ok=query.exec(QString("delete from kuaijie"));     //将原表中数据全部删除
    return is_ok;


}

bool DataBase::insert_shortcut(int btnid,int module,QString resource,QString chinese,int whichpage, int index)         //将元素插入表中
{
    qDebug()<<endl<<endl<<"insert_shortcut"<<endl<<endl;
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.prepare("insert into kuaijie(buttonid,  module,  resource,  chinese,  whichpage,  btn_cnt) "
                  "            values(:buttonid, :module, :resource, :chinese, :whichpage, :btn_cnt)");


    QVariantList id;
    id<<QString::number(btnid);

    QVariantList mod;
    mod<<QString::number(module);

    QVariantList res;
    res<<resource;

    QVariantList chi;
    chi<<chinese;

    QVariantList whi;
    whi<<QString::number(whichpage);

    QVariantList ind;
    ind<<QString::number(index);



    qDebug()<<id<<mod<<res<<chi<<whi<<ind<<endl;

    query.bindValue(":buttonid" ,id);
    query.bindValue(":module"   ,mod);
    query.bindValue(":resource" ,res);
    query.bindValue(":chinese"  ,chi);
    query.bindValue(":whichpage",whi);
    query.bindValue(":btn_cnt"  ,ind);

    bool is_ok=query.execBatch();
    if(!is_ok)
    {
        QSqlError lastError = query.lastError();
        qDebug() << lastError.driverText() << QString(QObject::tr("kuaijie插入失败"));
        return false;

    }
    qDebug()<<"插入成功"<<endl;

    return true;
}

QVector<shortcut_pro> DataBase::get_shortcut()
{
    qDebug()<<endl<<endl<<"get_shortcut"<<endl<<endl;
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec(QString("select * from kuaijie"));

    QVector<shortcut_pro> result;
    while(query.next())
    {
        shortcut_pro tmp;
        tmp.id=query.value("buttonid").toInt();
        tmp.mod=query.value("module").toInt();
        tmp.res=query.value("resource").toString();
        tmp.chi=query.value("chinese").toString();
        tmp.whi=query.value("whichpage").toInt();
        tmp.index=query.value("btn_cnt").toInt();
        result.push_back(tmp);
    }
    qDebug()<<endl<<endl<<endl<<result.size()<<endl<<endl<<endl<<endl;

    return result;
}

bool DataBase::is_shortcut_empty()       //判断数据库是不是空的
{
    qDebug()<<endl<<endl<<"is_shortcut_empty"<<endl<<endl;
    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //建立数据库连接
    QSqlQuery query(db);
    query.exec(QString("select * from kuaijie"));
    if(!query.next()){
        qDebug("没有记录");
        return true;
    }
    else {
        qDebug("有记录");
        return false;
    }
}













