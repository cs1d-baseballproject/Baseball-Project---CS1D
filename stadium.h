#IFNDEF STADIUM_H
#DEFINE STADIUM_H

#include "souvenir.h"
#include <vector>

//Constructor
stadium();

//Setter
void setStadiumName(string);
void setSeatingCapacity(int);
void setLocation(string);
void setPlayingSurface(string);
void setDateOpened(string);
void setDistanceToCenter(float);
void setParkTypology(string);
void setRoofType(string);
void setAvailableSouvenirs(vector);

//Getter
string setStadiumName();
int setSeatingCapacity();
string setLocation();
string setPlayingSurface();
string setDateOpened();
float setDistanceToCenter();
string setParkTypology();
string setRoofType();
vector setAvailableSouvenirs();

class stadium
{
	private:
		string stadiumName;
		int seatingCapacity;
		string location;
		string playingSurface;
		string dateOpened;
		float distanceToCenter;
		string parkTypology;
		string roofType;
		vector <souvenirs> availableSouvenirs;
		
	private:
		//Constructor
		stadium();
		
		//Setter
		void setStadiumName(string);
		void setSeatingCapacity(int);
		void setLocation(string);
		void setPlayingSurface(string);
		void setDateOpened(string);
		void setDistanceToCenter(float);
		void setParkTypology(string);
		void setRoofType(string);
		void setAvailableSouvenirs(vector);
		
		//Getter
		string setStadiumName();
		int setSeatingCapacity();
		string setLocation();
		string setPlayingSurface();
		string setDateOpened();
		float setDistanceToCenter();
		string setParkTypology();
		string setRoofType();
		vector setAvailableSouvenirs();
};

stadium()
{
	bool AddSouvenir = true;
	char choice;
	
	cout<<"Stadium Name: ";
	getline(cin, stadiumName);
	cout<<"Seating Capacity: ";
	cin>>seatingCapacity;
	cin.ignore(10,'\n');
	cout<<"Location: ";
	getline(cin location);
	cout<<"Playing Surface: ";
	getline(cin, playingSurface);
	cout<<"Date Opened: ";
	getline(cin, dateOpened);
	cout<<"Distance to Center Field: ";
	cin>>distanceToCenter;
	cin.ignore(10,'\n');
	cout<<"Park Typology: ";
	getline(cin, parkTypology);
	cout<<"Roof Type: ";
	getline(cin, roofType);
	cout<<endl;
	
	while (AddSouvenir==true)
	{
		cout<<"<1> Add a souvenir"<<endl;
		cout<<"<2> Finish Stadium"<<endl;
		
		cin>>choice;
		
		switch (choice)
		{
			case '1':
				souvenir newSouvenir;
				availableSouvenirs.push_back(newSouvenir);
				cout<<"Souvenir added to stadium"<<endl;
				break;
								
			case '2':
				AddSouvenir=false;
				break;
				
			default:
				cout<<"Error. Please enter '1' or '2'"<<endl;
				cin>>choice;
				break;
		}
	}
	
}

void setStadiumName(string name)
{
	stadiumName=name;
}

void setSeatingCapacity(int seats)
{
	seatingCapacity=seats;
}

void setLocation(string loc)
{
	location=loc;
}
void setPlayingSurface(string ps)
{
	playingSurface=ps;
}

void setDateOpened(string date)
{
	dateOpened=date;
}

void setDistanceToCenter(float dist)
{
	distanceToCenter=dist;
}

void setParkTypology(string type)
{
	parkTypology=type;
}

void setRoofType(string roof)
{
	roofType=roof;
}

void setAvailableSouvenirs(vector)
{

}

//Getter
string setStadiumName()
{
	return stadiumName;
}

int setSeatingCapacity()
{
	return seatingCapacity;
}

string setLocation()
{
	return location;
}
string setPlayingSurface()
{
	return playingSurface
}
string setDateOpened()
{
	return dateOpened;
}
float setDistanceToCenter()
{
	return distanceToCenter;
}
string setParkTypology()
{
	return typology;
}
string setRoofType()
{
	return roofType;
}
vector setAvailableSouvenirs()
{
	return avalableSouvenirs;
}

#ENDIF
