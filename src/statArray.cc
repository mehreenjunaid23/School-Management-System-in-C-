#include <iostream>
#include "statArray.h"

using namespace std;

// constructors:
StatArray::StatArray() //default
{
  size = 0;
}

StatArray::~StatArray() //destructor
{
  for(int i=0; i<size; ++i)
  {
    delete arr2[i];
  }
}

void StatArray::add(course* c)
{
  if (size > MAX_ARR-1) // return if array if full
  {
    cout << "Sorry it's FULL" << endl;
    return;
  }

  else
  {
    int pos=0;
    for (int i=0; i<size-1; ++i)
    {
      if(c->lessThan(arr2[i]))
      { //find the pos to insert
        pos = i;
        break;
      }
    }

    for (int i=size; i>pos ;--i)
    { //shift the array right from the back
      arr2[i] = arr2[i-1];
    }
    arr2[pos] = c;
    size++;
  }
}

/* function to searche the array to find the course with the id parameter,
and returns the corresponding course in the c parameter*/
bool StatArray::find(int id, course** c)
{
  for(int i=0;i<size;++i)
  { //loop through the courseArr to find course ID in param
    if (arr2[i]->getCourseID() == id)
    {
      *c = arr2[i];
      return true;
    }
  }
  *c = nullptr;  //if after loop it cant find the student then set the pointer to NULL
  return false;
}


void StatArray::print()
{
  const char separator = ' ';
  const int columnWidth = 8;

  cout << "ID";
  cout <<"\t"<< "CourseCode";
  cout <<"    "<< "Section";
  cout <<"\t   "<< "Term";
  cout <<"\t\t"<< "Instructor";

  cout << endl;
  cout << "------------------------------------------------------------------------------------" << endl;

  for(int i = 0; i < size; i++){
    arr2[i]->print();
    cout << endl;
  }
  cout << "------------------------------------------------------------------------------------" << endl;
}
