#include <stdio.h>
#include "Studentinfo.h"

void main()
{
	printf("hello world");
	PStudentinfo Hector;
	Hector = createstudentinfo("Hector", 1067);
	printf("Numele noului coleg din grupa %d este: %s!!", Hector->group_no, Hector->name);
	deletestudentinfo(Hector);
}