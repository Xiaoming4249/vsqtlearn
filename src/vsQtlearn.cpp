#include "vsQtlearn.h"

vsQtlearn::vsQtlearn(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_vsQtlearn)
{
    ui->setupUi(this);
}

vsQtlearn::~vsQtlearn()
{
    delete ui; 
}