#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n\n\n");
}

float notaprova(){
	char nome [5][30];
	float notaprova[5][4]; 
	float n[4];
	int i, j;
	
	printf("\n----------------------------------------------------------\n");
	
	for (i = 0;i < 2; i++){
		printf("\nNome: ");
		scanf("%s", &nome[i]);
		
		for (j = 0; j < 4; j++){
			printf("Nota: ");
			scanf("%f", &n);
		}
	}
	
	printf("\n----------------------------------------------------------\n");
	
	for(int i = 0; i < 2; i++){
		printf("\n\nAluno: %s", nome[i]);
		for (int j = 0; j < 4; j++){
			printf("\nNota: %.1f", notaprova[i][j]);
		}
	}
	return 0; 
}

int main(){
	cabecalho();
	notaprova();
	return 0; 
}
