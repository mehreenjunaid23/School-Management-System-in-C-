#ifndef STATARRAY_H
#define STATARRAY_H
#define MAX_ARR 64
#include "course.h"


class StatArray
{
  public:
    StatArray(); //default constructor
    ~StatArray(); //destructor

	  void add(course*); // Course pointer as parameter
    bool find(int, course**); //function to searche the array to find the course

    void print();

  private:
    course* arr2[MAX_ARR];
    int size;

};
#endif
