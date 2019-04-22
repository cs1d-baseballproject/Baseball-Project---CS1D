#ifndef DATABASE_H
#define DATABASE_H

#include <QFileDialog>
#include "xlsxdocument.h"
#include "team.h"
#include "distance.h"
#include <QtDebug>

class database
{
private:
    // edge list and team list
    vector<team>* teams;
    vector<Distance>* edges;

    vector<souvenirs>& defaultSouvenirList(QString from);

public:
    database(vector<team>& _teams, vector<Distance>& _edges): teams{&_teams}, edges{&_edges}{}

    void initFromFile(QString);

    void save();
};

#endif // DATABASE_H
