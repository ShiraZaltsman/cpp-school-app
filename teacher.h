//
// Created by shira on 9/19/19.
//
#include "person.h"
#ifndef CPP_SCHOOL_APP_SHIRAZALTSMAN_TEACHER_H
#define CPP_SCHOOL_APP_SHIRAZALTSMAN_TEACHER_H
class Teacher: public Person{
public:
    Teacher(const std::string& name,const std::string& lesson);
    void action();

private:
    const std::string m_lesson;
};
#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_TEACHER_H
