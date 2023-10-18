#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

float media (float n1, float n2, float n3){
	float med = ((n1 * 1)+ (n2 * 2 )+ (n3 * 2)) / 5;
	printf("\nMedia: %.1f", med);
	return med;
}

int main(){
	cabecalho();
	float n1, n2, n3;
	
	printf("Digite a nota: ");
	scanf("%f", &n1);
	printf("Digite a nota: ");
	scanf("%f", &n2);
	printf("Digite a nota: ");
	scanf("%f", &n3);
	
	media(n1,n2,n3);
	return 0;
}
