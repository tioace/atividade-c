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
	int senha ;
	printf("Digite a senha: ");
	scanf("%d", &senha); 
	
	if (senha == 918273){
		printf("Acesso permitido ao usuario.");
	}
	else{
		printf("Acesso NEGADO ao usuario.");
	}
	return 0;
}
