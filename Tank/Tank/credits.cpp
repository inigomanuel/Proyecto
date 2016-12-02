#include "credits.h"
#include "ui_credits.h"
#include "instrucciones.h"

credits::credits(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::credits)
{
    ui->setupUi(this);
}

credits::~credits()
{
    delete ui;
}

void credits::on_pushButton_clicked()
{
    Instrucciones *inst=new Instrucciones();
    inst->show();
    this->hide();
}
