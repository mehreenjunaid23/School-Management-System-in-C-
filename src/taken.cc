#include <iostream>
#include <iomanip>
#include "student.h"
#include "course.h"
#include "taken.h"

using namespace std;

/* overloaded constructor that takes a student pointer,
a course pointer, and a grade as parameters */

Taken::Taken(student *st, course *cr, string gra)
{
  stuTakenCrs = st;
  crsTakenStu = cr;
  grade = gra;
}

Taken::Taken()
{
   stuTakenCrs = nullptr;
   crsTakenStu = nullptr;
   grade = "";
}

// setters
void Taken::setStuPointer(student* st)
{
  stuTakenCrs = st;
}

void Taken::setCrsPointer(course* cr)
{
  crsTakenStu = cr;
}

void Taken::setGra(string gra)
{
  grade = gra;
}

// getters
student* Taken:: getStuPointer()
{
  return stuTakenCrs;
}

course* Taken:: getCrsPointer()
{
  return crsTakenStu;
}
string Taken::getGra()
{
  return grade;
}

/* function that prints to the screen the corresponding student’s name,
the concatenated course code (subject and code), and the grade earned */
void Taken::print()
{
  const char separator = ' ';
  const int columnWidth = 16;
  cout << left << setw(columnWidth) << setfill(separator) << stuTakenCrs->getName();
  cout << left << setw(columnWidth) << setfill(separator) << crsTakenStu->getCourseCode();
  cout << left << setw(columnWidth) << setfill(separator) << grade;
}
