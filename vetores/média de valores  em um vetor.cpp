//Média de valores em um vetor
//Escreva um programa que leia 8 números reais e os armazene em um vetor. 
//O programa deve calcular e imprimir a média desses números.
//Calcule a soma dos elementos e depois divida pelo número de elementos para obter a média

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float vet[8];
	float soma=0, media;
	
	for (int cont=0; cont<8; cont++){
		printf("Digite um número para preencher o vetor: \n");
		scanf("%f", &vet[cont]);
		soma+=vet[cont];
	}
	
	media = soma/8;
	
	printf("A média dos valores é : %.2f\n", media);
	
	
	return 0;
}
