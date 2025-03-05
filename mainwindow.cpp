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
    QString message = "Não Gostei muito de Popoca....";

    if (QMessageBox::question(this,"Deseja Fazer um teste?","Você gosta de popoca?",QMessageBox::Yes, QMessageBox::No)) {
        message = "Gosta muito de Popoca Galoto";
    }

    QMessageBox::about(this, "Resposta da Pergunta", message);
}
