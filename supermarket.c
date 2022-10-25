

/*Suponga que un supermercado almacena los precios de sus productos en un arreglo de largo 50, en
donde los productos perecibles están almacenados en las localizaciones pares, y los no perecibles
en las impares. Hacer un programa que (clase):
a) Llene el arreglo. 
b) Calcule la suma de los precios de los alimentos no perecibles. 
c) Aumente en un 10% el precio de todos los productos que valen menos de $1.000 y que son
perecibles.
d) Muestre por pantalla todos los códigos de los productos cuyo precio es mayor que el precio
promedio de todos los productos del supermercado.
*/
#include <stdio.h>
#define n 5 //asigno a la variable N un valor maximo de 50, lo cual en este caso serian 50 productos.


/* Name: Funcion Lee_precios_productos
Copyright: GNU
Author: laprofe y el curso s2
Date: 11-10-22 12:42
Description: Lee y valida el precio de los productos
*/
void LeePreciosProductos(float v[], int l ){ //Funcion la cual usaremos para leer los precios de los productos que ingrese el usuario.
int i;	//definimos la variable I como entero.
	for (i=0; i<l; i++){ //recorremos el vector donde se almacenaran los precios.

	//CREAMOS UN CICLO DO WHILE PARA QUE EL USUARIO INGRESE LOS PRECIOS N VECES.
	 do{
			printf("\nSr. usuario ingrese precio del producto %d $", i+1); //MENSAJE POR PANTALLA INDICANDO QUE INGRESE EL PRECIO MAS UN INCREM PARA QUE SE VEA QUE NUM DE PRODUCTO ES.
			scanf("%f", &v[i]); //el usario ingresa el precio y se almacena en la variable i, la cual la almacenaremos dentro del vector/
			if (v[i]<=0)printf("\nError en precio! debe ser mayor a 0\n");// si el precio es menor a 0 lo vuelve a pedir ya que necesitamos un valor positivo.
		  }while(v[i]<=0);
	}
	
}
/* Name: Funcion ListarPreciosProductos
Copyright: GNU
Author: laprofe y el curso s2
Date: 11-10-22 12:42
Description: lISTA LOS PRECIOS DE LOS PRODUCTOS.
*/
void ListarPreciosProductos(float v[], int l ){ //funcion la cual usaremos para mostrar los precios por pantalla.
int i; //definimos la variable i como entero.
printf("=============================\n|Codigo\t\tPrecio (CL$)|\n============================="); //mensaje por pantalla donde indico donde se encontrara el codigo y el precio.
	for (i=0; i<l; i++){ //recorremos el vector.
		printf("\n%3d\t\t$%4.1f", i, v[i]); //muestro por pantalla los valores de la listo, esto me refiero al codigo del producto y el valor del mismo.
		}
}
/* Name: Funcion CalculaNoPerecibles
Copyright: GNU
Author: laprofe y el curso s2
Date: 11-10-22 12:42
Description: Calculo los no perecibles.
*/
float CalculaNoPerecibles( float v[], int l  ){ //funcion para calcular los alimentos no perecibles (IMPARES)
float suma=0; //defino la variable suma como flotante y la inicializo en 0.
int i; //defino la variable i como entero.
	
	printf("\n=============================\nCodigo NP\tPrecio(CLP$)"); //mensaje por pantalla donde se indica donde esta el codigo del producto y el precio.
	for (i=0; i<l; i++){ //recorremos el vector.
	   if ( i%2 != 0){ //calculo los impares.
			suma+=v[i]; // sumo los precios de los alimentos no perecibles y los vuelvo a almacenar.
	   		printf("\n%3d\t\t$%4.1f", i, v[i]); //muestro por pantalla el total de los precios de los alimentos no perecibles.
 	
	   }
	
	}
	
return suma;	
	
}

/* Name: Funcion PrecioPerecibles.
Copyright: GNU
Author: Matias Neira
Date: 20-10-22 
Description: Calculo el precio de los perecibles y aumenta el 10% de los productos que valgan menso de $1.000
*/


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



/* Name: Funcion Codigos
Copyright: GNU
Author: Matias Neira
Date: 20-10-2022
Description: Muestro por pantalla los codigos de los productos cuyo precio es mayor al promedio.
*/


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

	/* Name: Funcion PrecioMayor
Copyright: GNU
Author: Matias Neira
Date: 22-10-2022
Description: Calcular el precio mayor de los productos y que diga si es perecible o no
*/

float PrecioMayor(float v[], int l){
int i; 
int num; // defino num como entero
    float mayor; //defino la variable mayor como flotante

    for (i=1; i<=l; i++){

        if (i==1){ 

        mayor=v[i]; 
        num=i; 

        }

        if (v[i]>mayor){ 

            mayor=v[i]; 
            num=i; 

        }

    }
	//con este if muestro cual es el mayor y su precio.
    if (num%2==0){
		printf(" ALIMENTO PERECIBLE.\n");
		printf(" El producto con mayor precio es el %i $%.2f\n", num, v[num]);
	} 
    else{
		printf("ALIMENTO NO PERECIBLE.\n");
		printf("El producto con mayor precio es el %i $%.2f\n", num, v[num]);
	}
}


	/* Name: Funcion PrecioMenor
Copyright: GNU
Author: Matias Neira
Date: 22-10-2022
Description: Calcular el precio menor de los productos y que diga si es perecible o no
*/

float PrecioMenor(float v[], int l){
int i; 
int num; // defino num como entero
    float menor; //defino la variable mayor como flotante

    for (i=1; i<=l; i++){ //RECORRO LA LISTA 

        if (i==1){ 

        menor=v[i]; 
        num=i; 

        }

        if (v[i]<menor){ 

            menor=v[i]; 
            num=i; 

        }

    }
	//CON ESTE IF MUESTRO SI ES PERECIBLE O NO Y CUAL ES EL VALOR
    if (num%2==0){
		printf(" ALIMENTO PERECIBLE.\n");
		printf(" El producto con menor precio es el %i $%.2f\n", num, v[num]);
	} 
    else{
		printf("ALIMENTO NO PERECIBLE.\n");
		printf("El producto con menor precio es el %i $%.2f\n", num, v[num]);
	}

}

int main(){
	float precios[]={0,0,0,0,0};//inicilizacion de los precios
	//Leer los precios
	LeePreciosProductos(precios, n);
	//Listar los precios
	ListarPreciosProductos(precios, n);
	//Lista los prodcutos NP
	printf("\nLa suma de los NP es $%4.1f", CalculaNoPerecibles(precios, 5));
	//Lista los productos perecibles
	PrecioPerecibles(precios, n);
	//Muestra los codigos de los precios mayor al promedio
	Codigos(precios, n);
	printf("\n==============================\n");
	PrecioMayor(precios, n);
	printf("\n==============================\n");
	PrecioMenor(precios, n);

}
