//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
///*definesc structura pentru Student*/
//typedef struct 
//{
//	char* name;
//	int* grupa;
//	int id;
//}Student,*PStudent;
//
//typedef struct
//{
//	PStudent individ;
//	struct Nod* next;
//}Nod;
//
//
///*creearea-sterge-afiseaza un nou student*/
//PStudent createStudent(char* nume, int* group, int id)
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
//	printf("#%d | %s | %d \n", source->id, source->name, *(source->grupa));
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
///*specific vector - creeare si stergere*/
//
//void creeazaGrupa(PStudent** grupa_n, int nr_studenti,int* n)
//{
//	int temp_id = 0;
//	char buffer[50];
//	for (int i = 0; i < nr_studenti; i++)	
//	{
//		printf("zi ce id are studentul: ");
//		scanf_s("%d", &temp_id);
//		sprintf_s(buffer,sizeof(buffer),"Student %d",i+1);
//		(*grupa_n)[i] = createStudent(buffer, n, temp_id);
//		afisareStudent((*grupa_n)[i]);
//	}
//}
//
//void deleteGrupa(PStudent* grupa_n, int nr_studenti)
//{
//	for (int i = 0; i < nr_studenti; i++)
//	{
//		deleteStudent(grupa_n[i]);
//		grupa_n[i] = NULL;
//	}
//}
//
///*specific lista*/
//Nod* initNod(PStudent individ)
//{
//	Nod* temp = (Nod*)malloc(1 * sizeof(Nod));
//	if (temp != NULL)
//	{
//		temp->individ->name = individ->name;
//		temp->individ->name = (char*)malloc((strlen(individ->name) + 1) * sizeof(char));
//
//		if (temp->individ->name != NULL)
//		{
//			strcpy_s(temp->individ->name, strlen(individ->name) + 1, individ->name);//am alocat memorie pentru grupa
//		}
//
//		temp->individ->grupa = individ->grupa;
//		temp->next = NULL;
//		return temp;
//	}
//	else
//	{
//		printf("a esuat initializarea nodului");
//	}
//}
//
//Nod* inserareNod1(Nod* source, PStudent individ)
//{
//	/*creez un nod temporar*/
//	Nod* temp;
//	temp = initnod(individ);
//	if (source == NULL)//adica nodul dat ca parametru este primul/start/cap
//	{
//		source = temp;//si i am dat nodul initializat
//	}
//	else//daca nodul dat este deja de start , creez un vector auxiliar in care tin minte de unde am plecat
//	{
//		Nod* aux = source;
//		while (aux->next != NULL)//pana cand nu am ajuns la capul listei,si parcurg toate lista pana la utlimul nod
//		{
//			aux = aux->next;
//		}
//		aux->next = temp;//si aloc pentru ultimul next nodul initializat la inceput care trebuie inserat.
//	}
//
//	return source;//returnez capul ca fie l am initializat / fie i am pus la cap de tot un alt nod
//}
//
///*dezalocare */
//
//
//
//
///*magie:)*/
//void main()
//{
//	int n, nr_studenti;
//	printf("introdu numarul grupei pentru care faci vectorul: ");
//	scanf_s("%d", &n);
//	printf("introdu numarul de studenti din vector: ");
//	scanf_s("%d", &nr_studenti);
//	PStudent* grupa_n;
//	grupa_n = (PStudent*)malloc(nr_studenti * sizeof(PStudent));
//	
//	/*PStudent colegu = createStudent("gigel", &n, 1234);
//	afisareStudent(colegu);
//	deleteStudent(colegu);*/
//	
//	if (grupa_n != NULL)
//	{
//		creeazaGrupa(&grupa_n, nr_studenti, &n);
//		deleteGrupa(grupa_n, nr_studenti);
//		free(grupa_n);
//	}
//	
//
//	/*=============Lucru cu liste=======================*/
//	///*Pasii de lucru:*/
//	///*
//	//1) aloc memorie pentru nod cu declarare unui nod start,
//	//2) creez un nou "info util care e folosit in nod" si il fac bucata cu bucata;
//	//3) apoi initializez primul nod, populez memoria, acelui pointer de nod cu valori efectiv.
//	//4) apoi pot sa incep sa inserez noduri:
//
//	//*/
//	///*aloc zona de memorie*/
//	//Nod* start = NULL;
//	///*creez un dummy pentru teste de student care poate fi creat fie asa fie prin citire din fisier*/
//	//PStudent copcil;
//	//copcil = createStudent("gigel", &n, 1234);
//	///*initializez nodul meu de start */
//	//start = initNod(copcil);
//	///*acm am primul nod*/
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	
//
//
//
//}