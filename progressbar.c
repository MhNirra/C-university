#include <stdio.h>
#include <windows.h>

int main(){

    system("cls");
    system("color 0A");
    char a = ' ' , b = '.';
    printf("\t\t");
    for(int i = 0; i < 3 ; i++)
    printf("%c", a);
    printf("\r");
    printf("\t\t");

    for(int i = 0 ; i < 3 ; i++){
        printf("%c", b);
        sleep(1);
    }
    return 0;
}
