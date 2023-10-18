#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int idade(char nome[30];int idade){
	char nome [30]= nome;
	int idade = idade; 
	
	for(int i = 1; i <=26; 1++){
		printf("Digite o nome: ");
		scanf("%s", &nome);
		printf("Idade: ");
		scanf("%sd", idade);
		
		if (idade >= 18){
			printf("Aluno %s maior idade", nome);
		}
		else {
			printf("Aluno %s maior idade", nome);
		}
	}
	return idade; 
}

int main(){
	cabecalho();
	idade();
}
