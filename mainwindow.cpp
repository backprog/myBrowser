#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tabs.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    Tabs *firstTab = 0;
    firstTab = new Tabs;

    ui->tabsWrapper->addWidget(firstTab);

    QWebEngineView *view = new QWebEngineView;
    ui->webViewLayout->addWidget(view);
    view->load(QUrl("https://google.fr"));
    view->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
