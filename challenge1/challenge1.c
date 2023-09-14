#include<stdio.h>
	int main()
	{
        char nom[10],prenom[10],sex[10];
        int age,numeroTelephone;
           printf("Eentrer votre Nom s'il vous plait:");
           scanf("%s",nom);
           printf("Votre Nom est:%s\n",nom);
           printf("Entrer votre Prenon s'il vous plait:");
           scanf("%s",prenom);
           printf("Votre Prenom est;%s\n",prenom);
           printf("Qu'est ce que c'est votre sex:");
           scanf("%s",sex);
           printf("Votre sex est;%s\n",sex);
           printf("Qu'elle age a tu:");
           scanf("%d",&age);
           printf("votre age est:%d\n",&age);
           printf("Qu'elle est votre numero de telephone:");
           scanf("%d",&numeroTelephone);
           printf("votre numero de telephone est:%d\n",&numeroTelephone);
        return 0;
	};
