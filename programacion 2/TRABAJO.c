#include <stdio.h>
int main()
{
    int mes;
    printf("Ingrese el numero de mes: ");
    scanf("%d", &mes);
    switch(mes)
    {
        case 1: printf("El mes %d es enero", mes);
        break;
        case 2: printf("El mes %d es febrero", mes);
        break;
        case 3: printf("El mes %d es marzo", mes);
        break;
        case 4: printf("El mes %d es abril", mes);
        break;
        case 5: printf("El mes %d es mayo", mes);
        break;
        case 6: printf("El mes %d es junio", mes);
        break;
        case 7: printf("El mes %d es julio", mes);
        break;
        case 8: printf("El mes %d es agosto", mes);
        break;
        case 9: printf("El mes %d es septiembre", mes);
        break;
        case 10: printf("El mes %d es octubre", mes);
        break;
        case 11: printf("El mes %d es noviembre", mes);
        break;
        case 12: printf("El mes %d es diciembre", mes);
        break;
        default: printf("El numero ingresado no corresponde a un mes", mes); 
    }
return 0;
}


