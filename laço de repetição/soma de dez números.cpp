//b) Crie um programa que calcule a soma dos primeiros 10 n�meros inteiros positivos e exiba o resultado.
// Utilize o la�o DO...WHILE.

#include<stdio.h>
#include<locale.h>

int main (){
	
	setlocale (LC_ALL,"");
	int cont=1;
	int soma=0;
	do{
		soma+=cont;
		cont++;
	}while (cont<11);
	
	printf("soma: \n%i", soma);
	return 0 ; 
}
