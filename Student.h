#ifndef STUDENT_H
#define STUDENT_H

#include "defs.h"
#include "Course.h"
#include "List.h"

class Student
{
  public:
    
    //Student Ctor
    Student(int=0);

    //Student Dtor
    ~Student();

    //Adds a course to the Linked List of Courses
    void addCourse(Course* aCoursePtr);

    //Prints courses stored in Linked List
    void print();

  private:

    int     id;

    List    llCourses;
};

#endif
