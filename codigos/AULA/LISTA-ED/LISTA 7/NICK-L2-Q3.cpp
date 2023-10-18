#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int covid(){
	int sus, conf, morto; 
	
	printf("Digite a quantidade de casos suspeitos: ");
	scanf("%d", &sus);
	printf("Digite a quantidade de casos confirmados: ");
	scanf("%d", &conf);
	printf("Digite a quantidade de mortos: ");
	scanf("%d", &morto);
	printf("\nSuspeitos: %d \nConfirmardos: %d \nMortos: %d",sus, conf, morto);
	return 0;
}

int main(){
	cabecalho();
	covid();
	return 0; 
}
