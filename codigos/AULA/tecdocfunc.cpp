#include <stdio.h>
#include <stdlib.h>

void tecdoc(){
	int tec, doc, tot;
	printf("Digite a quantidade de docentes do campus: ");
	scanf("%d", &doc);
	printf("Digite a quantidade de tecnicos administrativos do campus: ");
	scanf("%d", &tec);
	tot = doc + tec; 
	printf("\nO campus possui %d docentes.", doc);
	printf("\nO campus possui %d tecnicos administrativos.", tec);
	printf("\nO campus possui %d de pessoas ativas.", tot);
}

int main(){
	tecdoc();
	return 0; 
}
