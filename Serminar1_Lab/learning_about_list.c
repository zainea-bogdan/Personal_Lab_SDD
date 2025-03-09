#include <stdio.h>
#include "Studentinfo.h"
#include <string.h>
#include <stdlib.h>

typedef struct nod
{
	int numar;
	struct nod* urm_nod;
}nod;

nod* add_new_nod(int numar_dorit)
{
	nod* new;

	new = (nod*)malloc(sizeof(nod));
	if(new != NULL)
	{
		new->numar = numar_dorit;
		new->urm_nod = NULL;
	}

	return new;
}


void main()
{
	nod* start;
	start = (nod*)malloc(sizeof(nod));
	if (start != NULL)
	{
		start->numar = 10;
		start->urm_nod = add_new_nod(20);
		start->urm_nod->urm_nod = add_new_nod(30);

		nod* temp = start;

		while (temp)
		{
			printf("%d -> ", temp->numar);
			temp = temp->urm_nod;
			if (temp == NULL)
			{
				printf("stop");
			}
		}
	}



}