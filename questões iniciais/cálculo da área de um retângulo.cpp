//3. C�lculo da �rea de um ret�ngulo:
//Um arquiteto est� desenhando o layout de uma sala e precisa calcular a �rea do ch�o 
//para determinar a quantidade de piso necess�ria.
//Exiba o resultado da �rea ap�s a frase:  "A �rea  �:".
// Considere a f�rmula: �rea = largura * comprimento

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
	
	printf("a �rea do retangulo � : %.2f", area);
	
	return 0 ;
}
