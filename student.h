//
// Created by shira on 9/19/19.
//

#ifndef CPP_SCHOOL_APP_SHIRAZALTSMAN_STUDENT_H
#define CPP_SCHOOL_APP_SHIRAZALTSMAN_STUDENT_H

#include <string>
#include "person.h"

class Student: public Person{
public:
    Student(const std::string& name, unsigned char grade );

    void action();
    virtual ~Student();
private:
    unsigned char m_grade;
};
#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_STUDENT_H
