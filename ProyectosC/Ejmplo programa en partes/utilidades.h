


void clearInputBuffer() {
	char c;
    do 
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}


void  suma(){
	int numero1;
	int numero2;
	int resultado;

	printf("Ingresa el primer numero: ");
	scanf("%d", &numero1);
	clearInputBuffer();
	printf("Ingresa el segundo numero: ");
	scanf("%d", &numero2);
	clearInputBuffer();
	resultado = numero1 + numero2;
	printf("El resultado de la suma = %d\n", resultado);
}


int resta(){
	int numero1;
	int numero2;
	int resultado;

	printf("Ingresa el primer numero: ");
	scanf("%d", &numero1);
	clearInputBuffer();
	printf("Ingresa el segundo numero: ");
	scanf("%d", &numero2);
	clearInputBuffer();
	resultado = numero1 - numero2;
	return resultado;
}

int multiplicar(int primerNumero, int segundoNumero){
	int resultado;
	resultado = primerNumero * segundoNumero;
	return resultado;
}

float dividir(float num1, float num2){
	return num2/num1;
}

int pedirnumero(){
	int numero;
	printf("Ingresa numero: ");
	scanf("%d", &numero);
	clearInputBuffer();
	return numero;
}
