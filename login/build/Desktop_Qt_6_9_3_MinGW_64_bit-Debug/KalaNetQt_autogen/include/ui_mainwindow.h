/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QPushButton *userModeButton;
    QPushButton *adminModeButton;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *adminPasswordLineEdit;
    QPushButton *adminLoginButton;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *nameLineEdit;
    QLineEdit *usernameLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *phoneLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *signupButton;
    QPushButton *userLoginButton;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(70, 60, 147, 262));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName("verticalLayout");
        userModeButton = new QPushButton(page);
        userModeButton->setObjectName("userModeButton");

        verticalLayout->addWidget(userModeButton);

        adminModeButton = new QPushButton(page);
        adminModeButton->setObjectName("adminModeButton");

        verticalLayout->addWidget(adminModeButton);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        adminPasswordLineEdit = new QLineEdit(page_3);
        adminPasswordLineEdit->setObjectName("adminPasswordLineEdit");

        verticalLayout_3->addWidget(adminPasswordLineEdit);

        adminLoginButton = new QPushButton(page_3);
        adminLoginButton->setObjectName("adminLoginButton");

        verticalLayout_3->addWidget(adminLoginButton);

        stackedWidget->addWidget(page_3);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        verticalLayout_5 = new QVBoxLayout(page_7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        nameLineEdit = new QLineEdit(page_7);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout_5->addWidget(nameLineEdit);

        usernameLineEdit = new QLineEdit(page_7);
        usernameLineEdit->setObjectName("usernameLineEdit");

        verticalLayout_5->addWidget(usernameLineEdit);

        emailLineEdit = new QLineEdit(page_7);
        emailLineEdit->setObjectName("emailLineEdit");

        verticalLayout_5->addWidget(emailLineEdit);

        phoneLineEdit = new QLineEdit(page_7);
        phoneLineEdit->setObjectName("phoneLineEdit");

        verticalLayout_5->addWidget(phoneLineEdit);

        passwordLineEdit = new QLineEdit(page_7);
        passwordLineEdit->setObjectName("passwordLineEdit");

        verticalLayout_5->addWidget(passwordLineEdit);

        signupButton = new QPushButton(page_7);
        signupButton->setObjectName("signupButton");

        verticalLayout_5->addWidget(signupButton);

        userLoginButton = new QPushButton(page_7);
        userLoginButton->setObjectName("userLoginButton");

        verticalLayout_5->addWidget(userLoginButton);

        stackedWidget->addWidget(page_7);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainWindow->setProperty("ss", QVariant(QString()));
        userModeButton->setText(QCoreApplication::translate("MainWindow", "Login as User:", nullptr));
        adminModeButton->setText(QCoreApplication::translate("MainWindow", "Login as Admin:", nullptr));
        adminPasswordLineEdit->setText(QCoreApplication::translate("MainWindow", " Admin Password:", nullptr));
        adminLoginButton->setText(QCoreApplication::translate("MainWindow", "login:", nullptr));
        nameLineEdit->setText(QCoreApplication::translate("MainWindow", "Full name:", nullptr));
        usernameLineEdit->setText(QCoreApplication::translate("MainWindow", "User name:", nullptr));
        emailLineEdit->setText(QCoreApplication::translate("MainWindow", "Email(gmail):", nullptr));
        phoneLineEdit->setText(QCoreApplication::translate("MainWindow", "Phone number:", nullptr));
        passwordLineEdit->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        signupButton->setText(QCoreApplication::translate("MainWindow", "Sign up:", nullptr));
        userLoginButton->setText(QCoreApplication::translate("MainWindow", "Login:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
