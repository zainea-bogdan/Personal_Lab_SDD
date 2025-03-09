//#include <stdio.h>
//#include "Studentinfo.h"
//
//
//
//
////int* introducere_elemente (int* vector_adt, int dimensiune)
////{
////	for (int i = 0; i < dimensiune; i++)
////	{
////		printf("introdu elementul pe pozitia %d: ", i);
////		scanf_s("%d", &vector_adt[i]);
////	}
////
////	return vector_adt;
////}
////
////
////void display(int* vector_adt, int dimensiune)
////{
////	for (int i = 0; i < dimensiune; i++)
////	{
////		printf("elementul de pe pozitia %d este: %d\n",i,vector_adt[i]);
////	}
////}
////
////int* add(int* vector, int* dim, int element)
////{
////	int* temp;
////	temp = (int*)malloc((*dim + 1) * sizeof(int));
////	if (temp != NULL)
////	{
////		for (int i = 0; i < *dim; i++)
////		{
////			temp[i] = vector[i];
////		}
////		temp[*dim] = element;
////		*dim = *dim + 1;
////		free(vector);
////
////		return temp;
////	}
////	else
////	{
////		printf("eroare alocare memorie!");
////	}
////}
////
////int* delete(int* vector, int* dim, int elem_cautat)
////{
////	int* temp;
////	int flag=0;//negasit
////	int index_cautat;//tinem minte poz la care l-am gasit
////	temp = (int*)malloc(sizeof(int) * (*dim - 1));
////	if (temp != NULL)
////	{
////		//cautam element
////		for (int i = 0; i < *dim; i++)
////		{
////			if (vector[i] == elem_cautat)
////			{
////				flag = 1;
////				index_cautat = i;
////				break;
////			}
////		}
////		//verificam daca am gasit
////		if (flag == 0)
////		{
////			printf("elementul nu exista in acest vector! BYE!\n");
////			return vector;
////		}
////		else
////		{	
////				for (int i = 0,j=0; i < *dim; i++)
////				{
////					if (i != index_cautat)
////					{
////						temp[j++] = vector[i];
////					}
////				}
////				*dim = *dim - 1;
////			
////				free(vector);
////
////				return temp;
////		}
////	}
////	else
////	{
////		return NULL;
////	}
////
////
////
////
////
////}
////
//
//
//void main()
//{
//	//printf("hello world\n");
//	//PStudentinfo Hector;
//	//Hector = createstudentinfo("Hector", 1067);
//	//printf("Numelee noului coleg din grupa %d este: %s!!\n", Hector->group_no, Hector->name);
//	//transfer_group(Hector, 1030);
//	//printf("%s s-a mutat la grupa %d", Hector->name, Hector->group_no);
//
//	//deletestudentinfo(Hector);
//
//	//int* vector_ADT;
//	//int n,element_adaugat,element_de_sters;
//	//printf("dimensiune vector este de: ");
//	//scanf_s("%d", &n);
//	//vector_ADT = (int*)malloc(n * sizeof(int));
//
//	//vector_ADT = introducere_elemente(vector_ADT, n);
//	//display(vector_ADT, n);
//
//	//printf("ce element doresti sa adaugi? Scrie: ");
//	//scanf_s("%d", &element_adaugat);
//	//vector_ADT=add(vector_ADT, &n, element_adaugat);
//	//display(vector_ADT, n);
//
//	//printf("ce element doresti sa stergi din vector? ");
//	//scanf_s("%d", &element_de_sters);
//	//vector_ADT = delete(vector_ADT, &n, element_de_sters);
//	//display(vector_ADT, n);
//
//
//	///*dezalocare*/
//	//free(vector_ADT);
//	//vector_ADT = NULL;
//
//
//
//}