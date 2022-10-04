#include <stdio.h>

int main(){

    char obj;
    int cont = 0;
    int bandera = 0;

    printf("pepe: ");
    do{
        scanf("%c", &obj);
        if(obj == 'i') bandera = 1;
        cont ++;
    }while(cont<=20 && bandera == 0 && obj!= '\n');

    if(cont>20)printf("Error, palabra demasiado extensa");
    else{
        if(bandera == 1)printf("N");
        else printf("S");
    }
    return 0;
};
