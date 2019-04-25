#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Course.h"

//2.2 ctor modified to initialize the new data members from parameters
Course::Course(int c, int g, int t, string ci)
{
    code        = c;
    grade       = g;
    term        = t;
    courseIns   = ci;
}

//Course dtor
Course::~Course()
{

}


//Compares 2 courses based on course code then term
bool Course::lessThan(Course* coursePtr){
    if(this->code == coursePtr->code){
        return(this->term < coursePtr->term);
    }

    return(this->code < coursePtr->code);
}

//Prints out one course to the screen
void Course::print()
{
  string str;

  cout << "-- COMP "        << code     << ":  ";
  cout << right << setw(2)  << term     << "   ";
  cout << right << setw(2)  << grade    << "   ";

  getGradeStr(str);

  cout << left  << setw(4)  << str;
  cout << left  << setw(15) << courseIns << endl;

}

//Converts number grade into letter grade
void Course::getGradeStr(string& gradeStr)
{
  string gradeStrings[] = {
    "WDN", "F", "D-", "D", "D+", "C-", "C", "C+", 
    "B-", "B", "B+", "A-", "A", "A+" };

  if ( grade >= -1 && grade <= 12 )
    gradeStr = gradeStrings[grade+1];
  else
    gradeStr = "Unknown";
}

