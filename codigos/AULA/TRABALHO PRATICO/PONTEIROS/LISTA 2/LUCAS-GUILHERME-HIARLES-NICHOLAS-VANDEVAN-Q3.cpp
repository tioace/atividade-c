#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
  	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
  	printf("\tDisciplina: Estrutura de Dados - Turma 732.\n");
  	printf("\tProfessor: Djalma A. Lima Filho\n");
  	printf("\tAluno(a): Lucas Renan,Vandevan Silva, Guilherme Matos, Hiarles de Souza e Nicholas Rafael\n\n\n");
  	printf("\tQuestao: 3\n"); 
	printf("\n-------------------------------------------------------------------------------------\n\n");

}

int lerVetor() {
	int *ptr, vetor[3], valor;
	ptr = vetor;
    
	for (int i = 0; i < 3; i++) {
		printf("Digite um numero: "); 
        scanf("%d", ptr+i);
    }
    
    printf("\n-------------------------------------------------------------------------------------\n\n");
    
    for (int i = 0; i < 3; i++){
		printf("\nValores antigos: %d", *(ptr + i));
		printf("\nEndereco de memoria: %x\n", (void *)(ptr + i));
	}
	
	printf("\n-------------------------------------------------------------------------------------\n\n");
        
	//atualizar vetor
	for (int i = 0; i < 3; i++) {
	    printf("Digite um numero: "); 
    	scanf("%d", ptr+i);
    }
    
	for (int i = 0; i < 3; i++){
		printf("\nValores atualizados: %d", *(ptr + i));
		printf("\nEndereco de memoria: %x\n", (void *)(ptr + i));
	}
	return 0; 
}


int main() {
  
	cabecalho();
	lerVetor(); 

    return 0;
}

