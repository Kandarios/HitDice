#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <random>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();


private slots:
  void on_pushButton_role_clicked();

private:
  Ui::MainWindow *ui;
  std::default_random_engine generator;
  std::uniform_int_distribution<int> distribution;
  QGraphicsScene *scene;

};

#endif // MAINWINDOW_HPP
