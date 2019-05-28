#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

QTimer * timer;

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  this->grabKeyboard();
  timer = new QTimer(this);

  connect(timer, SIGNAL(timeout()), this, SLOT(tmp_timer));
}

MainWindow::~MainWindow()
{
  delete ui;
}
