
/*Suponga que un supermercado almacena los precios de sus productos en un arreglo de largo 50, en
donde los productos perecibles están almacenados en las localizaciones pares, y los no perecibles
en las impares. Hacer un programa que (clase):
a) Llene el arreglo. OK
b) Calcule la suma de los precios de los alimentos no perecibles. OK
c) Aumente en un 10% el precio de todos los productos que valen menos de $1.000 y que son
perecibles.
d) Muestre por pantalla todos los códigos de los productos cuyo precio es mayor que el precio
promedio de todos los productos del supermercado.
*/
#include <stdio.h>
#define n 50

void LeePreciosProductos(float v[], int l ){
int i;	
	for (i=0; i<l; i++){
	 do{
			printf("\nSr. usuario ingrese precio del producto %d $", i+1);
			scanf("%f", &v[i]);
			if (v[i]<=0)printf("\nError en precio! debe ser >0\n");
		  }while(v[i]<=0);
	}
	
}

void ListarPreciosProductos(float v[], int l ){
int i;
printf("=============================\n|Codigo\t\tPrecio (CL$)|\n=============================");
	for (i=0; i<l; i++){
		printf("\n%3d\t\t$%4.1f", i, v[i]);
		}
}

float CalculaNoPerecibles( float v[], int l  ){
float suma=0;
int i;
	
	printf("\n=============================\nCodigo NP\tPrecio(CLP$)");
	for (i=0; i<l; i++){
	   if ( i%2 != 0){
			suma+=v[i];   	
	   		printf("\n%3d\t\t$%4.1f", i, v[i]);
 	
	   }
	
	}
	
return suma;	
	
}


//Aumente en un 10% el precio de todos los productos que valen menos de $1.000 y que son perecibles.

float PrecioPerecibles(float v[], int l){ //creo una funcion a la cual le asigno los parametros Float v[], int l
//con esta función crearemos el algoritmo para aumentar en un 10% todos los productos que valen menos de 1000 y son Perecibles.


	//VARIABLES
	float suma = 0; //variable de tipo flotante la cual la inicializo en 0 
	int i; //variable de tipo entero en donde se almacenan los productos
	float total; //variable de tipo flotante la cual la usare para almacenar y mostrar por pantalla el precio final de los productos.


	//MENSAJES POR PANTALLA
	printf("\n==============================\n Alimentos P aumentados \n"); //muestro por pantalla un mensaje para dar a conocer que veremos
	printf("Codigo P\tPrecio(CLP$)"); //muestro por pantalla un mensaje para indicarle al usuario cual es el codigo y el precio. (NO MUESTRO CON ESTO LOS PRECIOS NI LOS CODIGOS.)


	//CICLO FOR

	//creo un ciclo for para recorrer el vector y buscar los precios menores a $1.000 y que sean perecibles

	for (i = 0 ; i < l ; i ++){ //RECORRO EL VECTOR 
	//CON EL SIG 'IF' LOGRO SACAR LOS ALIMENTOS PERECIBLES, YA QUE LA CONDICION ERA QUE LOS PERECIBLES SON LOS NUMEROS PARES DEL VECTOR
		if(i % 2 == 0){ //SI LOS NUMEROS SON DIVISIBLES POR 2 LOS ALMACENO EN LA VARIABLE TOTAL
			total = v[i]; //almaceno los productos perecibles que se encuentran en la lista (PARES) en la variable TOTAL
			//SI LOS PRECIOS SON MENORES A $1.000 HAHO QUE SE INCREMENTE EN UN 10%
			if(v[i] < 1000){  
				total = v[i] * 1.1; //almaceno los precios incrementados en un 10% en la variables TOTAL
			}
			printf("\n%3i\t\t$%4.1f", i, total); //muestro por pantalla los precios actuales (incrementados en un 10% si son menores a $1.000)
		}
	}
return total;
}



/*CREO UNA FUNCION LLAMADA CODIGOS LA CUAL me muestra por pantalla todos los códigos de los productos cuyo precio es mayor que el precio
promedio de todos los productos del supermercado.*/
float Codigos(float v[], int l){  //le asigno los parametros float v[], int L


	//VARIABLES
	float suma = 0; //variable de tip float la cual la inicializo en 0
	float total; //variable de tipo floa la cual la usaremos para almacenar los precios
	int i; //variable de tipo entero
	printf("\n==============================\nCodigo \t\tPrecio(CLP$)");


	//CICLO FOR
	for(i = 0 ; i < l ; i++){ //CON ESTE FOR RECORRO LA LISTA DE LOS PRECIOS
		suma += v[i]; //sumo todos los precios de la lista
	}

	total = suma / l; // todos los precios de la lista lo divido por el largo de la misma (por la cantidad de productos) y lo guardo en la variable TOTAL
	for(i = 0 ; i < l ; i++){ //RECORRO LA LISTA NUEVAMENTE.
		if(v[i] > total){ // SI ALGUN PRECIO DE LA LISTA ES MAYOR AL PROMEDIO LO MUESTRA POR PANTALLA.
			printf("\n%3i\t\t$%4.1f", i, v[i]); //MUESTRO LOS PRECIOS MAYORES AL PROMEDIO DE TODOS.
		}
	}
	//printf("\n%4.1f", total);
return total;
}

int main(){
	float precios[]={0,0,0,0,0};//inicilizacion de los precios
	//Leer los precios
	LeePreciosProductos(precios, 5);
	//Listar los precios
	ListarPreciosProductos(precios, 5);
	//Lista los prodcutos NP
	printf("\nLa suma de los NP es $%4.1f", CalculaNoPerecibles(precios, 5));
	//Lista los productos perecibles
	PrecioPerecibles(precios, 5);
	//Muestra los codigos de los precios mayor al promedio
	Codigos(precios, 5);
}
