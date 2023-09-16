#include<stdio.h>
int main()
{
	int moyenne;
	printf("Entrer la moyenne de notes d'eleves:");
	scanf("%d",&moyenne);
	if (moyenne < 10)
	{
		printf("mention reclare.");
	}
	else if(moyenne >= 10 && moyenne < 12)
	{
		printf("mention passable.");
	}
	else if(moyenne >= 12 && moyenne < 14)
	{
		printf("mention assez bien");
	}
	else if (moyenne >= 14 && moyenne >16)
	{
		printf("mention bien");
	}
	else
	{
		printf("mention tres bien");
	}
	return 0;
}
