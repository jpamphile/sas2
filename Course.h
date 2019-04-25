#ifndef COURSE_H
#define COURSE_H

class Course
{
  public:
    
    //Course ctor
    Course(int=0, int=0, int=0, string=" ");

    //Course dtor
    ~Course();

    //Prints out a course
    void print();

    //Compares 2 courses based on course code then term
    bool lessThan(Course* coursePtr);

  private:
    
    //code, for 2404 in COMP2404
    int code;

    //grade, numeric grade from 0 (F) to 12 (A+), with -1 for WDN
    int grade;
    
    //term - YYYYTT format: YYYY (4-digit year), TT (terms 10 = W, 20 = S, 30 = F)
    int term;

    //course instructor's name represented as a string
    string courseIns;
    
    //Converts number grade into letter grade
    void getGradeStr(string&);
};

#endif
