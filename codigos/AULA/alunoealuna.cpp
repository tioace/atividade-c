#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n\n");
}

int main(){
	cabecalho();
	
	int aluno, aluna; 
	printf("Digite a quantidade de alunas: ");
	scanf("%d", &aluna);
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &aluno);	
	printf("\n");
	
	if (aluno > aluna){
		printf("Mais alunos do que alunas. \nAluno: %d \nAluna: %d", aluno, aluna);
	}
	else if (aluno < aluna){
		printf("Mais alunas do que alunos. \nAluno: %d \nAluna: %d", aluno, aluna);
	}
	else {
		printf("Mesma quantidade de alunos e alunas. \nAluno: %d \nAluna: %d", aluno, aluna);
	}
	return 0; 
}
