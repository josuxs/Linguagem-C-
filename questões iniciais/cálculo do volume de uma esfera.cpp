//4. C�lculo do volume de uma esfera:
//Um cientista est� estudando a densidade de uma esfera e precisa calcular o volume para seus c�lculos. 
//Imprima o volume depois da frase "O volume da esfera �:". Considere: volume = (4/3) * pi * raio^3

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (){
	setlocale (LC_ALL,"");
	const float pi = 3.14;
	float volume, raio;
	
	printf("Digite o valor do raio: \n");
	scanf("%f", &raio);
	
	volume = (4.0/3.0) * pi * pow (raio,3);
	
	printf("O volume da esfera � : %.2f", volume );
	
	return 0;
}
