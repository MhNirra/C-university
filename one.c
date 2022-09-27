#include <stdio.h>

int main(){

    char opc;

    do{
        fflush(stdin);
        printf("Hello \n");
        printf("Type S to say Hello again:  ");
        scanf("%c", &opc);
    }while(opc == 'S' || opc == 's');

    return 0;
};
