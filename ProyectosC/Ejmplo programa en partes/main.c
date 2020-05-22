#include <stdio.h>
#include "utilidades.h"


int main(){

	int numero1;
	int numero2;
	int resultado;

	char repetir = 'S';

	while(repetir == 'S'){
		printf("Programacion estructurada\n");
		printf("1 -> Sumar dos numeros\n");
		printf("2 -> Restar dos numeros\n");
		printf("3 -> Multiplicar dos numeros\n");
		printf("4 -> Dividir dos numeros\n");

		char opcion;
		opcion = getchar();
		clearInputBuffer();

		if (opcion == '1'){
			printf("Seleccionaste suma\n");
			suma();
		}
		if (opcion == '2'){
			printf("Seleccionaste resta\n");	
			int valor =  resta();		
			printf("El resultado de la resta = %d\n", valor);
		}
		if (opcion == '3'){
			printf("Seleccionaste multiplicacion\n");	
			int valor = multiplicar(pedirnumero(), pedirnumero());		
			printf("El resultado de la multiplicacion = %d\n", valor);
		}
		if (opcion == '4'){
			printf("Seleccionaste Divir\n");	
			
			float numero1;
			float numero2;

			printf("Ingresa el primer numero: ");
			scanf("%f", &numero1);
			clearInputBuffer();
			printf("Ingresa el segundo numero: ");
			scanf("%f", &numero2);
			clearInputBuffer();

			float valor =  dividir(numero1, numero2);		
			printf("El resultado de la division = %f\n", valor);
		}

		printf("Desea continuar S/N:");
		repetir = getchar();
		clearInputBuffer();
	}
	
	//return 0;
}



