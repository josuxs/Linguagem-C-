//1. C�lculo da �rea de um quadrado:
//Uma pessoa est� planejando cobrir o ch�o de um quadrado com azulejos. 
//Ela precisa calcular a �rea do ch�o para saber quantos azulejos ser�o necess�rios. 
//Exiba o resultado da �rea ap�s a seguinte frase no final:  "A �rea do quadrado �:"
//Considere a f�rmula: �rea = lado * lado.

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	float area,lado;
	printf("Digite o tamanho do lado: \n");
	scanf("%f", &lado);
	

	
	area = lado * lado;
	printf("A �rea do quadrado � : %.2f\n", area);
	
	return 0 ; 
}
