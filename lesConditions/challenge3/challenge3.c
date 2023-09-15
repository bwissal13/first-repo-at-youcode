#include<stdio.h>
int main(){
    int a,b,c,triple;
    printf("Entrer un entier a:");
    scanf("%d",&a);
    printf("Entre un entier b:");
    scanf("%d",&b);
    c = a + b;
    printf("la somme de a et b:%d\n",c);
       if (a == b)
	{
		triple = 3 * c;
		    printf("le triple de la somme de a et b:%d",triple);
	}
	return 0;

}
