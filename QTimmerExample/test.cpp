#include "test.h"

test::test(QObject *parent)
{
   number = 0;
   timer.setInterval(1000);
   connect(&timer,&QTimer::timeout,this,&::test::timout);
}

void test::timout()
{
    number++;

    qDebug()<<QTime::currentTime().toString(Qt::DateFormat::TextDate);
    qDebug()<<QTime::currentTime().msec();
    qDebug()<<QDateTime::currentMSecsSinceEpoch();

    if(number == 300)
    {
        timer.stop();
    }

}

void test::dostuff()
{
    timer.start();
    number=0;
}
