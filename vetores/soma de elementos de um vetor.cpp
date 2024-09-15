//Soma de elementos de um vetor
//Escreva um programa em C que leia 5 números inteiros e armazene-os em um vetor.
// O programa deve calcular e imprimir a soma de todos os elementos do vetor.
//Utilize um laço for para iterar sobre o vetor e somar os elementos.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int vet[5];
	int soma = 0;
	
	for(int cont=0; cont<5; cont++){
		printf("Digite um número %i: \n", cont+1);
		scanf("%i", &vet[cont]);
		soma += vet[cont];
	}
	
	printf("resultado da soma: %i\n", soma);
	return 0;
}
