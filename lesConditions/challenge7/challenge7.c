#include<stdio.h>
       int main(){
	       char c;
	       printf("Entrer un caractere:");
	       scanf("%c",&c);
	       if ( c >= 65 && c <= 90)
	       {
		       printf("c'est un alphabet majuscule");
	       }
	       else
	       {
		       printf("c'est un alphabet miniscule");
	       }
	       return 0;
       }
