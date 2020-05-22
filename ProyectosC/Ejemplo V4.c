#include <stdio.h>

void clearInputBuffer() {
	char c;
    do 
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(int argc, char *argv[]) {
	
	int numeros[10];

	int indice1 = 0;

	while (indice1 < 10){		
		printf("\nInserta el numero de la Posicion %d: ", indice1);
		scanf("%d", &numeros[indice1]);
		clearInputBuffer();
		indice1++; //  indice1 = indice1 + 1;
	}

	printf("los valores son: ");

	indice1 = 0;

	while (indice1 < 10){
		printf("Posicion %d  = %d \n ", indice1, numeros[indice1]);		
		indice1++; //  indice1 = indice1 + 1;
	}
	
	return 0;
}
