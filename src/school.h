#ifndef SCHOOL_H
#define SCHOOL_H

#define MAX_ARR 64

#include "course.h"
#include "student.h"
#include "dynArray.h"
#include "statArray.h"
#include "taken.h"
#include <string>

class School
{
  public:
  	School(); // default constructor
    School(string); // overloaded constructor
  	~School(); // destructor

    void addStu(student*); //function adds the given student to the student collection
    void addCourse(course*); // function that adds the given course to the course collection
    void addTaken(string, int, string);
    void printStudents(); //function that prints all the students in the student collection
    void printCourses(); // function that prints all the courses in the course collection
    void printTaken(); // function that prints all the Taken objects in the collection
    void printTakenByStu(string); /* function that prints the full course information
    for every course taken by the given student, along with the grade earned by the student in that course*/

  private:
  	string name; // the school name
    dynArray students; // the collection of all students in the school, stored as a DynArray object
    StatArray courses; // the collection of all courses in the school, stored as a StatArray object
    int numTaken; // the number of elements in the Taken collection
    Taken *takinArr[MAX_ARR]; /* the collection of student-course pairs, representing
    which students have taken which courses; this collection will be stored as a statically
    allocated array of Taken object pointers*/
};
#endif
