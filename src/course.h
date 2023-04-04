#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class course
{
	// public
	public:
		//getters
		string getCourseCode(); /*it's the function that concatenates  the course subject
		and code, and returns this value.*/

		int getCourseID();
		int getCode();
		string getSubject();
		string getInstructor();
		string getTerm();
		char getSection();
		
		// constructors:
		//default
		course();
		//overloaded constructor
		course(int, int, char, string, string, string);

		//comparing two objects
		bool lessThan(course*);

		// printing the list
		void print();

		void set(int, string, int, char, string, string); //setter

	//private
	private:
		int id; // the unique identifier of the course
		int code; // the course code
		char section; // the course section
		string subject; // the subject of the course
		string term; // the term when the course was offered
		string instructor; // the course instructor

};

#endif
