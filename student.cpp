//
// Created by shira on 9/19/19.
//
#include <iostream>
#include "student.h"

using namespace std;

Student::Student(const MyString &name, unsigned char grade) : Person(name), m_grade(grade) {

}

void Student::action() {
    cout << "Hello World! my name is " << this->getName() << " and I'm in grade: " << this->m_grade << endl;
}

Student::~Student() {

}
