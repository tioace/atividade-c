#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
	printf("\tIntituto Federal da Bahia - IFBA - Campus Barreiras.\n");
	printf ("\tDisciplina: Estrutura de Dados - Turma 732.\n");
	printf("\tProfessor: Djalma A. Lima Filho\n");
	printf ("\tAlunos: Nicholas Rafael\n\n");
}

int covid(){
	int sus, conf, morto, escolha, certeza, tot; 
	
	while (true){
		printf("\nEscolha as opcoes: \n[1]Cadastrar dados sobre suspeita de covid                     [2]Encerrar");
		printf("\nOpcao: ");
		scanf("%d", &escolha);
		
		if(escolha == 1){
			printf("\nEscolha as opcoes sobre os casos: \n\n[1]Suspeitos \n[2]Confirmados \n[3]Mortos");
			printf("\nOpcao: ");
			scanf("%d", &certeza);
			
			if(certeza == 1){
				sus++;
			}
			
			else if(certeza ==2){
				conf++;
			}
			
			else{
				morto++;
			}
			
			tot = sus + conf + morto;
		}
		
		else if(escolha == 2){
			printf("\nSuspeitos: %d \nConfirmardos: %d \nMortos: %d \nTotal: %d",sus, conf, morto, tot);	
			printf("\nPrograma finalizado.");
			break;
		}
	}
	return tot;
}

int main(){
	cabecalho();
	covid();
	return 0; 
}
