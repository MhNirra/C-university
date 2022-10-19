#include <stdio.h>
#include <stdlib.h>

void algotUno(int a[], int l){
	
	int i;
	int x = 16;
	
	printf("Trabajaremos con la siguiente secuencia: \n");
	printf("========================================\n");
	for(i = 0 ; i < l ; i++){
		a[i] = x;
		printf("%i ", a[i]);
		x = x * 2 + 1;
	}
	printf("\n");
	printf("========================================\n");		
}

void algotDos(int a[], int l){
	
	int p;
	
	printf("\n");
	printf("Los numeros de la secuencia son: ");
	for(p = 0 ; p < l ; p += 2){
		printf("%i ", a[p]);
	}
}

void algotTres(int a[], int l){
	
	int i;
	
	printf("\n");
	printf("Los numeros de la secuencia son: ");
	for(i = 1 ; i < l ; i += 2){

		printf("%i ", a[i]);
	}
}

int algotCuat(int a[], int l){
	int i;
	
	printf("\n");
	printf("El nuevo orden de la secuencia es: ");
	
	for(i = 0 ; i < 4 ; i++){
		printf("%i ", a[i]);
		printf("%i ", a[7 - i]);
	}
}


int main(){
	
	int a[8];
	
	algotUno(a, 8);
	algotDos(a, 8);
	algotTres(a, 8);
	algotCuat(a, 8);
	return 0;
}
