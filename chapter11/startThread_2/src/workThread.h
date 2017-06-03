
#ifndef WORKTHREAD_H
#define WORKTHREAD_H
#include <QThread>

class WorkThread : public QThread
{
	Q_OBJECT
public:
	WorkThread ( QObject * parent = 0 );
 protected:
    void run();
private slots:
	void stopIdentifierSlot(bool);
private:
 	QString str;
	bool stopIdentifier;
};
 
#endif