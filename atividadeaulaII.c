#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

IMC = PESO/ALTURA

Tabela:
Menor que 21,0 - Abaixo do peso
Entre 21,0 - 30,75 - Peso padrão
Superior a 30,75 - Obeso

*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float peso, altura, imc;
	char op;
	
	/* estrutura de repetição */
	
	do{  
		
		printf("Insira a sua altura com o uso de vírgula:\n");
		scanf("%f", &altura); // %f: espera o comando do usuário e o E comercial (&) vem com a variável.
		fflush(stdin); // Limpeza do teclado debuffer, para não travar quando usar vírgula na altura 
	
		printf("Insira o seu peso:\n");
		scanf("%f", &peso); 
		fflush(stdin);
	
			imc = peso/(altura*altura);
	
				printf("Seu imc é: %.2f.\n", imc);
	
	
	if(imc < 21.0){
		printf("Abaixo do peso.\n");
	}else{
		if(imc > 30.75){
			printf("Obeso.\n");
				}else{
					printf("Peso padrão.\n");
					}
		 }
		 printf("Deseja executar novamente? Se sim, digite S.\n");
		 scanf("%c", &op); // %c, pois a variável op é do tipo CHAR.
		 fflush(stdin);
		 
	}while(op == 's' || op == 'S'); // Parâmetro de opção.
	
}
