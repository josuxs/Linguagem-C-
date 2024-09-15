//g) Crie um programa que calcule e exiba a soma dos números ímpares de 1 a 15.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	int soma = 0;
	
	for (int cont=1; cont<16; cont++){
		if (cont % 2!=0){
			soma+=cont;
		}
	}
	
	printf("soma dos números ímpares: %i\n", soma);
	return 0 ;
}
