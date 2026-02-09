#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    authService = new AuthService;

    ui->stackedWidget->setStyleSheet(
        "QWidget { background-color: #0d1b2a; }"
        "QPushButton { background-color: #1b263b; color: white; "
        "font-size: 16px; padding: 8px; border-radius: 6px; }"
        "QPushButton:hover { background-color: #415a77; }"
        "QLineEdit { background-color: #1b263b; color: white; "
        "border: 1px solid #415a77; border-radius: 4px; padding: 4px; font-size: 14px; }"
        );

    ui->page->setStyleSheet("background-color: #0d1b2a;");
    ui->page_3->setStyleSheet("background-color: #1b263b;");
    ui->page_7->setStyleSheet("background-color: #1b263b;");

    ui->passwordLineEdit->setEchoMode(QLineEdit::Password);
    ui->adminPasswordLineEdit->setEchoMode(QLineEdit::Password);

    connect(ui->userLoginButton, &QPushButton::clicked, this, &MainWindow::onUserLogin);
    connect(ui->adminLoginButton, &QPushButton::clicked, this, &MainWindow::onAdminLogin);
    connect(ui->signupButton, &QPushButton::clicked, this, &MainWindow::onSignup);

    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->userModeButton, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(2); });
    connect(ui->adminModeButton, &QPushButton::clicked, [=](){ ui->stackedWidget->setCurrentIndex(1); });
}

MainWindow::~MainWindow() {
    delete authService;
    delete ui;
}
void MainWindow::onUserLogin() {
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if(authService->loginUser(username.toStdString(), password.toStdString()))
        QMessageBox::information(this, "Success", "User logged in!");
    else
        QMessageBox::warning(this, "Error", "Invalid username or password");
}

void MainWindow::onAdminLogin() {
    QString pass = ui->adminPasswordLineEdit->text();

    if(authService->loginAdmin(pass.toStdString()))
        QMessageBox::information(this, "Success", "Admin logged in!");
    else
        QMessageBox::warning(this, "Error", "Wrong admin password");
}

void MainWindow::onSignup() {
    QString name = ui->nameLineEdit->text();
    QString username = ui->usernameLineEdit->text();
    QString email = ui->emailLineEdit->text();
    QString phone = ui->phoneLineEdit->text().trimmed();
    QString password = ui->passwordLineEdit->text();

    if(!authService->validateEmail(email.toStdString())) {
        QMessageBox::warning(this, "Error", "Invalid email");
        return;
    }
    if(!authService->validatePhone(phone.toStdString())) {
        QMessageBox::warning(this, "Error", "Invalid phone number");
        return;
    }
    if(!authService->validatePassword(password.toStdString())) {
        QMessageBox::warning(this, "Error", "Weak password");
        return;
    }

    authService->signupUser(name.toStdString(), username.toStdString(),
                            email.toStdString(), phone.toStdString(),
                            password.toStdString());
    QMessageBox::information(this, "Success", "User registered!");
}
