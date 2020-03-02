#include <QtCore/QCoreApplication>
#include <QImage>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	QImage pic;
	pic.load("123");
	
	return a.exec();
}
