#include <stdio.h>

int main(){
	int a, b, c;
	a = 10;
	b = 3;
	c = a % b;
	c += 10;
	c--;
	printf("Resultado: %d", c);
	return 0; 
}
