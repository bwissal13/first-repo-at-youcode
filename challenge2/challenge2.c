
#include<stdio.h>
    int main()

{
	float f,c;
	printf("Entrer la temperature en Fahrnenheit:");
    scanf("%f",&f);
	c= (f-32)/1.8;
	printf("la temperature en Celsius est:%f\n",c);

	if (c <= 0)
	{
	 printf("tres froid\n");
	}
    else if(c>0 && c<=35)
    {
    printf("froid\n");
    }
    else if(c>35 && c<=40)
    {
    printf("chaud\n");
    }
    else if(c > 40)
    {
     printf("tres chaud\n");
    }
    return 0;
}
