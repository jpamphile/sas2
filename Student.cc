#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Student.h"

//Student Ctor
Student::Student(int i)
{
  id = i;
}


//Student Dtor - created to clean up the dynamically allocated Course objects
Student::~Student()
{

}


//Print() to work with Course pointers instead of objects
void Student::print()
{
  cout<< endl << endl << "Id: " << id << endl;

    llCourses.print();

    cout << "*****************************************************" << endl;

    return;
}


//Adds a course to the Linked List
void Student::addCourse(Course* aCoursePtr)
{
    llCourses.add(aCoursePtr);
    return;
}
