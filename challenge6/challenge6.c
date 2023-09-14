#include<stdio.h>
int main(){
   const float pi = 3.14;
   float r,circonferenceDuCercle;
	 printf("Entrer le rayon de cercle:");
         scanf("%f",&r);
	 circonferenceDuCercle = 2 * pi * r;
	 printf("la circonference de cercle =%f",circonferenceDuCercle);
	 return 0;

}
