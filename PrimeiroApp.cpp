#include <stdio.h>

int main(){
	char conta;
	int primeiro;
	int segundo;
	int resultado;
	printf("FAZEDOR DE CONTA 2000\n");
	printf("Escolha o tipo de Conta a ser feita:\n");
	printf("- SOMA\n");
	printf("- SUBTRACAO\n");
	printf("- DIVISAO\n");
	printf("- MULTIPLICACAO\n");
	printf("\n");
	scanf("%d", conta);
	
	printf("Qual e o primeiro numero:\n");
	scanf("%d", primeiro);
	
	printf("Qual e o segundo numero:\n");
	scanf("%d", segundo);
	
	printf("Calculando resultado...\n");
	
	if(conta == 'SOMA'){
		resultado = primeiro + segundo;
	} else if(conta == 'SUBTRACAO'){
		resultado = primeiro - segundo;
	} else if(conta == 'DIVISAO'){
		resultado = primeiro / segundo;
	} else if(conta == 'MULTIPLICACAO'){
		resultado = primeiro * segundo;
	} else{
		resultado = 0;
	}
	printf("Resultado: %d", resultado);
	
	return 0;
}
