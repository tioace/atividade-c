#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/059/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Guilherme Matos, Hiarles Queiroz, Lucas Renan, Nicholas Rafael e Vandevan Silva\n\n");
	printf("\tQuestao: 2\n"); 
	printf("\n-------------------------------------------------------------------------\n\n");
}

int maior(){
	int a, b; 
	int *ptra, *ptrb;
	
	ptra =& a; 
	ptrb =& b; 
	
	if(ptra > ptrb){
       printf("O endereco da variavael 1 eh maior: %x\n", (void *)ptra);
    } else if (ptrb > ptra) {
        printf("O endereco da variavel 2 eh maior: %x\n", (void *)ptrb);
    } else {
        printf("Os enderecos sao iguais: %x\n", (void *)ptra);
    }
		
	return 0; 
}

int main(){
	cabecalho(); 
	maior(); 
	return 0; 
}
