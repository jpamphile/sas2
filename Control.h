#ifndef CONTROL_H
#define CONTROL_H

#include "Student.h"
#include "Storage.h"
#include "View.h"

using namespace std;

class Control
{
    public:
    
        //Control ctor
        Control();

        //Control dtor
        ~Control();

        //Implements the program control flow and does the following:
        void launch();

    private:

        //Data member for the Storage object that used to be declared in main()
        Storage inStorage;

        //Data member for a new View object. Will be responsible for user I/O
        View    theView;

        //Data member for Student object. Used to be declared in main().        
        Student* aStudent;

        //Data member tracking the number of courses. Used to be declared in main()
        int     numCourses;

};
#endif
