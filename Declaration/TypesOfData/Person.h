#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "MyString.h"

typedef MyString PersonID;

class Person
{
private: 
    PersonID id;
    MyString firstName;
    MyString middleName;
    MyString lastName;
    int bornYear;

public:
    Person();

    Person(PersonID id, MyString firstName, MyString middleName, MyString lastName, int bornYear);

    Person(Person const & other);

    MyString GetId() const;

    //void SetId();

    MyString GetFirstName() const; 

    //void SetFirstName();

    MyString GetMiddleName() const;

    //void SetMiddleName();

    MyString GetLastName() const;

    //void SetLastName();

    int GetBornYear() const;

    //void SetBornAge();

    friend std::istream &operator>>(std::istream &in, Person &person);

    friend std::ostream &operator<<(std::ostream &out, const Person &person);

    bool operator==(Person man);

    ~Person();
};

#endif