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
    std::vector<team>* teams;
    std::vector<Distance>* edges;

    std::vector<souvenirs>& defaultSouvenirList(QString from);

public:
    database(std::vector<team>& _teams, std::vector<Distance>& _edges): teams{&_teams}, edges{&_edges}{}

    void initFromFile(QString);

    void save();
};

#endif // DATABASE_H
