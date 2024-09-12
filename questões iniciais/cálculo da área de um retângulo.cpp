//3. Cálculo da área de um retângulo:
//Um arquiteto está desenhando o layout de uma sala e precisa calcular a área do chão 
//para determinar a quantidade de piso necessária.
//Exiba o resultado da área após a frase:  "A área  é:".
// Considere a fórmula: área = largura * comprimento

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"");
	
	float area, largura, comprimento;
	
	printf("Digite o comprimento: \n");
	scanf("%f", &comprimento);
	
	printf("Digite a largura: \n ");
	scanf("%f", &largura);
	
	area = largura * comprimento;
	
	printf("a área do retangulo é : %.2f", area);
	
	return 0 ;
}
