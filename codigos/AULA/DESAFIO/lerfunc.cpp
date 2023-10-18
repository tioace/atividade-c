#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 27/06/2023\n");
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Nicholas Rafael e Rodrigo Reis\n");
	printf("\tQuestao: 1\n\n");
	printf("\n----------------------------------------------------------\n\n");
}

int ler(){
	int n[10], i, j;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &n[i]);
	}
	
	for(j = 0; j < 10; j++){
		printf("Numero: %d\n", n[j]);
	}
	
	return 0; 
}

int main(){
	cabecalho(); 
	ler(); 
	return 0; 
}
