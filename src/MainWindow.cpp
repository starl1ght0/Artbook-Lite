#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Настройка главного окна
    this->setWindowTitle("Artbook-Lite");
    this->resize(1920, 1080); // Установка размера окна
}

MainWindow::~MainWindow()
{
    // Деструктор, если нужно освободить ресурсы
}