#include "Inicio.h"
#include "ui_Inicio.h"
#include"Proyecto.h"

Inicio::Inicio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_pushButton_clicked()
{
   Proyecto *proyecto=new Proyecto();
   proyecto->show();
}
