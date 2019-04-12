#ifndef SOUVENIRS_H
#define SOUVINERS_H

#include <iostream>
#include <QString>

using namespace std;

class souvenirs
{
	private:
        QString souvenirName;
		double price;
		
	public:
		//constructor
        souvenirs(QString _name, double _price): souvenirName{_name}, price{_price}{}
		
		//setters
        void setSouvenirName(QString);
		void setPrice(double);
		
		//getters
        QString getSouvenirName() const;
        double getPrice() const;
};

#endif
