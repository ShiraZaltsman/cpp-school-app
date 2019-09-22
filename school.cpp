//
// Created by shira on 9/19/19.
//

#include "school.h"

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
    for (size_t i = 0; i <this->getNumOfTeachers() ; ++i) {
        std::list<Student *> students;
        for (size_t j = ratio*i; j < ratio*i+ratio; ++j) {
            if(j>=this->m_all_students.size()){
                break;
            }
            students.push_back(this->m_all_students[j]);
        }
       this->m_student_teacher.insert(std::pair<std::string, std::list<Student*> >(this->m_all_teacher[i]->getName(),students));


    }
//    size_t num_student=this->getNumOfStudents();
//    for (int i = 0; i < num_student; ++i) {
//        this->m_student_teacher.insert(this->m_all_teacher[i]->getName(), this->m_all_students);
//    }
//
//    this->getNumOfStudents()%ratio

}

void School::addTeacher(Teacher *teacher) {
    this->m_all_teacher.push_back(teacher);
}

std::list<Student *> School::getTeacherStudents(const std::string &teacherName) const {
    return this->m_student_teacher.at(teacherName);
}

School::~School() {
    for (size_t i = 0; i < this->getNumOfStudents(); ++i) {
        delete this->m_all_students[i];

    }
    for (size_t i = 0; i < this->getNumOfTeachers(); ++i) {
        delete this->m_all_teacher[i];

    }
}
