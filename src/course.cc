#include "course.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

//getters

/*it's the function that concatenates the course subject
and code, and returns this value.*/
int course::getCourseID()
{
  return id;
}

int course::getCode()
{
  return code;
}

string course::getSubject()
{
  return subject;
}

string course::getInstructor()
{
  return instructor;
}

string course::getTerm()
{
  return term;
}

char course::getSection()
{
  return section;
}

string course::getCourseCode()
{
  return subject + to_string(code);
}

void course::set(int myIdCourse, string mySubject, int myCourse, char mySection, string myTerm, string myInstructor)
{
  id = myIdCourse;
  subject = mySubject;
  code = myCourse;
  section = mySection;
  term = myTerm;
  instructor = myInstructor;
} //setter

/* member function that compares the course on the left-hand side with
the course passed in as the parameter; a course is considered “less than” another*/
bool course::lessThan(course* otherCourse)
{
  if(subject < otherCourse->subject)
  { // order by subject
    return true;
  }
  else if(code < otherCourse->code)
  { // if the two subjects are the same, order by course code
    return true;
  }
  else if(term < otherCourse->term)
  { // if the two course codes are the same, order by term
    return true;
  }
  else if(section < otherCourse->section)
  { // if the two terms are the same, order by section
    return true;
  }
  else
  {
    return false;
  }
}

// function that prints to the screen all the course information
void course::print()
{
  cout<<id<<"\t"<<this->getCourseCode()<<"\t\t"<<section<<"\t"<<term<<"\t"<<instructor<<"   ";
}

// constructors:
//overloaded constructor
course::course(int iden, int c, char sec, string sub, string t, string instr)
{
	id = iden;
	code = c;
	section = sec;
	subject = sub;
	term = t;
	instructor = instr;
}

course::course()
{
  id = 0;
  subject = "";
  code = 0;
  section = '\0';
  term = "";
  instructor = "";
} //default constructor
