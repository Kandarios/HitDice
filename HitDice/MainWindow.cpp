#include "MainWindow.hpp"
#include "ui_MainWindow.h"

#include <iostream>
#include <random>
#include <QFile>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  distribution = std::uniform_int_distribution<int> (1,20);
  QPixmap pic =  QPixmap(":/images/Pictures/Overview.png", "PNG");

  if(!pic.isNull()) {
    std::cerr << "Path not NULL" << std::endl;
    ui->label_picture->setPixmap(pic);
  } else {
    std::cerr << "Damn" << std::endl;
  }
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_role_clicked()
{

  int dice_roll = distribution(generator);  // generates number in the range 1..6

  ui->label_result->setText(QString::number(dice_roll));
  QPixmap pic;

  switch(dice_roll) {
  case 1:
  case 3:
  case 5:
    // left arm
    ui->label_result->setText(QString::number(dice_roll) + ": Linker Arm");
    pic =  QPixmap(":/images/Pictures/LA.png", "PNG");
    break;
  case 2:
  case 4:
  case 6:
    // right arm
    ui->label_result->setText(QString::number(dice_roll) + ": Rechter Arm");
    pic =  QPixmap(":/images/Pictures/RA.png", "PNG");
    break;
  case 7:
  case 8:
    // Bauch
    ui->label_result->setText(QString::number(dice_roll) + ": Bauch");
    pic =  QPixmap(":/images/Pictures/BA.png", "PNG");
    break;
  case 9:
  case 11:
  case 13:
    // linkes Bein
    ui->label_result->setText(QString::number(dice_roll) + ": Linkes Bein");
    pic =  QPixmap(":/images/Pictures/LB.png", "PNG");
    break;
  case 10:
  case 12:
  case 14:
    //rechtes Bein
    ui->label_result->setText(QString::number(dice_roll) + ": Rechtes Bein");
    pic =  QPixmap(":/images/Pictures/RB.png", "PNG");
    break;
  case 15:
  case 16:
  case 17:
  case 18:
    // Brust
    ui->label_result->setText(QString::number(dice_roll) + ": Brust");
    pic =  QPixmap(":/images/Pictures/BR.png", "PNG");
    break;
  case 19:
  case 20:
    // Kopf
    ui->label_result->setText(QString::number(dice_roll) + ": Kopf");
    pic =  QPixmap(":/images/Pictures/KO.png", "PNG");
    break;
  }
  if(!pic.isNull()) {
    std::cerr << "Path not NULL" << std::endl;
    ui->label_picture->setPixmap(pic);
  } else {
    std::cerr << "Damn" << std::endl;
  }


}
