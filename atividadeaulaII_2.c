#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	Beatriz tem 11 anos e mede 1,40m. Cresce em média 2,1cm ao ano.
	Sua irmã Catarina, aos 14 anos, tem 1,45m e 
cresce em média 1,1cm ao ano.
	Elaborar um programa que conte quantos anos serão necessários 
para que a altura de Beatriz ultrapasse a de Catarina.
*/


int main(){
	float altBea = 140;
	float altCat = 145;
	int anos = 0;
	
	while(altBea <= altCat){
		altBea = altBea + 2.1;  //altBea += 2.1
		altCat = altCat + 1.1;  //altCat += 1.1
		anos = anos + 1; //anos++; ou anos += 1;
	}
	
	printf("Passaram-se %d anos para que Beatriz fosse maior que Catarina.\n", anos);
}
