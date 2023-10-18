#include <stdlib.h>
#include <stdio.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/09/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Guilherme Matos, Hiarles Queiroz, Lucas Renan, Nicholas Rafael e Vandevan Silva\n\n");
	printf("\tQuestao: 3\n"); 
	printf("\n-------------------------------------------------------------------------\n\n");
}

int leitura(){
	int *ptra, *ptrb;
	int a, b, soma, sub, multi;
	double div;
	
	ptra = &a; 
	ptrb = &b; 
	
	printf("Digite um numero: ");
	scanf("%d", ptra);
	printf("Digite um numero: ");
	scanf("%d", ptrb);	
	
	soma = *ptra + *ptrb;
	sub = *ptra - *ptrb;
	multi = *ptra * *ptrb;
	div = *ptra / *ptrb;
	
	printf("\nNumeros lidos\n");
    printf("Primeiro numero: %d\n", *ptra);
    printf("Segundo numero: %d\n", *ptrb);
    
   	printf("\n-------------------------------------------------------------------------\n\n");

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", multi);
    printf("Divisso: %.1f\n", div);
    
    return 0; 
}

int main(){
	cabecalho(); 
	leitura(); 
	return 0; 
}
