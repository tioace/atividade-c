#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA - CAMPUS BARREIRAS\n");
	printf("\tData: 16/05/2023\n");
	printf("\tProfessor: Djalma Filho.          Turma: 732.\n");
	printf("\tDupla: Nicholas Rafael e Victor Galvao\n\n");				
}

float lucro(){
	float valor, lucro, final; 
	
	printf("Digite o valor da compra: R$");
	scanf("%f", &valor);
	
	if(valor < 20){
		lucro = valor * 0.45;
		final = valor + lucro; 
	}else {
		lucro = valor * 0.30; 
		final = valor + lucro; 
	}
	
	printf("\n---------------------------------------------------\n");
	printf("Valor inicial: R$%.2f\nLucro: R$%.2f\nValor da compra: R$%.2f", valor, lucro, final);
	return 0; 
}

int main(){
	cabecalho();
	lucro();
	return 0; 
}
