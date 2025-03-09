//#include <stdio.h>
//#include "Studentinfo.h"
//#include <string.h>
//#include <stdlib.h>
//
//void main()
//{	
//	//PStudentinfo* vector_studenti;
//	//PStudentinfo newStud;
//	//int nr_studenti_group;
//	//int nr_group;
//
//	/*int** materii_note;
//	int nr_materi;
//	int nr_studentii;
//	printf("introdu numarul de materii");
//	scanf_s("%d", &nr_materi);
//
//	printf("cati studenti au  materiile astea? ");
//	scanf_s("%d", &nr_studentii);
//
//	materii_note = (int**)malloc(nr_materi * sizeof(int*));
//
//	if (materii_note != NULL)
//	{
//		for (int i = 0; i < nr_materi; i++)
//		{
//			materii_note[i] = (int*)malloc(nr_studentii * sizeof(int));
//		}
//	}
//
//
//	for (int i = 0; i < nr_materi; i++)
//	{
//		for (int j = 0; j < nr_studentii;j++)
//		{
//			printf("introdu nota studentului %d, pentru materia %d ->", j, i);
//			scanf_s("%d", &materii_note[i][j]);
//		}
//	}
//
//	for (int i = 0; i < nr_materi; i++)
//	{
//		for (int j = 0; j < nr_studentii; j++)
//		{
//			printf("%d ", materii_note[i][j]);
//		}
//		printf("\n");
//	}
//	
//
//
//	if (materii_note != NULL)
//	{
//		for (int i = 0; i < nr_materi; i++)
//		{
//			printf("s-au dus studenti AMEN\n");
//			free(materii_note[i]);
//		}
//	}
//	free(materii_note);
//	materii_note = NULL;*/
//	
//
//
//	///*am introdus nr de studenti */
//	//printf("zi-mi cati studenti sunt in grupa dorita: ");
//	//scanf_s("%d", &nr_studenti_group);
//
//	//printf("zi-mi ce nr are grupa dorita: ");
//	//scanf_s("%d", &nr_group);
//
//	///*aloc memorie pentru ei*/
//	//vector_studenti = (PStudentinfo)malloc(nr_studenti_group * sizeof(PStudentinfo));
//	//
//	//for (int  i = 0; i < nr_studenti_group; i++)
//	//{	
//	//	char nume_temp[50];
//	//	printf("enter student name: ");
//	//	fgets(nume_temp, sizeof(nume_temp), stdin);
//	//	nume_temp[strcspn(nume_temp, "\n")] = '\0';
//	//	vector_studenti[i] = createstudentinfo(nume_temp,nr_group);
//	//}
//
//	//for (int i = 0; i < nr_studenti_group; i++)
//	//{
//	//	afisare_date_student(vector_studenti[i]);
//	//}
//
//
//	//for (int i = 0; i < nr_studenti_group; i++)
//	//{
//	//	deletestudentinfo(vector_studenti[i]);
//	//}
//}