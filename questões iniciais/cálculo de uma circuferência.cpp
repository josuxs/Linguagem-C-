//2. Cálculo da circunferência de um círculo:
//Um engenheiro está projetando uma roda para um veículo e precisa calcular a circunferência para garantir que ela se
//encaixe corretamente no veículo. Exiba o resultado após a frase: 
//"A circunferência do círculo é:". Considere a fórmula: circunferencia = 2 * pi * raio

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"");
	float circu, raio;
	const float  pi = 3.14 ;
	
	printf("Digite o tamanho do raio: \n ");
	scanf("%f", &raio);

	circu = 2 * pi * raio;
	
	printf(" A circuferência do círculo é : %.2f\n", circu);
	
	return 0 ;
}
