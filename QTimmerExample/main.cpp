#include <QCoreApplication>
#include<QTimer>
#include<QDebug>
#include<QSysInfo>
#include<test.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    for(int i=0;i<argc;i++)
    {
        qInfo()<<argv[I]<<"\n";
    }


    //    QTimer::singleShot(3000,&a,[]()
    //    {
    //    qDebug()<<"hello";
    //    });

    //QTimer::singleShot(3000,&test);


    test t;
    t.dostuff();

    int ret = a.exec();
    qInfo()<<"ret:"<<ret;
    return ret;
}
