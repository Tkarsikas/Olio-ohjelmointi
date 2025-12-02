#ifndef CAT_H
#define CAT_H

#include "animal.h"
#include "ianimal.h"

class Cat : public Animal, public IAnimal
{
private:
    string name;
public:
    Cat();
    ~Cat();
    string getName() const;
    void setName(const string &newName);
    void sound() override;

    // IAnimal interface
public:
    void sayName();
};

#endif // CAT_H
