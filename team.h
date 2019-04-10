#IFNDEF TEAM_H
#DEFINE TEAM_H

#include <iostream>
#include <Qstring>

#include "souvenirs.h"

class team
{
	private:
		Qstring teamName;
		Qstring league;
		
		Qstring stadiumName;
		int seatingCapacity;
		Qstring location;
		Qstring playingSurface;
		Qstring dateOpened;
		double distanceToCenter;
		Qstring parkTypology;
		Qstring roofType;
		
		vector <souvenirs> availableSouvenirs;
		
	public:
		//Constructors
		team(Qstring,Qstring, Qstring, int, Qstring, Qstring, Qstring, double, Qstring, Qstring, vector);
		
		//Setters
		void setTeamName(Qstring);
		void setLeague(Qstring);
		
		void setStadiumName(Qstring);
		void setSeatingCapacity(int);
		void setLocation(Qstring);
		void setPlayingSurface(Qstring);
		void setDateOpened(Qstring);
		void setDistanceToCenter(float);
		void setParkTypology(Qstring);
		void setRoofType(Qstring);
		
		
		//Getters
		Qstring getTeamnName();
		Qstring getLeague();
		
		Qstring getStadiumName();
		int getSeatingCapacity();
		Qstring getLocation();
		Qstring getPlayingSurface();
		Qstring getDateOpened();
		double getDistanceToCenter();
		Qstring getParkTypology();
		Qstring getRoofType();
	
};

team::team(Qstring tName,Qstring tLeague, Qstring sName, int seats, Qstring loc, Qstring play, Qstring date, double dist, Qstring type, Qstring roof, vector <souvenirs> souv)
{
	teamName=tName;
	league=tLeague;
	stadiumName=sName;
	seatingCapacity=seats;
	location=loc;
	playingSurface=play;
	dateOpened=date;
	distanceToCenter=dist;
	parkTypology=type;
	roofType=roof;
	availableSouvenirs=souv;
}

//Setters
void team::setTeamName(Qstring x)
{
	teamName=x;
}

void team::setLeague(Qstring x)
{
	league=x;
}

void team::setStadiumName(Qstring name)
{
	stadiumName=name;
}

void team::setSeatingCapacity(int seats)
{
	seatingCapacity=seats;
}

void team::setLocation(Qstring loc)
{
	location=loc;
}
void team::setPlayingSurface(Qstring ps)
{
	playingSurface=ps;
}

void team::setDateOpened(Qstring date)
{
	dateOpened=date;
}

void team::setDistanceToCenter(double dist)
{
	distanceToCenter=dist;
}

void team::setParkTypology(Qstring type)
{
	parkTypology=type;
}

void team::setRoofType(Qstring roof)
{
	roofType=roof;
}

//Getters
Qstring team::getTeamName()
{
	return teamName;
}

Qstring team::getLeague()
{
	return league;
}

Qstring team::getStadiumName()
{
	return stadiumName;
}

int team::getSeatingCapacity()
{
	return seatingCapacity;
}

Qstring team::getLocation()
{
	return location;
}
Qstring team::getPlayingSurface()
{
	return playingSurface
}
Qstring team::getDateOpened()
{
	return dateOpened;
}
double team::getDistanceToCenter()
{
	return distanceToCenter;
}
Qstring team::getParkTypology()
{
	return typology;
}
Qstring team::getRoofType()
{
	return roofType;
}

#ENDIF
