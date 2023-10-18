#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int estudante(){
	int aluno, aluna, qtd;
	
	printf("Digite a quantidade de alunos: ")	;
	scanf("%d", &aluno);
	printf("Digite a quantidade de alunas: ")	;
	scanf("%d", &aluna);
	
	qtd = aluno + aluna; 
	
	printf("\nQuantidade de alunos: %d.", qtd);
	
	return qtd; 

}

int main(){
	cabecalho();
	estudante();
	return 0; 
}
