#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int quantidade(){
	int rot, swtc, cont, qtd; 
	
	printf("Digite a quantidade de roteadores: ");
	scanf("%d", &rot);
	printf("Digite a quantidade de switches: ");
	scanf("%d", &swtc);
	printf("Digite a quantidade de controladores: ");
	scanf("%d", &cont);
	
	qtd = rot + swtc + cont; 
	
	printf("\nQuantidade de aparelhos: %d", qtd);
	printf("\nRoteadores: %d", rot);
	printf("\nSwitches: %d", swtc);
	printf("\nControladores: %d", cont);
	
	return qtd;
}

int main(){
	cabecalho();
	quantidade();
	return 0; 
}
