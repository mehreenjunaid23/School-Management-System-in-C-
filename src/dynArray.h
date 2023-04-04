#ifndef DYNARRAY_H
#define DYNARRAY_H

#define MAX_ARR 64

#include "student.h"


class dynArray
{
  public:
   dynArray(); // default constructor
	~dynArray(); // destructor

  void print();

  void add(student*); // take a Student pointer as parameter
  bool find(string ,student**); // function to searche the array to find the student


  private:
    student** stuDynArr;
    int size;
};

#endif
