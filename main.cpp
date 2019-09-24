#include <iostream>
#include "school.h"
#include "test_school.h"

using std::cout;
using std::endl;
using std::list;
int main() {
    try {


        test_person();
        test_student();
        test_teacher();
        test_school();


        School my_school;
        my_school.addStudent(new Student("Shira", 1));
        my_school.addStudent(new Student("Elana", 2));
        my_school.addStudent(new Student("Chana", 3));
        my_school.addStudent(new Student("Shirel", 4));
        my_school.addStudent(new Student("Miriam", 5));
        my_school.addStudent(new Student("Rachely", 6));
        my_school.addStudent(new Student("Dvora", 7));
        my_school.addStudent(new Student("Elisheva", 8));


        my_school.addTeacher(new Teacher("Ola", "python"));
        my_school.addTeacher(new Teacher("Amitai", "cpp"));
        my_school.addTeacher(new Teacher("Zohar", "ML"));

        my_school.pairTeacherToStudent(3);
        cout << "Ola's student:" << endl;
        list<Student *> Ola_stud = my_school.getTeacherStudents("Ola");
        for (std::list<Student *>::iterator it = Ola_stud.begin(); it != Ola_stud.end(); ++it)
            std::cout << (*it)->getName() << endl;

        cout << "Amitai's student:" << endl;
        list<Student *> Amitai_stud = my_school.getTeacherStudents("Amitai");
        for (std::list<Student *>::iterator it = Amitai_stud.begin(); it != Amitai_stud.end(); ++it)
            std::cout << (*it)->getName() << endl;

        cout << "Zohar's student:" << endl;
        list<Student *> Zohar_stud = my_school.getTeacherStudents("Zohar");
        for (std::list<Student *>::iterator it = Zohar_stud.begin(); it != Zohar_stud.end(); ++it)
            std::cout << (*it)->getName() << endl;

        my_school.removeStudent(1010);
        cout<<"student 1010 was remove!"<<endl;
        my_school.removeTeacher(1013);
        cout<<"teacher 1013 was remove!"<<endl;
        my_school.printStudents();
        my_school.printTeacher();


    }catch (const char* e)
    {
        cout<<e<<endl;
    }
    return 0;
}