#include "Studentinfo.h"

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
	free(pablo);
	pablo = NULL;
}

//setter
void transfer_group(PStudentinfo test,int noua_grupa)
{
	test->group_no = noua_grupa;
}