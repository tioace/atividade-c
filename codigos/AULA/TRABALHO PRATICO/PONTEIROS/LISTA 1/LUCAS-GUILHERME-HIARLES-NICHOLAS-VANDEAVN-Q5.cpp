#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/09/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Guilherme Matos, Hiarles Queiroz, Lucas Renan, Nicholas Rafael e Vandevan Silva\n\n");
	printf("\tQuestao: 5\n"); 
	printf("\n-------------------------------------------------------------------------\n\n");
}

int vetor(){
	int numeros[6]; 
    int *ptr = numeros;  

    for (int i = 0; i < 6; i++) {
        printf("Digite um numero: ");
        scanf("%d", ptr + i);
    }

	printf("\n-------------------------------------------------------------------------\n");
    printf("\nValores e enderecos de memoria dos numeros:\n\n");
    for (int j = 0; j < 6; j++) {
        printf("Posicao: %d \nValor: %d \nEndereco: %x\n\n", j + 1, *(ptr + j), (void *)(ptr + j));
    }
    
    return 0;
}

int main() {
    cabecalho();
	vetor();
	return 0;
}

