#pragma once
#include "ui_vsQtlearn.h"
#include <QMainWindow>

class vsQtlearn : public QMainWindow {
    Q_OBJECT
    
public:
    vsQtlearn(QWidget* parent = nullptr);
    ~vsQtlearn();

private:
    Ui_vsQtlearn* ui;
};