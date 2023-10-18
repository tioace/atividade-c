#include <stdio.h> 
 
void atualizarVetor(int *vetor, int tamanho, int valor) { 
    for (int i = 0; i < tamanho; i++) { 
        *(vetor + i) = valor; 
    } 
} 
 
void imprimirVetor(int *vetor, int tamanho) { 
    for (int i = 0; i < tamanho; i++) { 
        printf("%d ", *(vetor + i)); 
    } 
    printf("\n"); 
} 
 
int main() { 
    int vetor[10]; 
    int valor; 
 
    printf("Digite um valor inteiro: "); 
    scanf("%d", &valor); 
 
    atualizarVetor(vetor, 10, valor); 
    imprimirVetor(vetor, 10); 
 
    return 0; 
}
