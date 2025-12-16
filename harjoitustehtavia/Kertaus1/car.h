#ifndef CAR_H
#define CAR_H

#include <QString>


class Car
{
public:
    Car();
    Car(QString, QString, int);
    QString getBrand() const;
    void setBrand(const QString &newBrand);

    QString getModel() const;
    void setModel(const QString &newModel);

    int getYearModel() const;
    void setYearModel(int newYearModel);

private:
    QString brand;
    QString model;
    int yearModel;
};

#endif // CAR_H
