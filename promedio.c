#include <stdio.h>

int main(int argc, char *argv[]) {	

	float i = 0, n, suma = 0, promedio;
	while(i < 2){
		printf("\nIngresa un numero: \n");
		scanf("%f", &n);
		suma = suma + n;
		i++;
	}
	promedio = suma / i;
	printf("\nEl promedio de los 2 numeros es: %.1f",promedio);
	return 0;
}
