#include <string>
#include <iostream>
#include <iomanip>
#include "school.h"

using namespace std;

School::School() //defult constructor
{
  name = " ";
  numTaken =0;
}

School::School(string school_name) //overloaded constructor
{ // takes a school name as parameter
  name = school_name;
  /*for (int i=0; i< MAX_ARR; i++)
  {
    takinArr[i] = nullptr;
  }*/
  numTaken=0;
}

School::~School() //destructor
{
  /*for (int i=0; i < numTaken; i++)
    delete takinArr[i];*/
}

//function adds the given student to the student collection
void School::addStu(student* s)
{
  students.add(s);
}

// function that adds the given course to the course collection
void School::addCourse(course* c)
{
  courses.add(c);
}

void School::addTaken(string stuNum, int courseId, string grade)
{
  cout<<numTaken<<endl;
  if(numTaken>MAX_ARR-1)
    {
      cout<<"FULL"<<endl;
      return;
    }
    else
    {
      student* s;
      course* c;
      Taken* t;

      students.find(stuNum, &s); // finding the student object with the given student number
      courses.find(courseId, &c); //finding the course object with the given course id

      /* createing a new Taken object with the found student and course objects,
      and with the given grade*/
      if(s == nullptr)
      {
        cout<<"The Student is not found"<<endl;
        return;
      }
      else if(c == nullptr)
      {
        cout<<"The Course is not found"<<endl;
        return;
      }
      else
      {
        cout <<"Adding the taken course"<< endl;
        t = new Taken(s, c, grade);
        takinArr[numTaken] = t; //adding the new object to the back of the Taken collection
        numTaken++;

        cout<<"WELL DONE! you are added"<<endl;
      }
    }
}


//function that prints all the students in the student collection
void School::printStudents()
{
  //cout << name << "=== STUDENTS: " << endl;
  students.print();
}

// function that prints all the courses in the course collection
void School::printCourses()
{
  //cout << name << "=== COURSES: " << endl;
  courses.print();
}

// function that prints all the Taken objects in the collection
void School::printTaken()
{
  if (numTaken == 0)
  {
    cout << "There is no courses added yet "<< endl;
  }
  else
  {
    cout << "The courses that is taken: "<< endl;
    for(int i=0; i <numTaken; ++i)
    {
      takinArr[i]->print();
      cout << endl;
    }
  }
}

/* function that prints the full course information for every course taken
by the given student, along with the grade earned by the student in that course*/

void School::printTakenByStu(string Stuid)
{
  if(numTaken==0)
  {
    cout<<"There is NO student to be added"<<endl;
  }
  else
  {
    student *stuid = nullptr;
    students.find(Stuid, &stuid);

    const char separator = ' ';
    const int columnWidth = 8;
    cout<<endl;

    cout<<"Name"<<"\t\t "<<"ID"<<"\t"<<"CourseCode"<<"    "<<"Section"<<"\t   "<<"Term"<<"\t\t"<<"Instructor"<<"   "<<"Grade";
    cout<<endl;

    for(int i=0;i<numTaken;++i)
    {
      if(takinArr[i]->getStuPointer()->getNum()== Stuid)
      { //using the school name
        cout<<"--------------------------------------------------------------------------------------"<<endl;
        cout << left << setw(columnWidth*2) << setfill(separator) << takinArr[i]->getStuPointer()->getName();
        takinArr[i]->getCrsPointer()->print();//pointer to getCourse function of Taken Class, Then pointer to print function of Course class
        cout <<"\t"<< setfill(separator) << takinArr[i]->getGra();//pointer to the print function of Taken
        cout<<endl;
        cout<<"--------------------------------------------------------------------------------------"<<endl;
      }

      else
      {
        cout<<endl;
      }
    }
  }
}
