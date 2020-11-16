#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello World");
    label->resize(400, 400);
    label->setWindowTitle("MY APP");
    label->show();
    return app.exec();
}
