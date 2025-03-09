#include "Studentinfo.h"
#include <stdio.h>
#include "string.h"

PStudentinfo createstudentinfo(const char* name, short group)
{
	PStudentinfo newStud;
	newStud = (PStudentinfo)malloc(sizeof(Studentinfo));
	if (newStud != NULL)
	{
		newStud->name = (char*)malloc(strlen(name)+1);
		if (newStud->name != NULL)
		{
			strcpy_s(newStud->name, strlen(name) + 1, name);
		}

		newStud->group_no = group;
	}

	return newStud;
};

void deletestudentinfo(PStudentinfo pablo)
{
	printf("s-a dus stud. AMEN!\n");
	free(pablo);
	pablo = NULL;
}

//setter
void transfer_group(PStudentinfo test,int noua_grupa)
{
	test->group_no = noua_grupa;
}

void afisare_date_student(PStudentinfo source)
{
	printf("Numele studentului este: %s si face parte din grupa %d\n", source->name, source->group_no);
}

