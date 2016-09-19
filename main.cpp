#include <alpr.h>
#include <QCoreApplication>
#include <QDebug>
#include <QApplication>

void Run() {
    alpr::Alpr *openalpr= new alpr::Alpr("us", "/etc/openalpr/openalpr.conf");
    if (openalpr->isLoaded()) {
        qDebug() << "aaa";
        alpr::AlprResults Results= openalpr->recognize("/tmp/lp.jpg");
        for (int i = 0; i < Results.plates.size(); i++) {
            std::cout << "plate" << i << ": " << Results.plates[i].bestPlate.characters << " Results" << std::endl;
        }
    }
}

int main(int argc, char *argv[])
{
  
    QApplication a(argc, argv);
    Run();

}
