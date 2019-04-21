#include "database.h"

vector<souvenirs>& database::defaultSouvenirList()
{
    vector<souvenirs>* temp = new vector<souvenirs>;
    temp->push_back(souvenirs("Baseball cap", 22.99));
    temp->push_back(souvenirs("Baseball bat", 89.39));
    temp->push_back(souvenirs("Team pennant", 17.99));
    temp->push_back(souvenirs("Autographed baseball", 25.99));
    temp->push_back(souvenirs("Team jersey", 199.99));

    return *temp;
}

void database::initFromFile(QString path)
{
    QXlsx::Document document(path);
    int index = 2;

    QString file;
    for(int i = 1; i <= path.size(); i++)
        if(path.at(path.size() - i) == '/') {
            file = path.right(i - 1);
            break;
        }

    if(file.at(0) == 'S' && !teams->empty())
        for(unsigned int i = 0; i < teams->size(); i++)
            teams->at(i).getSouvenirs().clear();

    QString temp = "A";
    temp = document.read(temp.append(QString::number(index))).toString();
    while(temp != "")
    {
        if(file.at(0) == 'D') {
            QString data[] = {"A", "B", "C"};
            QString from = document.read(data[0].append(QString::number(index))).toString();
            QString to = document.read(data[1].append(QString::number(index))).toString();
            int dist = document.read(data[2].append(QString::number(index))).toInt();

            edges->push_back(Distance(from, to, dist));
        }
        else if (file.at(0) == 'M') {
            QString data[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
            QString teamN = document.read(data[0].append(QString::number(index))).toString();
            QString stadium = document.read(data[1].append(QString::number(index))).toString();
            int seatingCap = document.read(data[2].append(QString::number(index))).toInt();
            QString location = document.read(data[3].append(QString::number(index))).toString();
            QString surface = document.read(data[4].append(QString::number(index))).toString();
            QString league = document.read(data[5].append(QString::number(index))).toString();
            int date = document.read(data[6].append(QString::number(index))).toInt();
            QString dist2Cfield = document.read(data[7].append(QString::number(index))).toString();
            QString typology = document.read(data[8].append(QString::number(index))).toString();
            QString roof = document.read(data[9].append(QString::number(index))).toString();

            teams->push_back(team(teamN, league, stadium, seatingCap, location,
                                  surface, date, dist2Cfield.left(3).toInt(), typology, roof,
                                  defaultSouvenirList()));
        }
        else if(file.at(0) == 'S') {
            QString data[] = {"A", "B", "C"};
            QString from = document.read(data[0].append(QString::number(index))).toString();
            QString souvenirName = document.read(data[1].append(QString::number(index))).toString();
            double price = document.read(data[2].append(QString::number(index))).toDouble();

            for(unsigned int i = 0; i < teams->size(); i++)
                if(teams->at(i).getStadiumName() == from)
                    teams->at(i).getSouvenirs().push_back(souvenirs(souvenirName, price));
        }
        index++;
        temp = "A";
        temp = document.read(temp.append(QString::number(index))).toString();
    }
}

void database::save()
{
    QXlsx::Document information;
    QXlsx::Document distances;
    QXlsx::Document souvenirs;

    // save excel file with MLB information
    for(unsigned int i = 0; i < teams->size(); i++) {
        QString data[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
        information.write(data[0].append(QString::number(i+2)), teams->at(i).getTeamName());
        information.write(data[1].append(QString::number(i+2)), teams->at(i).getStadiumName());
        information.write(data[2].append(QString::number(i+2)), teams->at(i).getSeatingCapacity());
        information.write(data[3].append(QString::number(i+2)), teams->at(i).getLocation());
        information.write(data[4].append(QString::number(i+2)), teams->at(i).getPlayingSurface());
        information.write(data[5].append(QString::number(i+2)), teams->at(i).getLeague());
        information.write(data[6].append(QString::number(i+2)), teams->at(i).getDateOpened());
        information.write(data[7].append(QString::number(i+2)), teams->at(i).getDistanceToCenter());
        information.write(data[8].append(QString::number(i+2)), teams->at(i).getParkTypology());
        information.write(data[9].append(QString::number(i+2)), teams->at(i).getRoofType());
    }
    information.saveAs("MLBInformation.xlsx");

    // save excel file containing souvenir information
    int index = 2;
    for(unsigned int i = 0; i < teams->size(); i++) {
        for(unsigned int j = 0; j < teams->at(i).getSouvenirs().size(); j++) {
            QString data[] = {"A", "B", "C"};
            souvenirs.write(data[0].append(QString::number(index)), teams->at(i).getStadiumName());
            souvenirs.write(data[1].append(QString::number(index)), teams->at(i).getSouvenirs()[j].getSouvenirName());
            souvenirs.write(data[2].append(QString::number(index++)), teams->at(i).getSouvenirs()[j].getPrice());
        }
    }
    souvenirs.saveAs("Souvenirs.xlsx");

    // save excel file containing distance information
    for(unsigned int i = 0; i < edges->size(); i++) {
        QString data[] = {"A", "B", "C"};
        distances.write(data[0].append(QString::number(i+2)), edges->at(i).getFrom());
        distances.write(data[1].append(QString::number(i+2)), edges->at(i).getTo());
        distances.write(data[2].append(QString::number(i+2)), edges->at(i).getDist());
    }
    distances.saveAs("Distance.xlsx");
}
