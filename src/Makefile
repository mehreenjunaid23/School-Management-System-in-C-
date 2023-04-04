TARGETS	=		project

all:		$(TARGETS)

project:		ProjectTestDriver.o  student.o course.o taken.o dynArray.o statArray.o school.o control.o view.o
	g++ -o		project		ProjectTestDriver.o		student.o course.o taken.o dynArray.o statArray.o school.o control.o view.o

ProjectTestDriver.o:		ProjectTestDriver.cc		student.h course.h taken.h dynArray.h statArray.h school.h control.h view.h
	g++ -c ProjectTestDriver.cc

student.o:		student.cc	student.h
	g++ -c student.cc

Course.o:		course.cc		course.h
	g++ -c course.cc

taken.o:		taken.cc		taken.h
	g++ -c taken.cc

dynArray.o:		dynArray.cc		dynArray.h
	g++ -c dynArray.cc

statArray.o:		statArray.cc		statArray.h
	g++ -c statArray.cc

school.o:		school.cc		school.h
	g++ -c school.cc

control.o:		control.cc		control.h
	g++ -c control.cc

view.o:		view.cc		view.h
	g++ -c view.cc

clean:$
	rm -f *.o project
