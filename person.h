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
    std::string m_name;
    size_t m_id;
    static size_t ID =0;


};
#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_PERSON_H
