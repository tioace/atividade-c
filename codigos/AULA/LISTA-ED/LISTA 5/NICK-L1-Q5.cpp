#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

typedef struct {
	char nome [30];
	char sexo [30];
	int idade;	
} pessoa;

int fem_maior(){
	pessoa p[15];
	
	for(int i = 0; i < 15; i++){
		printf("Digite o nome da pessoa: ");
		scanf("%s", &p[i].nome);
		printf("Digite a idade da pessoa: ");
		scanf("%d", &p[i].idade);
		printf("Digite o sexo da pessoa (feminino ou masculino): ");
		scanf("%s", &p[i].sexo);
		printf("\n");
	}
		printf("\n------------------------------------------------------------------------------");
	
	for(int i = 0; i < 15; i++){
		if(p[i].idade >= 18 && strcmp(p[i].sexo, "feminino") == 0){
			printf("\nNome: %s", p[i].nome);
			printf("\nIdade: %d", p[i].idade);
			printf("\nSexo: %s", p[i].sexo);
		}
	}
	return 0;
}


int main(){
	cabecalho();
	fem_maior();
	return 0; 
}
