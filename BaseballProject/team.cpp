#include "team.h"

// Constructor
team::team(QString tName, QString tLeague, QString sName, int seats, QString loc,
           QString play, int date, int dist, QString type, QString roof,
           vector<souvenirs>& souv):
           teamName{tName}, league{tLeague}, stadiumName{sName}, seatingCapacity{seats},
           location{loc}, playingSurface{play}, dateOpened{date}, distanceToCenter{dist},
           parkTypology{type}, roofType{roof}, availableSouvenirs{souv}{}

// Setters
void team::setTeamName(QString x)
{
    teamName=x;
}

void team::setLeague(QString x)
{
    league=x;
}

void team::setStadiumName(QString name)
{
    stadiumName=name;
}

void team::setSeatingCapacity(int seats)
{
    seatingCapacity=seats;
}

void team::setLocation(QString loc)
{
    location=loc;
}
void team::setPlayingSurface(QString ps)
{
    playingSurface=ps;
}

void team::setDateOpened(int date)
{
    dateOpened=date;
}

void team::setDistanceToCenter(int dist)
{
    distanceToCenter=dist;
}

void team::setParkTypology(QString type)
{
    parkTypology=type;
}

void team::setRoofType(QString roof)
{
    roofType=roof;
}

//Getters
QString team::getTeamName() const
{
    return teamName;
}

QString team::getLeague() const
{
    return league;
}

QString team::getStadiumName() const
{
    return stadiumName;
}

int team::getSeatingCapacity() const
{
    return seatingCapacity;
}

QString team::getLocation() const
{
    return location;
}

QString team::getPlayingSurface() const
{
    return playingSurface;
}

int team::getDateOpened() const
{
    return dateOpened;
}

int team::getDistanceToCenter() const
{
    return distanceToCenter;
}

QString team::getParkTypology() const
{
    return parkTypology;
}

QString team::getRoofType() const
{
    return roofType;
}

vector<souvenirs>& team::getSouvenirs()
{
    return  availableSouvenirs;
}
