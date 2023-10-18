#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA - CAMPUS BARREIRAS\n");
	printf("\tData: 16/05/2023\n");
	printf("\tProfessor: Djalma Filho.          Turma: 732.\n");
	printf("\tDupla: Nicholas Rafael e Victor Galvao\n\n");				
}

float calculo_corrida(){
	float distancia, preco;  
	int bandeira;
	
	printf("Digite a bandeira(1 ou 2): ");
	scanf("%d", &bandeira);
	
	if(bandeira == 1){
		printf("Digite os km pecorridos: ");
		scanf("%f", &distancia);
		preco = distancia * 1.80;
	}
	
	else if(bandeira == 2){
		printf("Digite os km pecorridos: ");
		scanf("%f", &distancia);
		preco = distancia * 2.30;
	}
	
	printf("\n------------------------------------------------------------\n");
	printf("Bandeira: %d\nKm: %.1f\nPreco: R$%.2f", bandeira, distancia, preco);
	return 0; 
}

int main(){
	cabecalho();
	calculo_corrida();
	return 0;
}
