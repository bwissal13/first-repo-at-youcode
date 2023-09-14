#include<stdio.h>
int main()
{
	int a,b,c,nbr1,nbr2;
	printf("Entrer un nombre:");
	scanf("%d",&nbr1);
    a = nbr1 / 100;
    nbr2 = nbr1 % 100 ;
	b = nbr2 / 10;
	c = nbr2 % 10;
	printf("l'inverce de ce nombre est:%d%d%d",c,b,a);
	return 0;
}


