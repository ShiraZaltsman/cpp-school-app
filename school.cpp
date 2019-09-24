//
// Created by shira on 9/19/19.
//

#include "school.h"
#include <exception>

void School::addStudent(Student *student) {

    this->m_all_students.push_back(student);
}

size_t School::getNumOfStudents() const {
    return this->m_all_students.size();
}

size_t School::getNumOfTeachers() const {
    return this->m_all_teacher.size();
}

void School::pairTeacherToStudent(size_t ratio) {
    for (size_t i = 0; i < this->getNumOfTeachers(); ++i) {
        std::list<Student *> students;
        for (size_t j = ratio * i; j < ratio * i + ratio; ++j) {
            if (j >= this->m_all_students.size()) {
                break;
            }
            students.push_back(this->m_all_students[j]);
        }
        this->m_student_teacher.insert(
                std::pair<MyString, std::list<Student *> >(this->m_all_teacher[i]->getName(), students));
    }

}

void School::addTeacher(Teacher *teacher) {
    this->m_all_teacher.push_back(teacher);
}

std::list<Student *> School::getTeacherStudents(const MyString &teacherName) const {
    try {
        return this->m_student_teacher.at(teacherName);
    }catch (exception e){
        __throw_invalid_argument("teacher name not valid");
    }
}

School::~School() {
    for (size_t i = 0; i < this->getNumOfStudents(); ++i) {
        delete this->m_all_students[i];

    }
    for (size_t i = 0; i < this->getNumOfTeachers(); ++i) {
        delete this->m_all_teacher[i];

    }
}

void School::removeStudent(size_t s_id) {

    for (std::vector<Student *>::iterator iter = this->m_all_students.begin();
         iter != this->m_all_students.end(); ++iter) {
        if ((*iter)->getId() == s_id) {
            delete (*iter);
            this->m_all_students.erase(iter);

            return;
        }
    }
    throw ("Error! id not valid");
}

void School::removeTeacher(size_t t_id) {
    for (std::vector<Teacher *>::iterator iter = this->m_all_teacher.begin();
         iter != this->m_all_teacher.end(); ++iter) {
        if ((*iter)->getId() == t_id) {
            //delete (*iter);
            this->m_all_teacher.erase(iter);
            return;
        }
    }
    throw ("Error! id not valid");
}

void School::printStudents() {
    std::cout<<endl<<"students list:"<<endl;
    for (std::vector<Student *>::iterator it = this->m_all_students.begin(); it != this->m_all_students.end(); ++it)
        std::cout << (*it)->getName() << endl;
}
void School::printTeacher() {
    std::cout<<endl<<"teacher list:"<<endl;
    for (std::vector<Teacher *>::iterator it = this->m_all_teacher.begin(); it != this->m_all_teacher.end(); ++it)
        std::cout << (*it)->getName() << endl;
}