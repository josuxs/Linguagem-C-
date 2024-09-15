//Imprimir ordem inversa 
//Crie um programa que leia 6 números inteiros e armazene-os em um vetor. 
//O programa deve imprimir o vetor na ordem inversa.
//Percorra o vetor do final para o início ao imprimir os elementos.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int vet[6];
	
	printf("Digite 6 números para preencher o vetor\n\n");
	for(int cont=0; cont<6;cont++){
		printf("digite um número: \n\n");
		scanf("%i", &vet[cont]);
	}
	
	for (int cont=6;cont>=0;cont--){
		printf("ordem inversa: %i\n", vet[cont]);
	}
	return 0 ;
}
