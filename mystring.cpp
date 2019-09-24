//
// Created by shira on 9/24/19.
//

#include "mystring.h"

MyString::MyString(const char *s) {
    if (s){
        str = new char[strlen(s)];
        strcpy(str, s);
    }else{
        this->str=NULL;
    }

}


MyString::MyString(const MyString &s) {
    allocString(s.getString());
}

MyString::~MyString() {
    delete[] str;
    str = NULL;
}

char *MyString::getString() const {
    return str;
}

void MyString::allocString(const char *s) {
    if (s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    } else str = NULL;
}

MyString &MyString::operator=(const MyString &s) {
    if(*this != s) {
        if (str)
            delete[] str;
        allocString(s.getString());
    }
    return *this;
}

MyString MyString::operator+(const MyString &s) {
    size_t sizeI = strlen(str);
    size_t sizeII = strlen(s.getString());
    char *temp = new char[sizeI + sizeII + 1];
    strcpy(temp, str);
    strcat(temp, s.str);
    MyString x(temp);
    delete[](temp);
    return x;
}

void MyString::operator+=(const MyString &s) {
    size_t sizeI = strlen(str);
    size_t sizeII = strlen(s.getString());
    char *temp = new char[sizeI + sizeII + 1];
    strcpy(temp, str);
    strcat(temp, s.str);
    delete[](str);
    allocString(temp);
    delete[](temp);
}

bool MyString::operator==(const MyString &s) const {
    return !strcmp(str, s.getString());
}

size_t MyString::length() const {
    return strlen(str);
}

bool MyString::operator<(const MyString &str2) const {
    return strcmp(str, str2.getString()) < 0;
}

bool MyString::operator>(const MyString &str2) const {
    return strcmp(str, str2.getString()) > 0;
}

bool MyString::operator<=(const MyString &str2) const {
    return strcmp(str, str2.getString()) <= 0;
}

bool MyString::operator>=(const MyString &str2) const {
    return strcmp(str, str2.getString()) >= 0;
}

bool MyString::operator!=(const MyString &str2) const {
    return strcmp(str, str2.getString()) != 0;
}

ostream &operator<<(ostream &os, const MyString &s) {

    for (size_t i = 0; i < s.length(); ++i) {
        os << s.str[i];
    }
    return os;
}

char &MyString::operator[](size_t index) {

    return str[index];

}

const char *MyString::c_str() const {
    return this->getString();
}