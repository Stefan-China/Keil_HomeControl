#include "mainwindow.h"
#include <QApplication>



#include "screen/mainobject.h"
#include <globaldef.hpp>

//#include "LoginSystem/login_register.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainObject mainObject;
    mainObject.setInit();
    LOADQSS(GlobalSpace::STYLE_QSS_FILE_PATH);

    return a.exec();
}
