#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numOne, numTwo, count = 0;
	printf("Vamos a calcular la cantidad de numeros pares que desee a partir del numero ingresado... \n");
	printf("Ingrese el numero de pares que desee contar: ");
	scanf("%i",  &numOne);
	numOne ++;
	printf("\n Ahora ingrese desde que numero quiere contarlo: ");
	scanf("%i", &numTwo);
	while(count != numTwo){
		if(numOne % 2 == 0){
			printf("%i\n", numOne);
			count++;
		}
		numOne++;
	}
	return 0;
}
