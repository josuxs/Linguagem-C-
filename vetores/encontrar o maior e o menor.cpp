//Encontrar o Maior e o Menor Elemento 
//Crie um programa que leia 10 números inteiros e armazene-os em um vetor. Em seguida, o programa deve encontrar e exibir o maior e o menor número do vetor.
//Utilize variáveis para armazenar o maior e o menor valor e compare-os em um laço for.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int vet [10];
	int maior, menor;
	
	printf("Digite 10 números para  descobrirmos qual o maior e o menor \n");
	for(int cont=0;cont<10;cont++){
		printf("número %i: \n",cont+1);
		scanf("%i", &vet[cont]);
	}
	
	for( int cont=0; cont<10; cont++){
		if (maior> vet[cont]){
			maior = vet[cont];
		}
		if (menor<vet[cont]){
			menor = vet[cont];
		}
	}
	
	printf("maior: %i\n", maior);
	printf("maior: %i\n", menor);
	return 0 ;
}
