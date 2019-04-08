#IFNDEF SOUVENIRS_H
#DEFINE SOUVINERS_H

#include <iostream>
#include <string>

using namespace std;

class souvenirs
{
	private:
		string souvenirName;
		float price;
		
	public:
		//constructor
		souvenirs();
		
		//setters
		void setSouvenirName(string);
		void setPrice(float);
		
		//getters
		string getSouvenirName();
		float getPrice();
};

souvenirs()
{
	cin.ignore(100,'\n');
	cout<<"Enter Souvenir: ";
	getline(cin, souvenirName);
	cout<<"Enter Price: ";
	cin<<price;
}

void setSouvenirName(string name)
{
	souvenirName=name;
}

void setPrice(float amount)
{
	price=amount;
}

string getSouvenirName()
{
	return souvenirName;
}

float getPrice()
{
	return price;
}


#ENDIF
