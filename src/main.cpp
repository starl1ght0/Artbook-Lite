#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.show(); // Отображение главного окна

    return app.exec(); // Запуск цикла обработки событий
}