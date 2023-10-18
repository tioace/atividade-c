#include <stdio.h>
#include <stdlib.h>

void covid(){
	int suspeito, confirmado, morte, total;
	printf("Digite o numero de suspeitos: ");
	scanf("%d", &suspeito);
	printf("Digite o numero de casos confirmados: ");
	scanf("%d", &confirmado);
	printf("Digite o numero de mortes: ");
	scanf("%d", &morte);
	total = suspeito + confirmado; 
	printf("\nNumero de suspeitos: %d", suspeito);
	printf("\nNumero de casos confirmados: %d", confirmado);
	printf("\nNumero de mortes: %d", morte);
	printf("\nTotal de casos suspeitos e confirmados: %d", total);
}

int main(){
	covid();
	return 0; 
}
