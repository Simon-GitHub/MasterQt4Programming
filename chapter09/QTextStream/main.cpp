#include <QFile>
#include <QTextStream>

int main(int argc, char *argv[])
{
	QFile data("test.txt");
	if(data.open(QFile::WriteOnly | QFile::Truncate))
	{
		QTextStream out(&data);
		out << QObject::tr("³É¼¨:") << qSetFieldWidth(10) << left << 90 << endl;
	}
}
