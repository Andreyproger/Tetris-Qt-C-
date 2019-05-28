#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void startButton_clicked();
  void pauseButton_clicked();
  void stopButton_clicked();

public slots:
  void pauseGame();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
