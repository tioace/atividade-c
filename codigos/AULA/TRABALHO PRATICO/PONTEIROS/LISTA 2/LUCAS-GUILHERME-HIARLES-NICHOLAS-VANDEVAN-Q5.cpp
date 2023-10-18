// Questão 5 Desenvolva um programa em C que leia seis números e armazene-os em  um vetor. Esse programa deve conter ponteiros para manusear o vetor e  imprimir os seus valores. O programa deve apresentar também o  endereço de memória desses números.

#include <stdio.h>

void cabecalho() {
  	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  	printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  	printf("\tProfessor: Djalma A. Lima Filho\n");
  	printf("\tAluno(a): Lucas Renan,Vandevan Silva, Guilherme de Matos, Hiarles de Souza e Nicholas Rafael\n\n\n");
	printf("\tQuestao: 5\n"); 
	printf("\n-------------------------------------------------------------------------------------\n\n");

}


void lerNumeros(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", vetor + i);
    }
}

void imprimirNumeros(int *vetor, int tamanho) {
    printf("\nValores dos numeros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: %d\n", i + 1, *(vetor + i));
    }
    
    printf("\nEndereç=cos de memoria dos numeros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Numero %d: %p\n", i + 1, (void *)(vetor + i));
    }
}

int main() {
    int numeros[6];
    cabecalho();
    lerNumeros(numeros, 6);
    imprimirNumeros(numeros, 6);

    return 0;
}


