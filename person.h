//
// Created by shira on 9/19/19.
//

#ifndef CPP_SCHOOL_APP_SHIRAZALTSMAN_PERSON_H
#define CPP_SCHOOL_APP_SHIRAZALTSMAN_PERSON_H

#include "mystring.h"

class Person {
public:
    Person(const MyString &s);

    const MyString &getName();

    size_t getId();

    virtual void action() = 0;

private:
    size_t m_id;
    MyString m_name;
    static size_t current_id;
};

inline size_t Person::getId() { return this->m_id; }

inline const MyString &Person::getName() { return this->m_name; }

#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_PERSON_H
