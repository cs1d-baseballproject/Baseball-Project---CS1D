#IFNDEF SOUVENIRS_H
#DEFINE SOUVINERS_H

#include <iostream>
#include <Qtring>

using namespace std;

class souvenirs
{
	private:
		Qstring souvenirName;
		double price;
		
	public:
		//constructor
		souvenirs();
		
		//setters
		void setSouvenirName(Qstring);
		void setPrice(double);
		
		//getters
		Qstring getSouvenirName();
		double getPrice();
};

souvenirs::souvenirs()
{
	cin.ignore(100,'\n');
	cout<<"Enter Souvenir: ";
	getline(cin, souvenirName);
	cout<<"Enter Price: ";
	cin<<price;
}

void souvenirs::setSouvenirName(Qstring name)
{
	souvenirName=name;
}

void souvenirs::setPrice(double amount)
{
	price=amount;
}

Qstring souvenirs::getSouvenirName()
{
	return souvenirName;
}

souvenirs::double getPrice()
{
	return price;
}


#ENDIF
