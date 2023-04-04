#include <iostream>
#include "dynArray.h"

using namespace std;

// constructors:
//default
dynArray::dynArray()
{
  size = 0;
  stuDynArr = new student *[MAX_ARR];
}

dynArray::~dynArray() //destructor
{
  cout << "--------------------------------------------------------------------------------------" << endl;
  delete [] stuDynArr;
}

void dynArray::add(student* stu) // Student pointer as parameter
{
  if (size > MAX_ARR-1) // Return if the Array if full
  {
    cout << "Sorry the Array is full!" << endl;
    return;
  }

  else
  {
    int pos=0;
    for (int i=0; i<size-1; ++i)
    {
      if(stu->lessThan(stuDynArr[i]))
      { //find the pos to insert
        pos = i;
        break;
      }
    }

    for (int i=size; i>pos ;--i)
    { //shift the array right from the back
      stuDynArr[i] = stuDynArr[i-1];
    }
    stuDynArr[pos]=stu;
    size++;
  }
}

/* function to searche the array to find the student with its number as
num parameter, and returns the corresponding student in the stu parameter */
bool dynArray::find(string num, student** stu)
{
  //cout << "Iam in dyn find" <<endl;
  for(int i=0;i<=size;++i)
  {
    if (stuDynArr[i]-> getNum() == num)
    {
      *stu = stuDynArr[i];

      //stuDynArr[i]-> print();
      //cout<< *stu <<endl;
      return true;
    } //this function returns true if no errors occurred, and false otherwise
  }
  *stu = nullptr;
  return false;
}

void dynArray::print()
{
  const char separator = ' ';
  const int columnWidth = 8;

  cout << "ID";
  cout <<"\t\t"<< "Name";
  cout <<"\t\t"<< "Major";
  cout <<"\t "<< "GPA";

  cout << endl;
  cout << "--------------------------------------------------------------------------------------" << endl;

  cout << endl;
  for(int i = 0; i < size; i++)
  {
    stuDynArr[i]->print();
    cout << endl;
  }
  cout <<"--------------------------------------------------------------------------------------"<< endl;
}
