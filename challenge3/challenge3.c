#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Entrer un entier a:");
        scanf("%d",&a);
        printf("Entrer un entier b:");
        scanf("%d",&b);
        c = a + b;
        printf("a + b = %d\n",c);
        c = a - b;
        printf("a - b = %d\n",c);
        c = a * b;
        printf("a * b = %d\n",c);
        c = a % b;
        printf("a %% b = %d\n",c);
        return 0;
}


