#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n\n\n");
}

float media (){
	int tamanho,j, i;
	int lugar [100];
	float n [3];
	float media = 0; 
	
	printf("Tamanho da turma: ");
	scanf("%d", &tamanho);
	
	if (tamanho > 0 && tamanho <= 100){
		for (i = 0; i < tamanho; i++){
			lugar [i];
			for(j = 0; j < 3; j++){
				printf("\nNota: ");
				scanf("%f", &n[j]);
				media = (n[0] + n[1] + n[2]) / 3;
			}
		}
		
		for (int k = 0; k < tamanho; k++){
		printf("\nAluno %d      MEDIA: %1.f", k, n[k]);
	}	
	}
	
	else {
		printf("\nERROR! Valor inválido\n");
	}
	

	return 0;
}

int main (){
	cabecalho();
	media();
	return 0; 
}
