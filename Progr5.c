/*Dep3_Progr5
verificar a qué elemento corresponde un sino del zodiaco*/
#include <stdio.h>

int main ()
{

    int signo;
    printf("\n Signos del zodiaco \n\n");
    printf(" 1. Aries");
    printf("\n 2. Tauro");
    printf("\n 3. Geminis");
    printf("\n 4. Cancer");
    printf("\n 5. Leo");
    printf("\n 6. Virgo");
    printf("\n 7. Libra");
    printf("\n 8. Escorpio");
    printf("\n 9. Sagitario");
    printf("\n 10. Capricornio");
    printf("\n 11. Acuario");
    printf("\n 12. Piscis");

    printf("\n\n     Escribe el número de tu signo");
    scanf("%d", &signo);

    switch (signo)
    {
    case 1:
    case 5:
    case 9:
        printf("\n Tu elemento es el fuego");
        break;

    case 2:
    case 6:
    case 10:
        printf("\n Tu elemento es el tierra");
        break;

    case 3:
    case 7:
    case 11:
        printf("\n Tu elemento es el aire");
        break;

    case 4:
    case 8:
    case 12:
        printf("\n Tu elemento es el agua");
        break;

    default:
        printf("\n El número no corresponde a un signo zodiacal");
        break;
    }

    return 0;
}