#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

#include "View.h"

//View ctor
View::View(){

}


//View dtor;
View::~View(){

}


//Displays the main menu and reads in the user's selection
void View::mainMenu(int& selectionRef){
    
    int numOptions = 1;    
    selectionRef = -1;

    cout << endl;
    cout << "(1) Add student" << endl;
    cout << "(0) Exit" << endl;
    cin  >> selectionRef;

    while(selectionRef < 0 || selectionRef > numOptions){
        cout << "Enter your selection: ";
        cin >> selectionRef;
    }

    return;
}


//Reads in the student id
void View::readsInStudentId(int& idRef){

        cout << "student id :   ";
        cin  >> idRef;

    return;
}


//Reads all info from the user about one book
void View::readsInCourseInfo(int& codeRef, int& gradeRef, int& termRef, string& courseInsRef){
    
    //User inputs course code here or 0 to break/end inputting
    cout << "course code <0 to end>: ";
    cin  >> codeRef;
    cout << endl;
    if(codeRef == 0){
        return;
    }

    //User inputs number grade
    cout << "grade: ";
    cin  >> gradeRef;
    cout << endl;
 
    //User inputs term here
    cout << "term (YYYYTT): ";
    cin  >> termRef;
    cout << endl;

    //User inputs course instructor's name here
    cout << "course instructor: ";
    cin.ignore();
    getline(cin, courseInsRef);

    return;
}

//Prints out the contents in the Storage (ie Student Id and courses, takes
//a Storage reference  as a parameter, uses delegation to
//ask the Storage class to print to the screen
void View::print(Storage& inStorageRef){
    
    inStorageRef.print();

    return;
}
