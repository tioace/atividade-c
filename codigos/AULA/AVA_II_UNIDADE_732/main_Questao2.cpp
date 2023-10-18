#include <stdio.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 27/06/2023\n");
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Kayan de Brito e Nicholas Rafael\n");
	printf("\tQuestao: 2\n\n");
	printf("\n----------------------------------------------------------\n\n");
}

int main() {
	cabecalho();
	
    int vetor[17];
    int i;
    int maior, menor;
    int soma = 0;
    float media;
    int pares = 0;

    printf("Informe os 17 elementos do vetor:\n");
    for (i = 0; i < 17; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < 17; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    for (i = 0; i < 17; i++) {
        soma += vetor[i];
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    media = (float)soma / 17;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Percentual dos numeros pares: %.2f%%\n", (float)pares / 17 * 100);
    printf("Media dos elementos: %.2f\n", media);

    return 0;
}


