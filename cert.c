#include <stdio.h>

int main()
{
    int number, i, j;
    printf("Numero de lineas:");
    scanf("%i", &number);

    for(i = 1; i <= number; i++){
        for(j = 1; j <= i; j++)
        printf("*");
        printf("\n");
    }
    return 0;
};
