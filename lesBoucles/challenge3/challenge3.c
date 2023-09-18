#include <stdio.h>

int main()
{
    int nbr;
    int c=0;

    printf("Entrer  un nombre :");
    scanf("%d",&nbr);

    if (nbr <=1)
    {
        printf("Le nombre n'est premier");


    }
    else
    {
        for(int i=2; i<=nbr/2; i++)
        {
            int mod = (nbr%i);
            if(mod == 0)
            {
                c++;
            }

        }

        if(c == 0)
        {
            printf("Le nombre est premier");
        }
        else
        {
            printf("Le nombre n'est premier");
        }
    }



}
