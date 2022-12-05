#include <stdio.h>
#define T  2//DEFINO LA CANTIDAD DE FILAS DE LA MATRIZ
#define S  2//DEFINO LA CANTIDAD DE COLUMNAS DE LA MATRIZ 

void fillArray(int Array[][S]){ //FUNCION PARA CREAR LA MATRIZ Y PEDIRLE AL USUARIO QUE INGRESE LOS VALORES DE LA MISMA.

	int i, j; //VARIABLES PARA ALMACENAR

	//CICLO FOR PARA CREAR LA MATRIZ
	for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < S ; j++){
			printf("Ingrese la altura de la zona[%i][%i]: ", i, j);
			scanf("%d", &Array[i][j]);
		}
	}
}

void printArray(int Array[][S]){ //FUNCION PARA IMPRIMIR LA MATRIZ DESPUES DE CREARLA.

	int i, j;
	printf("\nNuestro zona queda de la siguiente manera: \n");

	//CICLO FOR PARA IMPRIMIR LA MATRIZ.
	for(j = 0 ; j < S ; j++){
		printf("\tCol%i", j);

	}
	printf("\n");
	for(i = 0 ; i < T ; i++){
		for(j = 0 ; j < S ; j++){
			printf("\t[%i]  ", Array[i][j]);
		}
		printf("Fil %i", i);
		printf("\n");
	}

}

void volcano(int Array[][S]){

	int row, column, saveValor, i, j;

	printf("\nDonde quiere que explote el volcan: ");
	printf("\nFila: ");
	scanf("%i", &row);
	printf("Columna: ");
	scanf("%i", &column);
	printf("El volcan explotara en el punto: [%i][%i], altura %i", row, column, Array[row][column]);
}

int main(){

	int saveValor, row, column;
	int Array[T][S];

	fillArray(Array);
	printArray(Array);
	volcano(Array);

}
