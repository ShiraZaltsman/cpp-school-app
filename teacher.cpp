//
// Created by shira on 9/19/19.
//

#include <iostream>
using namespace std;
#include "teacher.h"

Teacher::Teacher(const std::string &name, const std::string &lesson) : Person(name), m_lesson(lesson) {


}

void Teacher::action() {
    std::cout<<"Hello World! my name is "<<this->getName()<<" and I'm teaching: "<<m_lesson<<std::endl;

}

Teacher::~Teacher() {

}
