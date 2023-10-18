#include <stdio.h>
void mensagem(){
	printf ("\n Intituto Federal da Bahia - IFBA - Campus Barreiras.");
	printf ("\n Estrutura de Dados na Linguagem C.");
	printf ("\n Professor Djalma A. Lima Filho.\n");
}

int main() {

	float soma_informatica, soma_edificacoes;
	float media_informatica, media_edificacoes;
  
	printf("Digite a soma das notas dos 5 alunos do curso técnico de Informática: ");
	scanf("%f", &soma_informatica);
  
	printf("Digite a soma das notas dos 5 alunos do curso técnico de Edificações: ");
	scanf("%f", &soma_edificacoes);
  
	media_informatica = soma_informatica / 5;
	media_edificacoes = soma_edificacoes / 5;
  
	printf("Média do curso técnico de Informática: %.2f\n", media_informatica);
	printf("Média do curso técnico de Edificações: %.2f\n", media_edificacoes);
  
	if (media_informatica > media_edificacoes) {
    	printf("O curso técnico de Informática obteve a maior média das notas.\n");
	} else if (media_edificacoes > media_informatica) {
    	printf("O curso técnico de Edificações obteve a maior média das notas.\n");
	} else {
    	printf("Os cursos técnicos de Informática e Edificações obtiveram a mesma média das notas.\n");
	}
  
  return 0;
}
