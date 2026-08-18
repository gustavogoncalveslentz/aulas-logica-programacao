#include <stdio.h>

int main(){
	int opcao;
	
	printf("=== Menu Principal ===\n");
	printf("1. Iniciar Jogo\n");
	printf("2. Carregar jogo\n");
	printf("3. Configuracoes\n");
	printf("4. Sair\n \n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("\n Iniciando um novo jogo... \n");
			break;
			
		case 2:
			printf("\n Carregando save anterior... \n");
			break;
			
		case 3:
			printf("\n Abrindo painel de configuracoes \n");
			break;
			
		case 4:
			printf("\n Saindo do programa. Ate mais!... \n");
			break;
			
		default:
			printf("\n Opcao invalida! Escolha um numero de 1 a 4 \n");
	}
	
	return 0;
}
