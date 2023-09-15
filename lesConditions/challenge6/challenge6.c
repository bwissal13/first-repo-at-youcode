#include<stdio.h>
int main(){
	int nbr;
           printf("Entrer un nombre:");
	   scanf("%d",&nbr);
	   if (nbr>0)
	   { 
		   printf("le nombre est positif");
	}
           else if (nbr<0){
		   printf("le nombre est negatif");
	   }
           else {
		   printf("le nombre est null");
	}
     return 0;


}
