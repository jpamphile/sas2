#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Storage.h"

//Storage ctor
Storage::Storage(){
    numStuInStor = 0;
}

//Storage dtor, cleans up dynamically allocated Student objects
Storage::~Storage(){
    for(int i = 0; i < numStuInStor; i++){
        delete arrStuPtr[i];
    }
}

//Adds a new student to the end of the array
void Storage::addStu(Student* student){

    arrStuPtr[numStuInStor] = student;
    numStuInStor++;
}


//Prints out all the student info
void Storage::print(){
        
    cout << endl << endl << "STUDENT INFO: " << endl;

    for(int i = 0; i < numStuInStor; i++){
        arrStuPtr[i]->print();
    }
    
    cout << endl;
}
