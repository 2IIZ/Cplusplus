#include "cadre.h"
#include "ui_cadre.h"

Cadre::Cadre(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cadre)
{
    ui->setupUi(this);
}

Cadre::~Cadre()
{
    delete ui;
}
