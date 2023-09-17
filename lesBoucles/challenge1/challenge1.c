#include<stdio.h>
int main()
{
        int nbr,i,m;
	printf("Entrer un nembre:");
	scanf("%d",&nbr);
        for (i=1;i<=10;i++){
		m = nbr * i;
		printf("la multiplication de %d * %d = %d\n",nbr,i,m);
	}
	return 0;
}

