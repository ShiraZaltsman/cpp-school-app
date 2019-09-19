//
// Created by shira on 9/19/19.
//

#include "person.h"

Person::Person(const std::string &s) : m_name(s){

}

const std::string &Person::getName() {
    return this->m_name;
}

size_t Person::getId() {
    return this->m_id;
}
