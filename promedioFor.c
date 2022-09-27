#include <stdio.h>

int main(int argc, char *argv[]) {	
	float i, n, suma = 0, promedio;
	for (i = 0; i < 2; i++){
		printf("\nIngresa un numero: \n");
		scanf("%f", &n);
		suma = suma + n;
	}
	promedio = suma / i;
	printf("\nEl promedio de los 2 numeros es: %.1f",promedio);
	return 0;
}
