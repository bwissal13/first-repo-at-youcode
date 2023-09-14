#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2,Distance;
     printf("Entrer le coordonne x1:");
     scanf("%f",&x1);
     printf("Entrer le coordonne x2:");
       scanf("%f",&x2);
     printf("Entrer le coordonne y1:");
       scanf("%f",&y1);
     printf("Entrer le coordonne y2:");
       scanf("%f",&y2);
       Distance = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	printf("Distance =%f",Distance);
       return 0;
 }



