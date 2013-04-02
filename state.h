#ifndef STATE_H
#define STATE_H
#include <QString>
#include <QObject>

class state:public QObject
{
    Q_OBJECT

public:
    state();
    ~state();

    QString getfilePath();
    void setfilePath(QString);

    int getstatus();
    void setstatus(int);

    QString getfileName();
    void setfileName(QString);

    //define file states
    const static int SAVED=1;
    const static int MODIFIED=2;
    const static int NEW=3;
    const static int EMPTY=4;
private:
    QString filePath;
    QString fileName;
    int status;
signals:
    void statusChanged();
};

#endif // STATE_H
