#include <stdio.h>
void mensagem(){
	printf ("\n Intituto Federal da Bahia - IFBA - Campus Barreiras.");
	printf ("\n Estrutura de Dados na Linguagem C.");
	printf ("\n Professor Djalma A. Lima Filho.\n");
}

int main() {

	float soma_informatica, soma_edificacoes;
	float media_informatica, media_edificacoes;
  
	printf("Digite a soma das notas dos 5 alunos do curso t�cnico de Inform�tica: ");
	scanf("%f", &soma_informatica);
  
	printf("Digite a soma das notas dos 5 alunos do curso t�cnico de Edifica��es: ");
	scanf("%f", &soma_edificacoes);
  
	media_informatica = soma_informatica / 5;
	media_edificacoes = soma_edificacoes / 5;
  
	printf("M�dia do curso t�cnico de Inform�tica: %.2f\n", media_informatica);
	printf("M�dia do curso t�cnico de Edifica��es: %.2f\n", media_edificacoes);
  
	if (media_informatica > media_edificacoes) {
    	printf("O curso t�cnico de Inform�tica obteve a maior m�dia das notas.\n");
	} else if (media_edificacoes > media_informatica) {
    	printf("O curso t�cnico de Edifica��es obteve a maior m�dia das notas.\n");
	} else {
    	printf("Os cursos t�cnicos de Inform�tica e Edifica��es obtiveram a mesma m�dia das notas.\n");
	}
  
  return 0;
}
