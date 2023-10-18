#include <stdio.h>

int main(){
	int a = scanf("%i", &a);
	int b = scanf("%i", &b);
	
	if (a == b){
		printf("O numero %i eh igual ao %i", a, b);
	}
	else if (a > b){
		printf("O numero %i eh maior ou igual ao %i", a, b);
	}
	else {
		printf("O numero %i eh menor ou igual ao %i", a, b);
	}
}
