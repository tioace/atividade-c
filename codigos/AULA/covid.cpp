#include <stdio.h>

int main(){
	int suspeito, confirmado, morte, total;
	printf("Este programa busca auxiliar o IFBA a combater o COVID-19.");
	printf("\n \n");
	
	printf("Insira o numero de casos suspeitos: ");
	scanf("%d", &suspeito);
	printf("Insira o numero de casos confirmados: ");
	scanf("%d", &confirmado);
	printf("Insira o numero de mortos (caso tenha): ");
	scanf("%d", &morte);
	printf("\n");
	
	printf("Total de casos suspeitos e confirmados da COVID-19 no IFBA: %d", suspeito+confirmado);
	return 0; 
}
