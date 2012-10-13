#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include <QGridLayout>
#include <QLCDNumber>

#include "myclass.h"


MyClass::MyClass(QWidget *parent) :
    QWidget(parent)
{
    l_dis = new QLabel;
    le_ent = new QLineEdit;
    str_num = new QString;
    but_run = new QPushButton("Run");
    l_do = new QLabel;

    QObject::connect(but_run, SIGNAL(clicked()) ,
                     SLOT (slotButtonClicked()));


    // Layout setup

    QGridLayout* firstLay = new QGridLayout;

        firstLay ->setMargin(15);
        firstLay ->setSpacing(20);

        firstLay -> addWidget(l_dis, 0,0);
        firstLay -> addWidget(le_ent, 0,1);
        firstLay -> addWidget(but_run, 0,2);
        firstLay -> addWidget(l_do, 0,3);

        setLayout(firstLay);

}

void MyClass::slotButtonClicked()
{
    *str_num = le_ent->text();
    double m_num = str_num->toDouble();

    l_do->setNum(m_num);

    l_dis->setText(* str_num);



}
