#ifndef STORAGE_H
#define STORAGE_H

#include "defs.h"
#include "Student.h"

class Storage
{

    public:
        //4.3 - collection class ctor
        Storage();

        //4.4 - collection class dtor : cleans up the dynamically Student ptrs
        ~Storage();

        //4.5 - adds a new student at the back of the array
        void addStu(Student* student);

        //4.6 - prints all the student information
        void print();

    private:
        //4.1 - collection of students represented as an array of ptrs
        Student* arrStuPtr[MAX_NUM_COURSES];

        //4.2 - the number of students currently in storage
        int numStuInStor;

};
#endif
