#ifndef SOUVENIRS_H
#define SOUVINERS_H

#include <iostream>
#include <QString>
#include <vector>

//using namespace std;

class souvenirs
{
	private:
        QString stadiumFrom;
        QString souvenirName;
		double price;
		
	public:
		//constructor
        souvenirs(QString from, QString _name, double _price): stadiumFrom{from}, souvenirName{_name}, price{_price}{}
		
		//setters
        void setSouvenirName(QString);
		void setPrice(double);
		
		//getters
        QString getFrom() const;
        QString getSouvenirName() const;
        double getPrice() const;
};

#endif
