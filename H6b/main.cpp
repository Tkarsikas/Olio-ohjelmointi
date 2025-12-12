#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass *objExampleClass=new ExampleClass;
    objExampleClass->startToWait();
    //return a.exec();
    return 0;
}
