/*
3.	Construa um programa que define uma estrutura de peça, que poderá ser 
usado para outros programas, deverá conter atributos como: código, nome, cor, 
peso, preço. Também uma função entrada de dados e uma função de saídas de dados.
*/
#include <stdio.h>
#include <stdlib.h>
#include "3.h"

#define TAM 3

int main(void){
	Peca bd[TAM];
	int i;
	
	for(i=0;i<TAM;i++){
		inserir(&bd[i]);
	}
	
	imprimir(bd,TAM);
	
	return 0;
}