//d) Escreva um programa que utilize um la�o for para contar e exibir todos os n�meros pares de 1 a 20.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"");
	
	for(int cont=0; cont<20;cont++){
		printf(" %i %i \n ", cont, cont+1);
	}
	
	return 0;
}
