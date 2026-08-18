#include <stdio.h> //Biblioteca

int main(){ //Classe principal
	
	int dia_semana = 5; //Declarando uma variável
	switch (dia_semana){ //Seleção da semana
		
		case 1: //Caso um
			printf("Domingo.\n");
			break; //Parar na condição
			
		case 2: //Caso dois
			printf("Segunda.\n");
			break; //Parar na condição
			
		case 3: //Caso três
			printf("Terça.\n");
			break; //Parar na condição
			
		case 4: //Caso quatro
			printf("Quarta.\n");
			break; //Parar na condição
			
		case 5: //Caso cinco
			printf("Quinta.\n");
			break; //Parar na condição
			
		case 6: //Caso cinco
			printf("Sexta.\n");
			break; //Parar na condição
			
		case 7: //Caso cinco
			printf("Sabado.\n");
			break; //Parar na condição
			
			
			default: //Não encontra o caso
				printf("Dia invalido");
				break; //Parar na condição
	}
	
	return 0; //Fim do programa
}
