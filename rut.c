#include <stdio.h>

int main(){
    int rut;
    int mdl;
    printf("Digite su rut para poder ser asignado a un modulo: ");
    scanf("%d",&rut);
    mdl = rut % 10;
    if(mdl > 0){
        printf("Dirigase al modulo %d",mdl);
    }else{
        printf("Dirigase al modulo 10.");
    }
    return 0;
}
