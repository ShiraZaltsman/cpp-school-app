//
// Created by shira on 9/19/19.
//

#include "person.h"
size_t Person::current_id=1000;
Person::Person(const std::string &s) :m_id(current_id++), m_name(s){

}

const std::string &Person::getName() {
    return this->m_name;
}

size_t Person::getId() {
    return this->m_id;
}
