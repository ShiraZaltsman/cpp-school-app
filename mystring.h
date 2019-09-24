//
// Created by shira on 9/24/19.
//

#ifndef CPP_SCHOOL_APP_SHIRAZALTSMAN_MYSTRING_H
#define CPP_SCHOOL_APP_SHIRAZALTSMAN_MYSTRING_H

#include <iostream>
using namespace std;
class MyString
{
public:
    // constructor.
    MyString(const char* s = NULL);
    MyString(const MyString & s);
    ~MyString();


    char* getString() const;
    // modify function.
    MyString & operator =(const MyString &);

    // operators
    bool operator==(const MyString &) const;

    bool operator<(const MyString &) const;
    bool operator>(const MyString &) const;
    bool operator<=(const MyString &) const;
    bool operator>=(const MyString &) const;
    bool operator!=(const MyString &) const;

    char& operator[] (size_t index);
    friend ostream & operator<<(ostream &, const MyString &);
    MyString operator+(const MyString & s);
    void operator+=(const MyString & s);

    const char* c_str() const;
    size_t length() const;

private:
    char * str;
    void allocString(const char* s);
};

inline size_t strlen(const char str[]){
    const char *p = str;
    while (*p++);
    return (p - str - 1);
}
inline void strcpy(char *dst, const char* src){
    while ((*dst++ = *src++));
}
inline int strcmp(const char *s1, const char *s2){
    while (*s1 && *s1++ == *s2++);
    return (*--s1 - *--s2);
}
inline void strcat(char *dst, const char *src){
    while (*dst++);
    --dst;
    strcpy(dst, src);
}



#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_MYSTRING_H
