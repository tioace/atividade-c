#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/09/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAlunos: Guilherme Matos, Hiarles Queiroz, Lucas Renan, Nicholas Rafael e Vandevan Silva\n\n");
	printf("\tQuestao: 1\n"); 
	printf("\n-------------------------------------------------------------------------------------\n\n");
}

/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros
para inteiro, real, e char. Associe as variáveis aos ponteiros (use &). Modifique os valores
de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a
modificação.*/

int mudar(){
	int a; 
	float b; 
	char c;
	
	int *ptra; 
	float *ptrb; 
	char *ptrc;
	
	a = 10; 
	b = 10.0;
	c = 'a';
	
	ptra =& a;
	ptrb =& b;
	ptrc =& c;

	printf("Valores anteriores: \nvalor 1: %d \nvalor 2: %.1f \nvalor 3: %c", a, b, c); 
	
	*ptra = 5; 
	*ptrb = 5.0;
	*ptrc = 'b'; 
	
	printf("\n\nValores novos: \nvalor 1: %d \nvalor 2: %.1f \nvalor 3: %c\n",a, b, c); 
	
	return 0; 
}

int main(){
	cabecalho(); 
	mudar(); 
	return 0; 
}
