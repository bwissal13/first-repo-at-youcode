#include<stdio.h>
int main()
{
	int jour;
	srand(time(NULL));
	jour = rand() % 6;
	switch(jour) {
		case 0:
			printf("Dimanche");
			break;
		case 1:
			printf("Lundi");
			break;

		case 2:
			printf("Mardi");
			break;
		case 3:
			printf("Mercredi");
			break;
		case 4:
			printf("Jeudi");
			break;
		case 5:
			printf("Vendredi");
			break;

		case 6:
			printf("Samedi");
			break;

	}
	return 0;
}

