#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

IMC = PESO/ALTURA

Tabela:
Menor que 21,0 - Abaixo do peso
Entre 21,0 - 30,75 - Peso padr�o
Superior a 30,75 - Obeso

*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float peso, altura, imc;
	char op;
	
	/* estrutura de repeti��o */
	
	do{  
		
		printf("Insira a sua altura com o uso de v�rgula:\n");
		scanf("%f", &altura); // %f: espera o comando do usu�rio e o E comercial (&) vem com a vari�vel.
		fflush(stdin); // Limpeza do teclado debuffer, para n�o travar quando usar v�rgula na altura 
	
		printf("Insira o seu peso:\n");
		scanf("%f", &peso); 
		fflush(stdin);
	
			imc = peso/(altura*altura);
	
				printf("Seu imc �: %.2f.\n", imc);
	
	
	if(imc < 21.0){
		printf("Abaixo do peso.\n");
	}else{
		if(imc > 30.75){
			printf("Obeso.\n");
				}else{
					printf("Peso padr�o.\n");
					}
		 }
		 printf("Deseja executar novamente? Se sim, digite S.\n");
		 scanf("%c", &op); // %c, pois a vari�vel op � do tipo CHAR.
		 fflush(stdin);
		 
	}while(op == 's' || op == 'S'); // Par�metro de op��o.
	
}
