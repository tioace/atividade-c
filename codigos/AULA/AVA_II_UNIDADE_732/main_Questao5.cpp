#include <stdio.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 27/06/2023\n");
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Kayan de Brito e Nicholas Rafael\n");
	printf("\tQuestao: 5");
	printf("\n----------------------------------------------------------\n\n");
}

void valorMatriz(int matriz[][2], int linhas, int colunas) {
    printf("Informe os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int c = 0; c < colunas; c++) {
            scanf("%d", &matriz[i][c]);
        }
    }
}

void somaMatriz(int matrizA[][2], int matrizB[][2], int soma[][2], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int c = 0; c < colunas; c++) {
            soma[i][c] = matrizA[i][c] + matrizB[i][c];
        }
    }
}

void imprimeMatriz(int matriz[][2], int linhas, int colunas) {
    printf("Soma das matrizes:\n");
    for (int i = 0; i < linhas; i++) {
        for (int c = 0; c < colunas; c++) {
            printf("%d ", matriz[i][c]);
        }
        printf("\n");
    }
}

int main() {
    cabecalho();
    int matrizA[2][2];
    int matrizB[2][2];
    int matrizSoma[2][2];

    printf("Informe para a matriz A[2][2]:\n");
    valorMatriz(matrizA, 2, 2);

    printf("Informe para a matriz B[2][2]:\n");
    valorMatriz(matrizB, 2, 2);

    somaMatriz(matrizA, matrizB, matrizSoma, 2, 2);

    imprimeMatriz(matrizSoma, 2, 2);

    return 0;
}

