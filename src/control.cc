#include <iostream>
using namespace std;
#include <string>
#include "control.h"


Control::Control() //default constructor
{

}

void Control::launch()
{ // call the initialization functions
  School* cuRavrns = new School("EFFAT UNIVERSITY");
	int id;
	string name, grade;
  initStudents(cuRavrns);
  initCourses(cuRavrns);

	int choice = 0;

  while (1)
	{
    view.showMenu(choice); /*the View object to display the main menu and read
		the user’s selection, until the user exits*/
    if (choice == 0)
      break;

		switch(choice)
		{
			case 1:
			cuRavrns->printStudents(); // printing out all the students in the school
			break;

			case 2:
			cuRavrns->printCourses(); // printing out all the courses in the school
			break;

			case 3:
			cuRavrns->printTaken(); // printing out all the Taken objects in the school’s collection
			break;

			case 4:
			//cuRavrns->printTakenByStu(name);
       /* printing out all the courses taken by a specific student,
			and the grades earned*/
			view.printStr("Enter the student number: ");
			view.readStr(name);
			cuRavrns->printTakenByStu(name);
			break;

			case 5:
      cout << "Please enter your data to register: " << endl;

      view.printStr("Please Enter your student ID: ");
      view.readStr(name);
      view.printStr("Please Enter your Course ID: ");
      view.readInt(id);
      view.printStr("Please Enter your Grade: ");
      view.readStr(grade);

			cuRavrns->addTaken(name, id, grade);
			break;
		}
  }
}

void Control::initStudents(School* sch)
{
  cout << "Initializing the students data...." << endl;
	sch->addStu(new student("S19105548",  "Haifa" , "CS", 3.99));
  sch->addStu(new student("S20106424", "Mehreen", "CS", 3.92));
  sch->addStu(new student("S19105762", "Flowra" , "CS", 3.98));
  sch->addStu(new student("S19105541", "Mageda" , "CS", 3.94));

}

void Control::initCourses(School* sch)
{
	cout << "Initializing the courses data...." << endl;
  sch->addCourse(new course(3001, 101 , '1', "MATH", "Spring2020", "Dr. Tayeb"));
  sch->addCourse(new course(1100, 201 , '1', "MATH",  "Fall2021" , "Dr. Moussa"));
  sch->addCourse(new course(1211, 2111, '3',  "CS" ,  "Fall2021" , "Dr. Zain"));
  sch->addCourse(new course(2001, 1331, '2',  "CS" , "Spring2022", "Dr. Akila"));

}
