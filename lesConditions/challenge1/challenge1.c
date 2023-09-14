#include<stdio.h>
   int main()
{
    const int pair = 0, impair = 1;
	int n;
		printf("Entrer un nombre:");
	        scanf("%d",&n);
		if (pair == n % 2 )
			printf("ce nombre est pair.");
		else if (impair == n % 2)
			printf("ce nombre est impair.");
		return 0;
}
