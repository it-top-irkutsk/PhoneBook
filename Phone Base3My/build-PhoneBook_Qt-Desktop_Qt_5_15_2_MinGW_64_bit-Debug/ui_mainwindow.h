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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_Title_Main;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_dateOfBirth;
    QDateEdit *input_dateOfBirth;
    QSplitter *splitter_3;
    QLabel *label_Title_Phone;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_phoneNumber;
    QLabel *label_phoneType;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *input_phoneNumber;
    QLineEdit *input_phoneType;
    QSplitter *splitter_4;
    QPushButton *button_clear;
    QPushButton *button_save;
    QSplitter *splitter;
    QLabel *label;
    QWidget *layoutWidget2;
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
    QSplitter *splitter_5;
    QLabel *label_2;
    QSplitter *splitter_2;
    QLabel *label_Title_Name;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_firstName;
    QLabel *label_LastName;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *input_firstNmae;
    QLineEdit *input_lastName;
    QLabel *label_3;
    QListView *listView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1330, 651);
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Console"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_Title_Main = new QLabel(centralwidget);
        label_Title_Main->setObjectName(QString::fromUtf8("label_Title_Main"));
        label_Title_Main->setGeometry(QRect(490, -10, 451, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Console"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_Title_Main->setFont(font1);
        label_Title_Main->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_Title_Main->setTextFormat(Qt::PlainText);
        label_Title_Main->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 230, 291, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_dateOfBirth = new QLabel(layoutWidget);
        label_dateOfBirth->setObjectName(QString::fromUtf8("label_dateOfBirth"));

        horizontalLayout_3->addWidget(label_dateOfBirth);

        input_dateOfBirth = new QDateEdit(layoutWidget);
        input_dateOfBirth->setObjectName(QString::fromUtf8("input_dateOfBirth"));

        horizontalLayout_3->addWidget(input_dateOfBirth);

        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(50, 450, 541, 101));
        splitter_3->setOrientation(Qt::Vertical);
        label_Title_Phone = new QLabel(splitter_3);
        label_Title_Phone->setObjectName(QString::fromUtf8("label_Title_Phone"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lucida Console"));
        font2.setPointSize(15);
        label_Title_Phone->setFont(font2);
        label_Title_Phone->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(label_Title_Phone);
        layoutWidget1 = new QWidget(splitter_3);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_phoneNumber = new QLabel(layoutWidget1);
        label_phoneNumber->setObjectName(QString::fromUtf8("label_phoneNumber"));

        verticalLayout_6->addWidget(label_phoneNumber);

        label_phoneType = new QLabel(layoutWidget1);
        label_phoneType->setObjectName(QString::fromUtf8("label_phoneType"));

        verticalLayout_6->addWidget(label_phoneType);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        input_phoneNumber = new QLineEdit(layoutWidget1);
        input_phoneNumber->setObjectName(QString::fromUtf8("input_phoneNumber"));

        verticalLayout_5->addWidget(input_phoneNumber);

        input_phoneType = new QLineEdit(layoutWidget1);
        input_phoneType->setObjectName(QString::fromUtf8("input_phoneType"));

        verticalLayout_5->addWidget(input_phoneType);


        horizontalLayout_4->addLayout(verticalLayout_5);

        splitter_3->addWidget(layoutWidget1);
        splitter_4 = new QSplitter(centralwidget);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(20, 570, 601, 31));
        splitter_4->setMidLineWidth(0);
        splitter_4->setOrientation(Qt::Horizontal);
        splitter_4->setHandleWidth(400);
        button_clear = new QPushButton(splitter_4);
        button_clear->setObjectName(QString::fromUtf8("button_clear"));
        splitter_4->addWidget(button_clear);
        button_save = new QPushButton(splitter_4);
        button_save->setObjectName(QString::fromUtf8("button_save"));
        splitter_4->addWidget(button_save);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(50, 270, 541, 181));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label);
        layoutWidget2 = new QWidget(splitter);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_addressCountry = new QLabel(layoutWidget2);
        label_addressCountry->setObjectName(QString::fromUtf8("label_addressCountry"));

        verticalLayout_3->addWidget(label_addressCountry);

        label_addressRegion = new QLabel(layoutWidget2);
        label_addressRegion->setObjectName(QString::fromUtf8("label_addressRegion"));

        verticalLayout_3->addWidget(label_addressRegion);

        label_addressCity = new QLabel(layoutWidget2);
        label_addressCity->setObjectName(QString::fromUtf8("label_addressCity"));

        verticalLayout_3->addWidget(label_addressCity);

        label_addressStreet = new QLabel(layoutWidget2);
        label_addressStreet->setObjectName(QString::fromUtf8("label_addressStreet"));

        verticalLayout_3->addWidget(label_addressStreet);

        label_addressHouse = new QLabel(layoutWidget2);
        label_addressHouse->setObjectName(QString::fromUtf8("label_addressHouse"));

        verticalLayout_3->addWidget(label_addressHouse);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        input_addressCountry = new QLineEdit(layoutWidget2);
        input_addressCountry->setObjectName(QString::fromUtf8("input_addressCountry"));

        verticalLayout_4->addWidget(input_addressCountry);

        input_addressRegion = new QLineEdit(layoutWidget2);
        input_addressRegion->setObjectName(QString::fromUtf8("input_addressRegion"));

        verticalLayout_4->addWidget(input_addressRegion);

        input_addressCity = new QLineEdit(layoutWidget2);
        input_addressCity->setObjectName(QString::fromUtf8("input_addressCity"));

        verticalLayout_4->addWidget(input_addressCity);

        input_addressStreet = new QLineEdit(layoutWidget2);
        input_addressStreet->setObjectName(QString::fromUtf8("input_addressStreet"));

        verticalLayout_4->addWidget(input_addressStreet);

        input_addressHouse = new QLineEdit(layoutWidget2);
        input_addressHouse->setObjectName(QString::fromUtf8("input_addressHouse"));

        verticalLayout_4->addWidget(input_addressHouse);


        horizontalLayout_2->addLayout(verticalLayout_4);

        splitter->addWidget(layoutWidget2);
        splitter_5 = new QSplitter(centralwidget);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setGeometry(QRect(50, 50, 541, 181));
        splitter_5->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lucida Console"));
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);
        splitter_5->addWidget(label_2);
        splitter_2 = new QSplitter(splitter_5);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_Title_Name = new QLabel(splitter_2);
        label_Title_Name->setObjectName(QString::fromUtf8("label_Title_Name"));
        label_Title_Name->setFont(font2);
        label_Title_Name->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(label_Title_Name);
        layoutWidget3 = new QWidget(splitter_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_firstName = new QLabel(layoutWidget3);
        label_firstName->setObjectName(QString::fromUtf8("label_firstName"));
        label_firstName->setFont(font);

        verticalLayout->addWidget(label_firstName);

        label_LastName = new QLabel(layoutWidget3);
        label_LastName->setObjectName(QString::fromUtf8("label_LastName"));

        verticalLayout->addWidget(label_LastName);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        input_firstNmae = new QLineEdit(layoutWidget3);
        input_firstNmae->setObjectName(QString::fromUtf8("input_firstNmae"));

        verticalLayout_2->addWidget(input_firstNmae);

        input_lastName = new QLineEdit(layoutWidget3);
        input_lastName->setObjectName(QString::fromUtf8("input_lastName"));

        verticalLayout_2->addWidget(input_lastName);


        horizontalLayout->addLayout(verticalLayout_2);

        splitter_2->addWidget(layoutWidget3);
        splitter_5->addWidget(splitter_2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(740, 30, 461, 61));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(730, 80, 531, 471));
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
        label_Title_Main->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\320\275\321\213\320\271 \321\201\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272", nullptr));
        label_dateOfBirth->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_Title_Phone->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 ", nullptr));
        label_phoneNumber->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_phoneType->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\275\320\276\320\274\320\265\321\200\320\260 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        button_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        button_save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_addressCountry->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        label_addressRegion->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\273\320\260\321\201\321\202\321\214", nullptr));
        label_addressCity->setText(QCoreApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        label_addressStreet->setText(QCoreApplication::translate("MainWindow", "\320\243\320\273\320\270\321\206\320\260", nullptr));
        label_addressHouse->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\274", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_Title_Name->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\244\320\230\320\236 \320\270 \320\264\320\260\321\202\321\213 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_firstName->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_LastName->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264 \320\224\320\260\320\275\320\275\321\213\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
