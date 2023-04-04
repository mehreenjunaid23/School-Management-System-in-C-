#ifndef student_H
#define student_H
#include <iostream>
#include <string>

using namespace std;

class student
{
//methods
	public:

	//getters
	string getNum(); // a unique number that identifies the student "ID"
	string getName(); // name of the student
	string getMajor(); // major of the student
	float getGpa(); // the gpa of the student

	//setters
	void setNum(string);
	void setName(string);
	void setMajor(string);
	void setGpa(float);

	bool lessThan(student*); /* This function compares the student with the student
	passed in as the parameter*/

	void print() const;

	//constructors
	student(string, string, string, float); // overloaded constructor that takes an identifier as shown
	student(); // default constructor that sets all data members to default values

	//attributes
	private:
		string number;
		string name;
		string majorPgm;
		float gpa;

};

#endif
