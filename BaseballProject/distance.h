#ifndef DISTANCE_H
#define DISTANCE_H

#include <QString>

class Distance
{
private:
    QString from;
    QString to;
    int dist;

public:
    Distance(QString _from, QString _to, int _dist):from{_from}, to{_to}, dist{_dist}{}

    QString getFrom();
    QString getTo();
    int getDist();
};

#endif // DISTANCE_H
