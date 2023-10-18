#include <stdio.h>
#include <stdlib.h>

void cabecalho(){
	printf("\tINSTITUTO FEDERAL DA BAHIA -CAMPUS BARREIRAS\n");
	printf("\tData: 16/05/2023\n");
	printf("\tProfessor: Djalma Filho\n");
	printf("\tAluno: Victor Vieira Galvao e Nicholas Rafael\n\n");
}

int retorn3_7 (){
  int n;
  printf("Insira um numero: ");
	scanf("%d",&n);

  printf("\n----------------------------------------\n");
  
	if(n % 3 == 0 && n %7 == 0){
		printf("Numero %d eh divisivel por 3 e 7\n", n);
	}else{
		printf("Numero %d eh nao divisivel por 3 e 7", n);
	}
  return n; 
}

int main() {
    cabecalho();
	retorn3_7();
	return 0;
}
