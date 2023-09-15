#include<stdio.h>
int main()
{
	int annee,menu;
	printf ("Entrer l'anne:");
	scanf("%d",&annee);
	if ((annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0)
	{
		printf("c'est ue annee bissextile.\n");
		printf("le nombre de mois est : 12\n");
		printf("le nombre de jour est : 4380\n");
		printf("le nombre d'heures est : 105120\n");
		printf("le nombre de minutes est : 6307200\n");
        printf("le nombre de minutes est : 378432000\n");
	}
        else
	{
	      	printf("c'est une annee ordinaire.\n");
	      	printf("le nombre de mois est : 12\n");
		    printf("le nombre de jour est : 4392\n");
            printf("le nombre d'heures est : 105408\n");
		    printf("le nombre de minutes est : 6324480\n");
		    printf("le nombre de secondes est :379468800\n");
	}
   return 0;
	}




