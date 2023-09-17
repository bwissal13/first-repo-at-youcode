
#include <stdio.h>
int main()
{
   int nb ,l,espace ;
   printf("Veuillez entrer le nombre de lignes:");
   scanf("%d",&nb);
   for(l=1;l<=nb;l++){
        for(espace=nb-l;espace>=1;espace--)
        printf(" ");
     for(espace=1;espace<=l+l-1;espace++)
        printf("*");
     printf("\n");
   }
    return 0;
}





