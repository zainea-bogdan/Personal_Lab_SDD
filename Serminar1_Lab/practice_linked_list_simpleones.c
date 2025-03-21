//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//typedef struct
//{
//	char* name;
//	int grupa;
//	int id;
//}Student, *PStudent;
//
///*declaram structura la nod*/
//typedef struct Nod
//{
//	PStudent info;
//	struct Nod* next;
//}Nod;
//
//
///*metode pentru student*/
//
//PStudent createStudent(char* nume, int group, int id)
//{
//	PStudent newStud = (PStudent)malloc(1 * sizeof(Student));//mi am alocat memorie pentru un nou student
//	if (newStud != NULL)
//	{
//		newStud->name = (char*)malloc((strlen(nume) + 1)*sizeof(char));
//		
//		if (newStud->name != NULL)
//		{
//			strcpy_s(newStud->name, strlen(nume) + 1, nume);//am alocat memorie pentru grupa
//		}
//		newStud->grupa = group; //doar pointeaza catre grupa care e ca un fel de static
//		newStud->id = id;//aici ii dau id asa cum e ca e prin valoare;
//		
//		return newStud;
//
//	}
//	else
//	{
//		printf("nu s a alocat memorie");
//		return 0;
//	}
//}
//
//void afisareStudent(PStudent source)
//{
//	printf("#%d | %s | %d \n", source->id, source->name, source->grupa);
//}
//
//void deleteStudent(PStudent source)
//{
//	free(source->name);
//	free(source);
//	source = NULL;
//	printf("\n S a dus fraieru!");
//}
//
///*======lISTA SIMPLA====================*/
//Nod* initNod(PStudent source)
//{
//	Nod* nodNou = (Nod*)malloc(1 * sizeof(Nod));
//	/*incep sa initializez elemten info din nod*/
//	if (nodNou != NULL)
//	{/*
//		nodNou->info = (PStudent)malloc(1 * sizeof(Student));
//		if (nodNou->info != NULL)
//		{
//			nodNou->info->name = (char*)malloc((strlen(source->name) + 1) * sizeof(char));
//			if (nodNou->info->name != NULL)
//			{
//				strcpy_s(nodNou->info->name, strlen(source->name) + 1, source->name);
//			}
//			nodNou->info->grupa = source->grupa;
//			nodNou->info->id = source->id;
//		}*/
//		nodNou->info = createStudent(source->name, source->grupa, source->id);
//		nodNou->next= NULL;
//	}
//
//	return nodNou;
//}
//
//
//Nod* inserareNod1(Nod* head, PStudent source)
//{
//	Nod* nodNou = initNod(source);
//	if (nodNou != NULL)
//	{
//		if (head == NULL)
//		{
//			head = nodNou;
//		}
//		else
//		{
//			Nod* temp=head;
//			while (temp->next!=NULL)
//			{
//				temp = temp->next;
//			}
//			temp->next = nodNou;
//		}
//	}
//	return head;
//}
//
//
//
//
//void deleteNod(Nod* source)
//{
//	free(source->info->name);
//	source->info->name = NULL;
//	free(source->info);
//	source->info = NULL;
//	source->next = NULL;
//	free(source);
//	source = NULL;
//}
//
///*magia*/
//
//void main()
//{
//	/*aloca memorie pentru un pointer catre primul nod*/
//	Nod* head;
//	PStudent gogu;
//	gogu = createStudent("gogu", 1030, 1);
//
//	head = initNod(gogu);
//	head = inserareNod1(head, gogu);
//	Nod* temp = head;
//		while (temp != NULL)
//		{
//			afisareStudent(temp->info);
//			temp = temp->next;
//		}
//
//	deleteNod(head);
//
//}
