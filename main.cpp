#include <QApplication>
#include "myclass.h"

int main (int argc, char** argv)
{
    QApplication app (argc, argv);

    MyClass Mc;

    Mc.resize (300, 200);
    Mc.show();

    return app.exec();
}
