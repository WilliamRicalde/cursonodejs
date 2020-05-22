#include <stdio.h>

void clearInputBuffer() {
	char c;
    do 
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(int argc, char *argv[]) {
	
	int numeros[4][3];
	
	/*
		printf("\nInserta el numero de la Posicion %d: ", posicion);
		scanf("%d", &numeros[posicion]);
		clearInputBuffer();
	*/


	int posicionx;
	int posiciony;

	for (posicionx = 0; posicionx <= 3; posicionx++){		
		for(posiciony = 0; posiciony <= 2; posiciony++){
			printf("Inserta el numero de la Posicion (%d, %d): ", posicionx, posiciony);
			scanf("%d", &numeros[posicionx][posiciony]);
			clearInputBuffer();
		}		
	}

	printf("los valores son: \n");

	for (posicionx = 0; posicionx <= 3; posicionx++){		
		for(posiciony = 0; posiciony <= 2; posiciony++){
			printf("%d\t",numeros[posicionx][posiciony]);			
		}
		printf("\n");		
	}

	
	
	return 0;
}

