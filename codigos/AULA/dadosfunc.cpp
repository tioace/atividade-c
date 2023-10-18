#include <stdio.h>
#include <stdlib.h>

int dados(int suspeito, int confirmado, int morte){
	int dados;
	dados = suspeito + confirmado + morte; 
	return dados; 
}

int main(){
	int sus, conf, mrt, tot;
	printf("Digite o numero de suspeitos: ");
	scanf("%d", &sus);
	printf("Digite o numero de casos confirmados: ");
	scanf("%d", &conf);
	printf("Digite o numero de mortes: ");
	scanf("%d", &mrt);
	tot = dados(sus, conf, mrt); 
	printf("\nNumero de suspeitos: %d", sus);
	printf("\nNumero de casos confirmados: %d", conf);
	printf("\nNumero de mortes: %d", mrt);
	printf("\nTotal de dados cadastrados: %d", tot);

	return 0; 
}
