#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setText("Welcome to Qt6!");
    ui->btnClose->setText("Close");
}

Widget::~Widget()
{
    delete ui;
}
