#include<stdio.h>
int main(){
        float a,b,c,Moyenne,somme;
        printf("Entrer un nombre a:");
        scanf("%f",&a);
         printf("Entrer un nombre b:");
         scanf("%f",&b);
         printf("Entrer un nombre c:");
         scanf("%f",&c);
         somme = (a + b + c);
         Moyenne = somme/3;
         printf("somme=%f\n",somme);
         printf("Moyenne=%f\n",Moyenne);
     return 0;

}
