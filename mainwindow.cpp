#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setupDesign();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupDesign()
{
    QPalette pal_score_top;
    QPalette pal_score_bottom;

    pal_score_top.setColor(QPalette::Window, Qt::red);
    pal_score_top.setColor(QPalette::WindowText, Qt::white);
    pal_score_bottom.setColor(QPalette::Window, Qt::blue);
    pal_score_bottom.setColor(QPalette::WindowText, Qt::white);

    this->ui->score_top->setPalette(pal_score_top);
    this->ui->score_bottom->setPalette(pal_score_bottom);

    this->ui->tabs->setTabText(0, "Affichage");
    this->ui->tabs->setTabText(1, "Réglages");
}
