#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int docente(){
	int docente, tecadm, qtd;
	
	printf("Digite a quantidade de docentes: ")	;
	scanf("%d", &docente);
	printf("Digite a quantidade de tecnicos administrativos: ")	;
	scanf("%d", &tecadm);
	
	qtd = docente + tecadm; 
	
	printf("\nQuantidade de docentes: %d.", docente);
	printf("\nQuantidade de tecnicos admnistrativos: %d.", tecadm);
	printf("\ntotal: %d.", qtd);
	
	return qtd; 

}

int main(){
	cabecalho();
	docente();
	return 0; 
}
