#include<stdio.h>
#include<stdlib.h>
//#include <conio.h> //LIBRERIA PARA CENTRAR TEXTO
#include <windows.h> //LIBRERIA QUE USARE PARA CREAR LA BARRA DE CARGA
#include <time.h>
#define n 5

/*Requerimientos:

Función que lista todos los socios y sus direcciones ok
Función que lista todos los socios  y los  filtre por edad (ejemplo >18)
Función que determine la lista de socios morosos (condición de morosidad: cuota1=cuota2=0)

*/
void ProgressBar(){//creo una funcion que la usare como barra de carga

    char a = ' ' , b = '.';
    for(int i = 0; i < 3 ; i++)//creo un ciclo for
    printf("%c", a);//muestro por pantalla el caracter asignado a la variable a
    printf("\r");
    printf("\nSaliendo del programa");
    for(int i = 0 ; i < 3 ; i++){//creo un ciclo for para reemplazar el caracter de la variable a por el caracter de la variable b
        printf("%c", b);
        sleep(1); //hago que se demore 1 segundo en mostrar
    }
}

//funciones para visualizar datos


void Listar_Socios_Direccion(char nombres [n][50],  char direcciones [n][50]){
int i;

	printf("\n|------------      L I S T A D O   D E   S O C I O S      -------------|\n\n");
	printf("\n  Id\t\t  Nombre\t\t\tDireccion\t\n|----------------------------------------------------------------------|\n");
	
	for(i=0; i<n;i++){
		printf("%3d\t%20s\t%20s\n", i+1, nombres[i], direcciones[i], "\n--------------------------------------------------------");
		
	}	
	printf("|----------------------------------------------------------------------|\n");
	system ("pause");
}

void Listar_Socios_por_Edad(char nombres [n][50], int edades[n], int filtro_edad)
{
	int i;
	printf("\n----------\tL I S T A D O   D E   S O C I O S  x  E D A D\t--------- \n\n");
	printf("\n   Id\t\tNombre\t\t\tEdad\n|--------------------------------------------------------|\n");
	
	for(i=0; i<n;i++){
		//GENERO UN FILTRO PARA LA EDAD INGRESADA.
		if (edades[i] >= filtro_edad)
		printf("%3d\t\t%20s\t\t%3d\n", i+1, nombres[i], edades[i], "\n--------------------------------------------------------");
	}
	printf("|----------------------------------------------------------------------|\n");
	system ("pause");	
}

//funcion para mostrar los socios que si han pagado sus cuotas.
void Morosidad(char nombres [n][50], int SemestreUno[n], int SemestreDos[n]){//a la funcion le asigno los parametros de nombres, semestreuno y semestredos
int i;
    printf("\n|------------      L I S T A D O   D E   C U O T A S      -------------|\n");
    printf("|-------------          P O R  S E M E S T R E            -------------|\n\n");
	printf("\n Id\t\t\t   Nombre\t      Primero         Segundo\t\n|----------------------------------------------------------------------|\n");

	for(i = 0 ; i < n ; i++){
		printf("%3d\t\t%20s\t\t%i\t\t%i\n", i + 1, nombres[i], SemestreUno[i], SemestreDos[i], "\n--------------------------------------------------------");//muestro por pantalla si han pagado su cuota
	}
	printf("|----------------------------------------------------------------------|\n");
	printf("Si la cuota fue pagada, se le indica con un 1, de lo contrario con un 0.\n");
	system("pause");

	//mostrar elementos de un arreglo segun indice.
}

int main()
		{

	//arreglo de nombres
	char nombres [n][50]={
						"Tabata Seguel",
						"Lucas Candia",
						"Alex Fuentes",
						"Aurora Peralta",
						"Maximo Delgado"
						};
			
	//arreglo direcciones
	char direcciones [n][50]={
							"Francisco de riveros 3014 | Santiago",
							"Cochrane 257 | Concepcion",
							"San Martin 123 | Concepcion",
							"Paicavi 450 | Santiago",
							"San Patricio 4260 | Santiago"};
		
	//ARREGLO DE EDADES
	int edades[n]={19, 50, 23, 30, 21};
	char op;
	int f;//filtro de edades
	//ARREGLO DE CUOTAS PAGADAS 0: deuda 1: pagada
	int SemestreUno[n]={1,1,0,1,1}; //ESTAS SON LAS CUOTAS DEL PRIMER SEMESTRE
	int SemestreDos[n] = {1,0,0,1,1}; //ESTAS SON LAS CUOTAS DEL SEGUNDO SEMESTRE.
//MATRIZ CON N FILAS Y 2 COLUMNAS
//ARREGLO PARALELO CON SEMESTRE 1 Y SEMESTRE 2
	do{
		system("color 0A"); //UTILIZO ESTE SYSTEM PARA CAMBIAR EL COLOR DE LAS LETRAS
		system("cls");	
		printf("\n|--------------------------------M E N U--------------------------------|");
		printf("\n|              Presione la letra [A] Para listar los socios.            |");
		printf("\n|        Presione la letra [B] Para listar los socios por morosidad.    |");
		printf("\n|          Presione la letra [C] Para listar los socios por edad.       |");
		printf("\n|                  Presione [X] Para salir del programa.                |");
		printf("\n|--------------------------------M E N U--------------------------------|\n");
		printf("\nSeleccione opcion>> ");
		op=getchar();
		switch(op){
		     	case 'A':
				case 'a'://Llamando a la función requerimiento 1
		 		Listar_Socios_Direccion(nombres, direcciones); break;
		 		case 'B': 
		 		case 'b':  ;//Llamando a la función requerimiento 2
				Morosidad(nombres, SemestreUno, SemestreDos); break;
				case 'C'://Llamando a la función requerimiento 3
		 		case 'c':
				printf("\nIngrese edad de tope>>"); scanf("%d", &f);
		 		Listar_Socios_por_Edad(nombres, edades,f); break;
		}
	
	}while(op!='X' && op!='x');
		ProgressBar();
		sleep(1);
		printf("\nEl programa se ha cerrado con exito!");
	return 0;	
	}
