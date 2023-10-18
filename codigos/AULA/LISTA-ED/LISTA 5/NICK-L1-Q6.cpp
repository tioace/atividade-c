#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct {
	char nome[30];
	float n1;
	float n2;
	float med;
} Aluno;

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int media(){	
	Aluno m[25];
	float geral = 0;
	
	for(int i = 0; i < 25; i++){			
		printf("\nDigite o nome: ");
		scanf("%s", &m[i].nome);
		printf("Digite a primeira nota: ");
		scanf("%f", &m[i].n1);
		printf("Digite a segunda nota: ");
		scanf("%f", &m[i].n2);
		
		float med = (m[i].n1 + m[i].n2) /2;
		m[i].med = med;
		
		geral += med;
	}
	
	float fim = geral / 25;
	
	printf("\n------------------------------------------------------------------------------");
	
	for(int i = 0; i < 25; i++){
		printf("\n\nNome: ");
		printf(m[i].nome);
		printf("\nPrimeira nota: %.1f", m[i].n1);
		printf("\nSegunda nota: %.1f", m[i].n2);
		printf("\nMedia: %.1f",m[i].med);	
	}
	
	printf("\n------------------------------------------------------------------------------\n");
	printf("Media geral: %.1f", fim);
	
	return 0;
}

int main(){
	cabecalho();
	media();
	return 0; 
}

