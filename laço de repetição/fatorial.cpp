//e) Crie um programa que calcule o fatorial de 5 utilizando um la�o for.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int fatorial = 1;
	for(int cont=5;cont>0;cont--){
	 fatorial*=cont;
	}
	printf("Fatorial de 5 �: \n%i", fatorial);
	
	return 0 ; 
}
