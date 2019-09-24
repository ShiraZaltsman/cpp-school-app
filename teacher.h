//
// Created by shira on 9/19/19.
//
#include "person.h"

#ifndef CPP_SCHOOL_APP_SHIRAZALTSMAN_TEACHER_H
#define CPP_SCHOOL_APP_SHIRAZALTSMAN_TEACHER_H

class Teacher : public Person {
public:
    Teacher(const MyString &name, const MyString &lesson);

    void action();

    virtual ~Teacher();

private:
    const MyString m_lesson;
};

#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_TEACHER_H
