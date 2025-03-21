#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Studentinfo
{
	char* name;
	short group_no;
}Studentinfo, *PStudentinfo;


typedef struct Nod
{
	PStudentinfo info;
	struct Nod* next;
}Nod;

PStudentinfo createstudentinfo(const char* name, short group)
{
	PStudentinfo newStud;
	newStud = (PStudentinfo)malloc(sizeof(Studentinfo));
	if (newStud != NULL)
	{
		newStud->name = (char*)malloc(strlen(name) + 1);
		if (newStud->name != NULL)
		{
			strcpy_s(newStud->name, strlen(name) + 1, name);
		}

		newStud->group_no = group;
	}
	else
	{
		printf("prbl de creeare student");
		free(newStud);
		newStud = NULL;
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
void transfer_group(PStudentinfo test, int noua_grupa)
{
	test->group_no = noua_grupa;
}

void afisare_date_student(PStudentinfo source)
{
	printf("Numele studentului este: %s si face parte din grupa %d\n", source->name, source->group_no);
}

/*implementare initializare nod si creeare si stergere de lista*/


Nod* initNod(PStudentinfo continut)
{
	Nod* nodNou = (Nod*)malloc(1 * sizeof(Nod));
	if (nodNou != NULL)
	{
		nodNou->info = (PStudentinfo)malloc(sizeof(Studentinfo));
		if (nodNou->info != NULL)
		{
			nodNou->info->name = (char*)malloc(strlen(continut->name)+1);
			if (nodNou->info->name)
			{
				strcpy_s(nodNou->info->name, strlen(continut->name) + 1, continut->name);
			}
			nodNou->info->group_no = continut->group_no;
		}
		nodNou->next = NULL;
	}

	return nodNou;
}

Nod* inserareNod(Nod* head, PStudentinfo source)
{
	Nod* nou = initNod(source);
	if (head == NULL)
	{
		head = nou;
	}
	else
	{
		Nod* temp = head;
		while (temp->next!= NULL)
		{
			temp = temp->next;
		}
		temp->next = nou;
	}

	return head;
}

Nod* creeazaLista(Nod* head,FILE* citire_studenti)
{
	
	if (citire_studenti != NULL)
	{
		char delimiter[] = { ',','\0' };
		char buffer[100], name[100];
		char* token;
		int grupa;
		while (fgets(buffer, 100, citire_studenti))
		{
			token = strtok(buffer, delimiter);//folosesc buffer ca sa pot lua numele;
			strcpy_s(name, sizeof(buffer), buffer);

			token = strtok(NULL, delimiter);
			grupa = atoi(token);// asta e ca o convertire
			PStudentinfo nouStud = createstudentinfo(name, grupa);
			head = inserareNod(head, nouStud);
			deletestudentinfo(nouStud);
		}
	}
	else
	{
		printf("brothere you dumbass nu exista fisierul respectiv");
	}

	return head;
}


void afiseazaLista(Nod* head)
{
	Nod* temp;
	temp = head;
	while (temp != NULL)
	{
		printf("Studentul %s | Grupa %d\n", temp->info->name, temp->info->group_no);
		temp = temp->next;
	}
}

void deleteLista(Nod* start)
{
	Nod* temp;
	while (start != NULL)
	{
		temp = start;
		start = start->next;
		if (temp->info != NULL)
		{
			free(temp->info->name);
			free(temp->info);
		}
		free (temp);
	}
}



void main()
{
	/*PStudentinfo pablo = createstudentinfo("escobar", 1030);
	afisare_date_student(pablo);*/

	Nod* head =NULL;
	/*head = inserareNod(head, pablo);*/
	FILE* citire_studenti = fopen("Data.txt", "r");
	head = creeazaLista(head,citire_studenti);
	afiseazaLista(head);
	fclose(citire_studenti);
	deleteLista(head);
	//deletestudentinfo(pablo);

}