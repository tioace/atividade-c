#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/09/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Hiarles, Lucas, Guilherme, Nicholas e Vandevan\n\n");
	printf("\tQuestao: 3\n"); 
	printf("\n-----------------------------------------------\n\n");
}

typedef struct{
		char titulo [30];
		int ano;
		int npag; 
		float preco;
} Livro;

int livro(){
	Livro livro[5]; 
	float medp, somap, med, soma;
	
	for(int i = 0; i < 5; i++){	
		printf("\nDigite o titulo do livro: ");
		scanf("%s", &livro[i].titulo);
		printf("Digite o ano de publicacao: ");
		scanf("%d", &livro[i].ano);
		printf("Digite o numero de paginas: ");
		scanf("%d", &livro[i].npag);
		printf("Digite o preco do livro: ");
		scanf("%f", &livro[i].preco);
		
		somap+= livro[i].preco;
		soma+= livro[i].npag;
	}
	
	medp = somap / 5; 
	med = soma / 5;
	
	printf("\n------------------------------------------------------------------------------\n\n");
	printf("Valores cadastrados: \n\n");

	for (int i = 0; i < 5; i++){	
		printf("\nTitulo: %s", livro[i].titulo);
		printf("\nAno de publicacao: %d", livro[i].ano);
		printf("\nNumero de paginas: %.d", livro[i].npag);
		printf("\nPreco do livro: %.2f", livro[i].preco);
		printf("\n\n-----------------------------------------------\n");
	}
	printf("Media de precos: R$ %.2f", medp);
	printf("\nMedia de numero de paginas: R$ %.2f", med);
	return 0; 
}

int main(){
	cabecalho();
	livro(); 
	return 0; 
}
