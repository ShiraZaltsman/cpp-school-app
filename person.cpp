//
// Created by shira on 9/19/19.
//

#include "person.h"

size_t Person::current_id = 1000;

Person::Person(const MyString &s) : m_id(current_id++), m_name(s) {

}



