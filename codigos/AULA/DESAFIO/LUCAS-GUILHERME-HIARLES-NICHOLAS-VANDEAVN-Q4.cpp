#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 18/09/2023\n");     
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Guilherme Matos, Hiarles Queiroz, Lucas Renan, Nicholas Rafael e Vandevan Silva\n\n");
	printf("\tQuestao: 4\n"); 
	printf("\n-------------------------------------------------------------------------\n\n");
}

int maiormenor(){
	int num1, num2, num3;  
    int *ptr1, *ptr2, *ptr3;

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", ptr1);

    printf("Digite o segundo numero: ");
    scanf("%d", ptr2);

    printf("Digite o terceiro numero: ");
    scanf("%d", ptr3);

    int menor, medio, maior;
    if (*ptr1 <= *ptr2 && *ptr1 <= *ptr3) {
        menor = *ptr1;
        if (*ptr2 <= *ptr3) {
            medio = *ptr2;
            maior = *ptr3;
        } else {
            medio = *ptr3;
            maior = *ptr2;
        }
    } else if (*ptr2 <= *ptr1 && *ptr2 <= *ptr3) {
        menor = *ptr2;
        if (*ptr1 <= *ptr3) {
            medio = *ptr1;
            maior = *ptr3;
        } else {
            medio = *ptr3;
            maior = *ptr1;
        }
    } else {
        menor = *ptr3;
        if (*ptr1 <= *ptr2) {
            medio = *ptr1;
            maior = *ptr2;
        } else {
            medio = *ptr2;
            maior = *ptr1;
        }
    }
printf("\n-------------------------------------------------------------------------\n\n");

    printf("\nNumeros em ordem crescente:\n");
    printf("%d\n", menor);
    printf("%d\n", medio);
    printf("%d\n", maior);

printf("\n-------------------------------------------------------------------------\n\n");

    printf("\nEnderecos de memoria dos numeros:\n");
    printf("Endereco do primeiro numero: %x\n", (void *)ptr1);
    printf("Endereco do segundo numero: %x\n", (void *)ptr2);
    printf("Endereco do terceiro numero: %x\n", (void *)ptr3);

    return 0;
}

int main(){
	cabecalho();
	maiormenor(); 
	return 0; 
}
