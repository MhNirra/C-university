#include <stdio.h>
#include <stdlib.h>
#define T 2//DEFINO LA CANTIDAD DE FILAS DE LA MATRIZ
#define S 2//DEFINO LA CANTIDAD DE COLUMNAS DE LA MATRIZ 

void fillArray(int Array[][S], int inRow, int inColumn){ //FUNCION PARA CREAR LA MATRIZ Y PEDIRLE AL USUARIO QUE INGRESE LOS VALORES DE LA MISMA.

	int i, j; //VARIABLES PARA ALMACENAR

	//CICLO FOR PARA CREAR LA MATRIZ
	for(i = 0 ; i < inRow ; i++){
		for(j = 0 ; j < inColumn ; j++){
			printf("Ingrese la altura de la zona[%i][%i]: ", i, j);
			scanf("%d", &Array[i][j]);
		}
	}
}

void timeOut(){ //Creo una funcion para poder limpiar la consola y el programa se vea de mejor forma.
	sleep(1);
	system("cls");
}

void printArray(int Array[][S], int inRow, int inColumn){ //FUNCION PARA IMPRIMIR LA MATRIZ DESPUES DE CREARLA.

	int i, j;
	printf("\nNuestro zona queda de la siguiente manera: \n");

	//CICLO FOR PARA RECORRER LA COLUMNA Y MOSTRARLE AL USUARIO EL NUMERO DE COLUMNAS DE SU MATRIZ.
	for(j = 0 ; j < inColumn ; j++){
		printf("\tCol%i", j);

	}
	printf("\n");
	//Ciclo for para recorrer la matriz y mostrarla.
	for(i = 0 ; i < inRow ; i++){
		for(j = 0 ; j < inColumn ; j++){
			printf("\t[%i]  ", Array[i][j]);
		}
		printf("Fil %i", i);
		printf("\n");
	}

}

void volcano(int Array[][S], int inRow, int inColumn){//Funcion para que el usuario seleccione donde quiere que explote el volcan.

	int row, column, saveValor, i, j;

	printf("\nDonde quiere que explote el volcan: ");
	printf("\nFila: ");
	scanf("%i", &row);
	printf("Columna: ");
	scanf("%i", &column);
	printf("El volcan explotara en el punto: [%i][%i], altura %i", row, column, Array[row][column]);
	printf("\n");

	if(Array[row - 1][column] < Array[row][column]){
		Array[row - 1][column] = 0;
	}
	if(Array[row + 1][column] < Array[row][column]){
		Array[row + 1][column] = 0;
	}
	if(Array[row][column - 1] < Array[row][column]){
		Array[row][column - 1] =  0;
	}
	if(Array[row][column + 1] < Array[row][column]){
		Array[row][column + 1] = 0;
	}

	for(i == 0 ; i < inRow ; i++){
		for(j == 0 ; j < inColumn ; j++){
			printf("\t[%i]", Array[row][column]);
		}
		printf("\n");
	}
}


int main(){

	int saveValor, row, column;
	int Array[T][S];
	int inRow, inColumn; //VARIABLES PARA ALMACENAR EL ALTO Y ANCHO DE LA MATRIZ.

	//le pido al usuario el alto y ancho de su matriz.

	printf("Ingrese de cuanto de largo quiere que sea el terreo: ");
	scanf("%i", &inRow);
	printf("Ingrese de cuanto de alto quiere que sea el terreno: ");
	scanf("%i", &inColumn);

	fillArray(Array, inRow, inColumn);
	//timeOut();
	printArray(Array, inRow, inColumn);
	volcano(Array, inRow, inColumn);

}
