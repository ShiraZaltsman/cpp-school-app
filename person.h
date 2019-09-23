//
// Created by shira on 9/19/19.
//

#ifndef CPP_SCHOOL_APP_SHIRAZALTSMAN_PERSON_H
#define CPP_SCHOOL_APP_SHIRAZALTSMAN_PERSON_H

#include <string>

class Person{
public:
    Person( const std::string& s);
    const std::string& getName();
    size_t getId();
    virtual void action() = 0;

private:
    size_t m_id;
    std::string m_name;
    static size_t current_id;
};

inline size_t Person::getId() {return this->m_id;}
inline const std::string &Person::getName() {return this->m_name;}
#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_PERSON_H
