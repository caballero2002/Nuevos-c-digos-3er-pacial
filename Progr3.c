/*Dep3_Progr3
verificar si es para o impar*/
#include <stdio.h>

int main () //revisa
{

    int numero;
    printf("\n Introduce el numero");
    scanf("%d", &numero);

    if( numero%2 == 0)
    {
        printf("\n El número es PAR");
    }
    else
    {
        printf("\n El número es IMPAR");
    }

    return 0;
}
