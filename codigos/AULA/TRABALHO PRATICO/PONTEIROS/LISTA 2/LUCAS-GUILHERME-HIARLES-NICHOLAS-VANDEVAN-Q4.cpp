#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/09/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAlunos: Guilherme Matos, Hiarles Queiroz, Lucas Renan, Nicholas Rafael e Vandevan Silva\n\n");
	printf("\tQuestao: 4\n"); 
	printf("\n-------------------------------------------------------------------------------------\n\n");
}

/*A Google est� desenvolvendo um novo sistema operacional para m�quinas
de venda de bolinhas de borracha de R$1,00, mas precisa realizar testes no Gerenciador
de Mem�ria desse novo sistema. Voc� foi contratado para fazer um programa para
verificar se o gerenciador de mem�ria est� funcionando corretamente. Seu programa
dever� ler 3 n�meros inteiros, 3 n�meros decimais, 3 letras, armazen�-las em vari�veis, e
depois, atrav�s de ponteiros, trocar os seus valores, substituindo todos os n�meros inteiros
pelo n�mero 2014, os decimais por 9.99, e as letras por� Y�. Depois da substitui��o, o
programa dever� exibir o valor das vari�veis j� devidamente atualizados.*/

int mudar(){
	int a[3], *ptra; 
	float b[3], *ptrb; 
	char c[3], *ptrc;
	
	ptra = a;
	ptrb = b;	
	ptrc = c;
	
	
	for (int i = 0; i < 3; i++){
		printf("\nDigite um numero inteiro: ");
		scanf("%d", ptra + i);
		printf("Digite um numero real: ");
		scanf("%f", ptrb + i);
		printf("Digite um caractere: ");
		scanf("%s", ptrc + i);
	}

	printf("\n-------------------------------------------------------------------------------------\n\n");	
	for(int j = 0; j < 3; j++){
		printf("\nValores digitados na %d�: ", j +  1);
		printf("\nInteiro: %d", *(ptra + j));
		printf("\nReal: %.2f", *(ptrb + j));
		printf("\nCaractere %c:", *(ptrc + j));
	}
		
	*ptra = 2014;
	*ptrb = 9.99;
	*ptrc = 'Y';
		
	printf("\n-------------------------------------------------------------------------------------\n\n");	
	for (int k = 0; k < 3; k++){
		printf("\n\nValores modificados %d�: ", k +  1);
		printf("\nInteiro: %d", *ptra);
		printf("\nReal: %.2f", *ptrb);
		printf("\nCaractere %c:", *ptrc);	
	}
	
	return 0; 
}

int main(){
	cabecalho();
	mudar(); 
	return 0; 
}
