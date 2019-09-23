//
// Created by shira on 9/19/19.
//

#ifndef CPP_SCHOOL_APP_SHIRAZALTSMAN_SCHOOL_H
#define CPP_SCHOOL_APP_SHIRAZALTSMAN_SCHOOL_H

#include <map>
#include "student.h"
#include "teacher.h"
#include <list>
#include <vector>

class School {
public:
    ~School();

    void addStudent(Student *student);

    void addTeacher(Teacher *teacher);

    size_t getNumOfStudents() const;

    size_t getNumOfTeachers() const;

    void pairTeacherToStudent(size_t ratio);

    std::list<Student *> getTeacherStudents(const std::string &teacherName) const;

private:
    std::vector<Student *> m_all_students;
    std::vector<Teacher *> m_all_teacher;
    std::map<const std::string, std::list<Student *> > m_student_teacher;
};


#endif //CPP_SCHOOL_APP_SHIRAZALTSMAN_SCHOOL_H
