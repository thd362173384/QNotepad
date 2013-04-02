#include "state.h"

state::state()
{
    status=state::EMPTY;
    filePath="";
    fileName="";
}

state::~state()
{

}

QString state::getfilePath()
{
    return filePath;
}

void state::setfilePath(QString path)
{
    filePath=path;
    emit statusChanged();
}

int state::getstatus()
{
    return status;
}

void state::setstatus(int s)
{
    status=s;
    emit statusChanged();
}

QString state::getfileName()
{
    return fileName;
}

void state::setfileName(QString t)
{
    fileName=t;
    emit statusChanged();
}
