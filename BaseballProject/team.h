#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <QString>

#include "souvenirs.h"

class team
{
private:
    // Variable Declarations
    QString teamName;       // Team Information
    QString league;

    QString stadiumName;    // Stadium Information
    int seatingCapacity;
    QString location;
    QString playingSurface;
    int dateOpened;
    int distanceToCenter;
    QString parkTypology;
    QString roofType;

    std::vector<souvenirs> availableSouvenirs;

public:
    // Default Constructor
    team(): teamName{""}, league{""}, stadiumName{""}, seatingCapacity{0}, location{""}, playingSurface{""}, dateOpened{0}, distanceToCenter{0}, parkTypology{""}, roofType{""}{}

    // Constructor
    team(QString,QString, QString, int, QString, QString, int, int, QString, QString, std::vector<souvenirs>&);

    //Setters
    void setTeamName(QString);
    void setLeague(QString);

    void setStadiumName(QString);
    void setSeatingCapacity(int);
    void setLocation(QString);
    void setPlayingSurface(QString);
    void setDateOpened(int);
    void setDistanceToCenter(int);
    void setParkTypology(QString);
    void setRoofType(QString);


    //Getters
    QString getTeamName() const;
    QString getLeague() const;

    QString getStadiumName() const;
    int getSeatingCapacity() const;
    QString getLocation() const;
    QString getPlayingSurface() const;
    int getDateOpened() const;
    int getDistanceToCenter() const;
    QString getParkTypology() const;
    QString getRoofType() const;
    std::vector<souvenirs>& getSouvenirs();
	
};

#endif
