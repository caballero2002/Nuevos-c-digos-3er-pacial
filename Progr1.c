/*Dep3_Progr1*/
#include <stdio.h>

int main ()
{

    int a, b, c;
    printf("\n Escribe el valor de a");
    scanf("%d", &a);
    printf("\n Escribe el valor de b");
    scanf("%d", &b);
    printf("\n Escribe el valor de c");
    scanf("%d", &c);
    
    a = a + 1;
    b = b * 2;
    c = c * c;
    
    printf("\n\n El valor de a es %d", a);
    printf("\n\n El valor de b es %d", b);
    printf("\n\n El valor de c es %d", c);
    
    return 0;
}