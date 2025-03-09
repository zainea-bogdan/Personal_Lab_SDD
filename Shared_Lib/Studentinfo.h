#pragma once

#include "stdlib.h"
#include "string.h"

typedef struct Studentinfo
{
	char* name;
	short group_no;
}Studentinfo,*PStudentinfo;

PStudentinfo createstudentinfo(const char*, short);
void deletestudentinfo(PStudentinfo);
void transfer_group(PStudentinfo, int);
void afisare_date_student(PStudentinfo);