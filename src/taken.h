#ifndef TAKEN_H
#define TAKEN_H
using namespace std;

#include "student.h"
#include "course.h"

class Taken
{
  public:
    //Methods
    Taken();
    Taken(student*, course*, string); /* overloaded constructor that takes a student pointer,
    a course pointer, and a grade as parameters */

    // setters
    void setStuPointer(student*);
    void setCrsPointer(course*);
    void setGra(string);

    // getters
    student* getStuPointer();
    course* getCrsPointer();
    string getGra();

    /* function that prints to the screen the corresponding student’s name,
    the concatenated course code (subject and code), and the grade earned */
    void print();

  private:
    //Attributes

    student* stuTakenCrs; /* pointer to the Student object representing the student
    that has taken the course*/

    course* crsTakenStu; /* pointer to the Course object representing the course
    taken by the student*/

    string grade; // the grade earned by the student
};
#endif
