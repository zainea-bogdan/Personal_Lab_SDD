#include <stdio.h>
#include "Studentinfo.h"
#include <string.h>
#include <stdlib.h>

void main()
{	
	PStudentinfo* vector_studenti;
	PStudentinfo newStud;
	int nr_studenti_group;
	int nr_group;

	/*am introdus nr de studenti */
	printf("zi-mi cati studenti sunt in grupa dorita: ");
	scanf_s("%d", &nr_studenti_group);

	printf("zi-mi ce nr are grupa dorita: ");
	scanf_s("%d", &nr_group);

	/*aloc memorie pentru ei*/
	vector_studenti = (PStudentinfo)malloc(nr_studenti_group * sizeof(PStudentinfo));
	
	for (int  i = 0; i < nr_studenti_group; i++)
	{	
		char nume_temp[50];
		printf("enter student name: ");
		fgets(nume_temp, sizeof(nume_temp), stdin);
		nume_temp[strcspn(nume_temp, "\n")] = '\0';
		vector_studenti[i] = createstudentinfo(nume_temp,nr_group);
	}

	for (int i = 0; i < nr_studenti_group; i++)
	{
		afisare_date_student(vector_studenti[i]);
	}


	for (int i = 0; i < nr_studenti_group; i++)
	{
		deletestudentinfo(vector_studenti[i]);
	}

	
}