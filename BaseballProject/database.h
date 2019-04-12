#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>

class database
{
private:
    QString filePath;
    QSqlDatabase data;

public:
    database(QString path): filePath{path}/*, data{QSqlDatabase::addDatabase("QODBC", "xlsx_connection")}*/
    {
       /* qDebug() << filePath;  //+ QString("r:\\CS1D\\Baseball-Project---CS1D\\CS 1D Spring 2019 Baseball Project-2\\MLB Information.xlsx")
        data.setDatabaseName("DRIVER={Microsoft Excel Driver (*.xls, *.xlsx, *.xlsm, *.xlsb)};DBQ=" + filePath);
        if(data.open())
        {
            qDebug() << "database is open!!!";
            QSqlQuery query("select * from [" + QString("Sheet1") + "$]");
            qDebug() << query.lastError();

            while(query.next())
            {
                QString column1 = query.value(0).toString();
                qDebug() << column1;
            }
        }

        data.close();
        QSqlDatabase::removeDatabase("xlsx_connection");*/

        QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", "xlsx_connection");
        db.setDatabaseName("DRIVER={Microsoft Excel Driver (*.xls, *.xlsx, *.xlsm, *.xlsb)};DBQ=" + QString("MLBInformation.xlsx"));
        if(db.open())
        {
            qDebug() << "database is open!!!";
            QSqlQuery query("select * from [" + QString("Sheet1") + "$]"); // Select range, place A1:B5 after $
            while (query.next())
            {
                QString column1= query.value(0).toString();
                qDebug() << column1;
            }
            db.close();
            QSqlDatabase::removeDatabase("xlsx_connection");
        }
    }
};

#endif // DATABASE_H
