#ifndef MYCLASS_H
#define MYCLASS_H

#include <QWidget>

class QPushButton;
class QLabel;
class QLineEdit;
class QString;

class MyClass : public QWidget
{
    Q_OBJECT
public:
    explicit MyClass(QWidget *parent = 0);
    
signals:
    
public slots:
    void slotButtonClicked();

private:

    QPushButton* but_run;
    QLabel* l_dis;
    QLineEdit* le_ent;
    QString* str_num;
    QLabel* l_do;
    
};

#endif // MYCLASS_H
