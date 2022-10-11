#include <stdio.h>

int main()
{

    int i, n, valor;

    do {
        printf("Ingrese el numero de largo de la cadena: ");
        scanf("%i", &n);
        if(n < 1){
            printf("Error, vuelva a reingresar!");
    }
    }while(n < 1);

    for(i = 1; i <= n; i = i + 1)
    {
        valor = 3 * i - 2;
        printf("%i ", valor);
    }
    printf("\n");
    return 0;
};
