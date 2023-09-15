#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,x1,x2,delta;

    printf("Entrer lec coefitions a, b , c de l'equation ax * x + bx + c : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    delta = (b * b) - 4 * a * c;
    printf("delta = %f",delta);
    if (delta < 0)
    {
	    printf("il n'y a pas de solution .");
    }
      else if ( delta == 0 )
    {
	    x = - b / 2 * a;
	    printf(" Il ya une seule solution x = %f",x);

    }
       else
    {
            x1 = (- b - sqrt (delta) )/ 2 * a;
	        x2 = (- b + sqrt (delta) )/ 2 * a;
            printf(" Il ya deux solutions x1 = %f x2 = %f",x1,x2);

    }
    return 0;



}

