#include "souvenirs.h"

/*souvenirs::souvenirs()
{
    cin.ignore(100,'\n');
    cout<<"Enter Souvenir: ";
    getline(cin, souvenirName);
    cout<<"Enter Price: ";
    cin<<price;
}*/

void souvenirs::setSouvenirName(QString name)
{
    souvenirName = name;
}

void souvenirs::setPrice(double amount)
{
    price = amount;
}

QString souvenirs::getSouvenirName() const
{
    return souvenirName;
}

double souvenirs::getPrice() const
{
    return price;
}
