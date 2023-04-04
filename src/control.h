#ifndef CONTROL_H
#define CONTROL_H

#include "school.h"
#include "view.h"

//Control class that controls the classes and initializes students and courses in the school, and allows user to do inputs from there to print or whatever.
class Control
{
  public:
  	Control(); //default constructor
  	void launch();
    void initStudents(School *); //function that initializes the students contained in the school
  	void initCourses(School *); //function that initializes the courses contained in the school


  private:
  //School school; // the School object to be managed
  	View view; // the View object that will be responsible for most user I/O
};

#endif
