/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_Title;
    QPushButton *button_clear;
    QPushButton *button_save;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_dateOfBirth;
    QDateEdit *input_dateOfBirth;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_firstName;
    QLabel *label_LastName;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *input_firstNmae;
    QLineEdit *input_lastName;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_addressCountry;
    QLabel *label_addressRegion;
    QLabel *label_addressCity;
    QLabel *label_addressStreet;
    QLabel *label_addressHouse;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *input_addressCountry;
    QLineEdit *input_addressRegion;
    QLineEdit *input_addressCity;
    QLineEdit *input_addressStreet;
    QLineEdit *input_addressHouse;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *input_phoneNumber;
    QLineEdit *input_phoneType;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_phoneNumber;
    QLabel *label_phoneType;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Console"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_Title = new QLabel(centralwidget);
        label_Title->setObjectName(QString::fromUtf8("label_Title"));
        label_Title->setGeometry(QRect(170, 0, 391, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Console"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_Title->setFont(font1);
        label_Title->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_Title->setTextFormat(Qt::PlainText);
        label_Title->setAlignment(Qt::AlignCenter);
        button_clear = new QPushButton(centralwidget);
        button_clear->setObjectName(QString::fromUtf8("button_clear"));
        button_clear->setGeometry(QRect(50, 520, 171, 25));
        button_save = new QPushButton(centralwidget);
        button_save->setObjectName(QString::fromUtf8("button_save"));
        button_save->setGeometry(QRect(599, 520, 151, 25));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 140, 291, 31));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_dateOfBirth = new QLabel(widget);
        label_dateOfBirth->setObjectName(QString::fromUtf8("label_dateOfBirth"));

        horizontalLayout_3->addWidget(label_dateOfBirth);

        input_dateOfBirth = new QDateEdit(widget);
        input_dateOfBirth->setObjectName(QString::fromUtf8("input_dateOfBirth"));

        horizontalLayout_3->addWidget(input_dateOfBirth);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 50, 701, 81));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_firstName = new QLabel(widget1);
        label_firstName->setObjectName(QString::fromUtf8("label_firstName"));
        label_firstName->setFont(font);

        verticalLayout->addWidget(label_firstName);

        label_LastName = new QLabel(widget1);
        label_LastName->setObjectName(QString::fromUtf8("label_LastName"));

        verticalLayout->addWidget(label_LastName);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        input_firstNmae = new QLineEdit(widget1);
        input_firstNmae->setObjectName(QString::fromUtf8("input_firstNmae"));

        verticalLayout_2->addWidget(input_firstNmae);

        input_lastName = new QLineEdit(widget1);
        input_lastName->setObjectName(QString::fromUtf8("input_lastName"));

        verticalLayout_2->addWidget(input_lastName);


        horizontalLayout->addLayout(verticalLayout_2);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 180, 701, 201));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_addressCountry = new QLabel(widget2);
        label_addressCountry->setObjectName(QString::fromUtf8("label_addressCountry"));

        verticalLayout_3->addWidget(label_addressCountry);

        label_addressRegion = new QLabel(widget2);
        label_addressRegion->setObjectName(QString::fromUtf8("label_addressRegion"));

        verticalLayout_3->addWidget(label_addressRegion);

        label_addressCity = new QLabel(widget2);
        label_addressCity->setObjectName(QString::fromUtf8("label_addressCity"));

        verticalLayout_3->addWidget(label_addressCity);

        label_addressStreet = new QLabel(widget2);
        label_addressStreet->setObjectName(QString::fromUtf8("label_addressStreet"));

        verticalLayout_3->addWidget(label_addressStreet);

        label_addressHouse = new QLabel(widget2);
        label_addressHouse->setObjectName(QString::fromUtf8("label_addressHouse"));

        verticalLayout_3->addWidget(label_addressHouse);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        input_addressCountry = new QLineEdit(widget2);
        input_addressCountry->setObjectName(QString::fromUtf8("input_addressCountry"));

        verticalLayout_4->addWidget(input_addressCountry);

        input_addressRegion = new QLineEdit(widget2);
        input_addressRegion->setObjectName(QString::fromUtf8("input_addressRegion"));

        verticalLayout_4->addWidget(input_addressRegion);

        input_addressCity = new QLineEdit(widget2);
        input_addressCity->setObjectName(QString::fromUtf8("input_addressCity"));

        verticalLayout_4->addWidget(input_addressCity);

        input_addressStreet = new QLineEdit(widget2);
        input_addressStreet->setObjectName(QString::fromUtf8("input_addressStreet"));

        verticalLayout_4->addWidget(input_addressStreet);

        input_addressHouse = new QLineEdit(widget2);
        input_addressHouse->setObjectName(QString::fromUtf8("input_addressHouse"));

        verticalLayout_4->addWidget(input_addressHouse);


        horizontalLayout_2->addLayout(verticalLayout_4);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(230, 390, 501, 81));
        verticalLayout_5 = new QVBoxLayout(widget3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        input_phoneNumber = new QLineEdit(widget3);
        input_phoneNumber->setObjectName(QString::fromUtf8("input_phoneNumber"));

        verticalLayout_5->addWidget(input_phoneNumber);

        input_phoneType = new QLineEdit(widget3);
        input_phoneType->setObjectName(QString::fromUtf8("input_phoneType"));

        verticalLayout_5->addWidget(input_phoneType);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(30, 390, 191, 81));
        verticalLayout_6 = new QVBoxLayout(widget4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_phoneNumber = new QLabel(widget4);
        label_phoneNumber->setObjectName(QString::fromUtf8("label_phoneNumber"));

        verticalLayout_6->addWidget(label_phoneNumber);

        label_phoneType = new QLabel(widget4);
        label_phoneType->setObjectName(QString::fromUtf8("label_phoneType"));

        verticalLayout_6->addWidget(label_phoneType);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PhoneBook", nullptr));
        label_Title->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\320\275\321\213\320\271 \321\201\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        button_save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_dateOfBirth->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_firstName->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_LastName->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_addressCountry->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        label_addressRegion->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\260\321\201\321\202\321\214", nullptr));
        label_addressCity->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        label_addressStreet->setText(QCoreApplication::translate("MainWindow", "\320\243\320\273\320\270\321\206\320\260", nullptr));
        label_addressHouse->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\274", nullptr));
        label_phoneNumber->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_phoneType->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\275\320\276\320\274\320\265\321\200\320\260 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
