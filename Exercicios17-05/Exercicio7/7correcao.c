/*
6.	Faça um programa que peça um número para calcular o fatorial. Deve tem uma 
função para calcular o fatorial (por referência).
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial(int *n);

int main(void){
	int numero;
	
	printf("Digite numero: ");
	scanf("%i",&numero);
	
	printf("O fatorial e %i",fatorial(&numero));
	
	return 0;
}

int fatorial(int *n){
	int i, s=1;
	for(i=*n;i>=1;i--){
		s*=i;
	}
	return s;
}
