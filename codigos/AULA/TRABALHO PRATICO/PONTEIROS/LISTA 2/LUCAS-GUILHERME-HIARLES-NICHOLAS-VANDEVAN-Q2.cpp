#include <stdio.h>

void cabecalho(){

  	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf("\tDisciplina: Estrutura de Dados - Turma 731.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");	
	printf("\tAlunos: Guilherme Matos, Hiarles Queiroz, Lucas Renan, Nicholas Rafael e Vandevan Silva\n\n");
	printf("\tQuestao: 2\n"); 
	printf("\n-------------------------------------------------------------------------------------\n\n");
  
}

int imprimirEnderecos() {
    int tamanho[15];
    int *ptr; 
    
    ptr = tamanho; 
    
	printf("Digite os numeros do vetor:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", ptr + i );
    }   
   
    for (int i = 0; i < 15; i++) {
        printf("Endereço da posicao %d: %p\n", i, *(ptr + i));
    }
    
    return 0; 
}

int main() {
    cabecalho();
    imprimirEnderecos();
    
    return 0;
}

