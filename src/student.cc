#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
using namespace std;

//getters
string student::getNum(){
	return number;
}

string student::getName(){
	return name;
}

string student::getMajor(){
	return majorPgm;
}

float student::getGpa(){
	return gpa;
}

//setters

void student::setNum(string num){
	//variable
	number = num;
}

void student::setName(string s_name){
	//variable
	name = s_name;
}

void student::setMajor(string mjr){
	//variable
	majorPgm = mjr;
}

void student::setGpa(float new_gpa){
	//variable
	gpa = new_gpa;
}

/* This function compares the student on the left-hand side with the student
passed in as the parameter; a student is considered “less than” otherStudent
if their name comes first in alphabetical order */
bool student::lessThan(student* otherStudent)
{
	return name < otherStudent->name;
} //retuning name lesThan.


void student::print() const
{
	cout<<number<<"\t"<<name<<"\t\t"<<majorPgm<<"\t"<<gpa<<"   ";
}//print the data of the object


student::student(string num, string s_name, string mjr, float new_gpa)
{ // overloaded constructor
	number = num;
	name = s_name;
	majorPgm = mjr;
	gpa = new_gpa;
}

student::student() // default constructor
{
	number = "";
	name = "";
	majorPgm = "";
	gpa = 0.0;
}
