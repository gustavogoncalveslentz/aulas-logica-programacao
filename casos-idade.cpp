#include <stdio.h> //Biblioteca
#include <stdbool.h> //Biblioteca verdadeiro ou falso

int main(){ //Classe principal
	int idade = 20; //Declarando uma variável
	bool tem_carteira = true; //Condição verdadeira
	
	if (idade >= 18){ //Maior ou menor de idade
		printf("Maior de idade.\n"); //Apresenta uma informação na tela
		
		if ("tem_carteira.\n"){ //Se a pessoa ter carteira
			printf("Voce pode dirigir.\n"); //Apresenta  uma informação na tela
			
			
		}else{ //Se não
			printf("Voce não tem carteira de motorista.\n"); //Apresenta uma informação na tela
		}
	}else{ //Se não
		printf("Menor de idade.\n"); //Apresenta uma informação na tela
		
	}
	
	return 0; //Fim do programa
}
