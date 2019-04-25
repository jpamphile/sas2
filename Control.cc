#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Control.h"

//Control ctor
Control::Control(){
    numCourses = 0;
}


//Control dtor
Control::~Control(){

}


//launch() - Implements the program control flow from the main() and does the following
void Control::launch(){
    
    int     id, code, grade, term; 
    int     menuSelection; 
    string  courseIns;

    while(1){
        
        //1 - Uses a View object to display the main menu.
        //1.1 - Reads the user's selection until user chooses to exit
        theView.mainMenu(menuSelection); 
    
        if(menuSelection == 0){
            break;
        }

        if(menuSelection == 1){
            
            //2 - The View object reads in the student's info. 
            theView.readsInStudentId(id);

            //2.1 - A new Student object is created.
            Student* aStudent = new Student(id);
            
            while(1){

                //3. - The View object reads in the info of one course. 
                theView.readsInCourseInfo(code, grade, term, courseIns); 
            
                if(code == 0){
                    break;
                }
                 
                //3.1 - A new Course object is created.
                Course* aCourse = new Course(code, grade, term, courseIns);
            
                //4 - Adds the course to the Student addCourse() and "funnels"/"delegates" adding the book
                //      into the Storage Class.
                //      Student addCourse() -> Storage addCourse()
                aStudent->addCourse(aCourse);
            
                //Increase the number of courses by 1.
                ++numCourses;
            }
            //5 - The addres of a new Student object is added in Storage 
            inStorage.addStu(aStudent);
       }
    }

    //Print out the content of the Storage at the end of the program.
    //print(Storage& inStorageRef) is called by a View object
    theView.print(inStorage);

    return;
}
