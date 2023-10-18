#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf("\tAluno(a): Nicholas Rafael\n\n");
}

int main(){
	int cont1, cont2, notaif, notaed, somaif=0, somaed=0;
	
	for (cont1 = 0; cont1 < 3; cont1++){
		printf("Digite as nota do curso tec. informatica: ");
		scanf("%d", &notaif);
		somaif += notaif;
	}
	printf("\n");
	for (cont2 = 0; cont2 < 3; cont2++){
		printf("Digite as nota do curso tec. edificacoes: ");
		scanf("%d", &notaed);
		somaed += notaed;
	}
	
	if (somaed > somaif){
		printf("\nO curso de edificacoes obteve maior media -> %d", somaed);
	}
	if (somaed < somaif){
		printf("\nO curso de informatica obteve maior media -> %d", somaif);
	}
	else {
		printf("\nAs medias sao iguais, media info -> %d   media edi -> %d", somaif, somaed);
	}
	return 0;
}
