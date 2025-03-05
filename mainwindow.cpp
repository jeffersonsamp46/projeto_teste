#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->resetForm();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resetForm()
{
    QString message = "";

    int retorno =  (QMessageBox::question(this,"Deseja Fazer um teste?","Você gosta de popoca?",QMessageBox::Yes | QMessageBox::No| QMessageBox::Cancel));

    switch (retorno) {
    case QMessageBox::Yes:
        message = "Gosta muito de Popoca Galoto";
        break;

    case QMessageBox::No:
        message = "Não gostei muito de Popoca Galoto";
        break;
    default:
        message = "";
        break;
    }

    QMessageBox::about(this, "Resposta da Pergunta", message);
}
