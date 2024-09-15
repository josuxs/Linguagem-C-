//M�dia de valores em um vetor
//Escreva um programa que leia 8 n�meros reais e os armazene em um vetor. 
//O programa deve calcular e imprimir a m�dia desses n�meros.
//Calcule a soma dos elementos e depois divida pelo n�mero de elementos para obter a m�dia

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float vet[8];
	float soma=0, media;
	
	for (int cont=0; cont<8; cont++){
		printf("Digite um n�mero para preencher o vetor: \n");
		scanf("%f", &vet[cont]);
		soma+=vet[cont];
	}
	
	media = soma/8;
	
	printf("A m�dia dos valores � : %.2f\n", media);
	
	
	return 0;
}
