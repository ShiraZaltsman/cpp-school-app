//
// Created by shira on 9/22/19.
//
#include <iostream>
#include "test_school.h"
#include "school.h"

using std::cout;
using std::endl;

void test_person() {

    cout << ("can not creat instances of class person 'cuse its abstract class!!") << endl;
}

void test_student() {
    cout << endl << "-----------------------------" << endl;
    cout << "|        test student       |" << endl;
    cout << "-----------------------------" << endl;
    Student student1("shira", '8');
    Student student2("Elana", '6');
    Student student3("Chana", '4');
    cout << "--------- student 1 ---------" << endl;
    cout << student1.getName() << endl;
    cout << student1.getId() << endl;
    student1.action();
    cout << "-------- student 2 --------" << endl;
    cout << student2.getName() << endl;
    cout << student2.getId() << endl;
    student2.action();
    cout << "-------- student 3 --------" << endl;
    cout << student3.getName() << endl;
    cout << student3.getId() << endl;
    student3.action();
}

void test_teacher() {
    cout << endl << "---------------------------" << endl;
    cout << "|      test teacher       |" << endl;
    cout << "---------------------------" << endl;

    Teacher t1("Ola", "Python");
    Teacher t2("Amitai", "CPP");
    cout << "-------- teacher 1 --------" << endl;
    cout << t1.getName() << endl;
    cout << t1.getId() << endl;
    t1.action();
    cout << "-------- teacher 2 --------" << endl;
    cout << t2.getName() << endl;
    cout << t2.getId() << endl;
    t2.action();
}

void test_school() {
    cout << endl << "--------------------------" << endl;
    cout << "|      test school       |" << endl;
    cout << "--------------------------" << endl;


}