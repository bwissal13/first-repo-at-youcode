#include<stdio.h>
int main() {
	int j,m,a;
	printf("Entrer la date en format j/m/a:");
	scanf("%d/%d/%d",&j,&m,&a);

	printf(" \n %d-",j);

	switch(m){
	  case 1:
        printf("Janvier");
        break;
      case 2:
        printf("Fevrier");
        break;
     case 3:
        printf("Mars");
        break;
	 case 4:
        printf("Avril");
        break;
	 case 5:
        printf("Mai");
        break;
	 case 6:
        printf("Juin");
        break;
	 case 7:
        printf("Juillet");
        break;
    case 8:
        printf("Aout");
        break;
         case 9:
        printf("Septembre");
        break;
         case 10:
        printf("Octobre");
        break;
         case 11:
        printf("Novembre");
        break;
         case 12:
        printf("Decembre");
        break;
         default:
            printf("mois unconnue");
            break;
	}
	printf("-%d", a);
	return 0;
}
