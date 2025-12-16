#include "person.h"



Person Person::mapJson(const QJsonObject &json)
{
    Person person;
    person.id = json["id"].toInt();
    person.firstName = json["firstname"].toString();
    person.lastName = json["lastname"].toString();
    return person;
}
