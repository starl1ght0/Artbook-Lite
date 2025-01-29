#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Создаем виджет (окно)
    QWidget window;
    window.resize(400, 300); // Устанавливаем размер окна
    window.setWindowTitle("Простое окно на Qt"); // Устанавливаем заголовок окна
    window.show(); // Показываем окно

    return app.exec(); // Запускаем главный цикл приложения
}