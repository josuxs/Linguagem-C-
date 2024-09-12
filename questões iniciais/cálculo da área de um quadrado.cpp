//1. Cálculo da área de um quadrado:
//Uma pessoa está planejando cobrir o chão de um quadrado com azulejos. 
//Ela precisa calcular a área do chão para saber quantos azulejos serão necessários. 
//Exiba o resultado da área após a seguinte frase no final:  "A área do quadrado é:"
//Considere a fórmula: área = lado * lado.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float area,lado;
	printf("Digite o tamanho do lado: \n");
	scanf("%f", &lado);
	

	
	area = lado * lado;
	printf("A área do quadrado é : %.2f\n", area);
	
	return 0 ; 
}
