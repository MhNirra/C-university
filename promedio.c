#include <stdio.h>

int main(){
     float t = 0, number, suma = 0, pr;
     while(t < 2){
         printf("\nIngrese un numero: ");
         scanf("%f", &number);
         suma = suma + number;
         t ++;
     }
     pr = suma / t;
     printf("\nEl promedio de los numeros ingresados es: %.1f", pr);
    return 0;
};
