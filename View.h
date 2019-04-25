#ifndef VIEW_H
#define VIEW_H

#include "Storage.h"

using namespace std;

class View
{
    public:
        
        //View ctor
        View();

        //View dtor
        ~View();

        //Displays the main menu and reads in the user's selection
        void mainMenu(int& selectionRef);

        //Reads the student id
        void readsInStudentId(int& idRef);

        //Reads all information from the user about one book
        void readsInCourseInfo(int& codeRef, int& gradeRef, int& termRef,
        string& courseInsRef);  

        //Prints out the library, takes in the Library as a parameter.
        //This function will use delegation (see tutorial #3) to as the Library
        //class to print to screen
        void print(Storage& inStorageRef);

    private:

};
#endif
