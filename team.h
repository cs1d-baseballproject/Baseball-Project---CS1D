#IFNDEF TEAM_H
#DEFINE TEAM_H

#include <iostream>

//Constructors
team;

//Setters
void setTeamName(string);
void setLeague(string);

//Getters
string getTeamnName();
string getLeague();

class team
{
	private:
		string teamName;
		string league;
		stadium teamStadium;
		
	public:
		//Constructors
		team;
		
		//Setters
		void setTeamName(string);
		void setLeague(string);
		
		//Getters
		string getTeamnName();
		string getLeague();
	
};

team()
{
	cout<<"Enter Team Name: ";
	getline(cin, teamName);
	
	cout<<"Enter League: ";
	getline(cin, league);
	
	teamStadium = stadium;
}

//Setters
void setTeamName(string x)
{
	teamName=x;
}

void setLeague(string x)
{
	league=x;
}

//Getters
string getTeamName()
{
	return teamName;
}

string getLeague()
{
	return league;
}

#ENDIF
