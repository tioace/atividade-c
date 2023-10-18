#include <stdio.h>

int square (int x){
	printf("o quadrado eh %d", (x*x));
	return (0);
}

int main(){
	int num; 
	printf("entre com um numero:");
	scanf("%d", &num);
	printf("\n\n");
	square(num);
	return(0);
}
