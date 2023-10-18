#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 27/06/2023\n");
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Kayan de Brito e Nicholas Rafael\n");
	printf("\tQuestao: 4\n\n");
	printf("\n----------------------------------------------------------\n\n");
}

typedef struct{
	char nome [3];
	float n1; 
	float n2;
	int mediaA;
	float media;
} Aluno;

int media(){
	Aluno aluno[7];
	
	for(int i = 0; i < 7; i++){	
		printf("\nDigite o nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		printf("Digite a nota da avaliacao 1: ");
		scanf("%f", &aluno[i].n1);
		printf("Digite a nota da avaliacao 2: ");
		scanf("%f", &aluno[i].n2);
	
		int medA = (aluno[i].n1 + aluno[i].n2) / 2;
		aluno[i].mediaA = medA;

		float med = (aluno[i].n1 + aluno[i].n2) / 2;
		aluno[i].media = med;	
	}
	
	printf("\n------------------------------------------------------------------------------\n");
	
	for(int i = 0; i < 7; i++){
		printf("\nAluno: %s", aluno[i].nome);
		printf("\nPrimeira nota: %.1f", aluno[i].n1);
		printf("\nSegunda nota: %.1f", aluno[i].n2);
		printf("\nMedia: %.1f", aluno[i].media);
		printf("\nMedia arredondada: %.d", aluno[i].mediaA);
		
		if (aluno[i].media >= 7){
			printf("\nSituacao: Aprovado\n");
		}
		else {
			printf("\nSituacao: Reprovado\n");
		}
	}
	
	printf("\n------------------------------------------------------------------------------\n");
	
	return 0;	
}

int main(){
	cabecalho();
	media();
	
	return 0; 
}
