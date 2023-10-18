#include <stdio.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 27/06/2023\n");
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Kayan de Brito e Nicholas Rafael\n");
	printf("\tQuestao: 1\n\n");
	printf("\n----------------------------------------------------------\n\n");
}

int encontrarValorMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
	cabecalho();
    int valores[11];
    printf("Informe 11 valores inteiros:\n");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &valores[i]);
    }

    int maiorValor = encontrarValorMaior(valores, 11);
    printf("O maior valor eh: %d\n", maiorValor);

    return 0;
}
