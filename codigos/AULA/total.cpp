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
	
	int informatica, edificacoes, total;
	printf("Digite a quantidade de alunos de Informatica: ") ;
	scanf("%d", &informatica);
	printf("Digite a quantidade de alunos de Edificacoes: ") ;
	scanf("%d", &edificacoes);	
	total = informatica + edificacoes; 
	
	if(informatica > edificacoes){
		printf("Tem mais alunos de informatica que edificacoes.");
		printf("\nInformatica: %d", informatica);
		printf("\nEdificacoes: %d", edificacoes);
		printf("\nTotal: %d", total);
	}
	else if(informatica < edificacoes){
		printf("Tem mais alunos de edificacoes que informatica.");
		printf("\nInformatica: %d", informatica);
		printf("\nEdificacoes: %d", edificacoes);
		printf("\nTotal: %d", total);
	}
	else {
		printf("\nTem a mesma quantidade alunos em ambos os cursos.");
		printf("\nInformatica: %d", informatica);
		printf("\nEdificacoes: %d", edificacoes);
		printf("\nTotal: %d", total);
	}
	return 0; 
}
