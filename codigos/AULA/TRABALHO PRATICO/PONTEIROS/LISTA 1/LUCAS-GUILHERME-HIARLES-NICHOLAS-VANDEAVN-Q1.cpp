#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/09/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Nicholas Rafael\n\n");
	printf("\tQuestao: 1\n"); 
	printf("\n-----------------------------------------------\n\n");
}

int ler(){
	float vetor[3]; 
	float *ptr = vetor; 
	
	for (int i = 0; i < 3; i++){
		printf("Digite um numero para a posicao %d: ", i);
		scanf("%f", ptr + i);
	}
	
	printf("\n-----------------------------------------------\n");
	
	for (int i = 0; i < 3; i++){
		printf("\nNumero da posicao %d: %.1f", i, *(ptr + i));
		printf("\nEndereco de memoria: %x\n", (void *)(ptr + i));
	}
	
	return 0; 
}

int main(){
	cabecalho();
	ler();
	return 0; 
}

