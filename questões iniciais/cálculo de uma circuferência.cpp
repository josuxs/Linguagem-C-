//2. C�lculo da circunfer�ncia de um c�rculo:
//Um engenheiro est� projetando uma roda para um ve�culo e precisa calcular a circunfer�ncia para garantir que ela se
//encaixe corretamente no ve�culo. Exiba o resultado ap�s a frase: 
//"A circunfer�ncia do c�rculo �:". Considere a f�rmula: circunferencia = 2 * pi * raio

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL,"");
	float circu, raio;
	const float  pi = 3.14 ;
	
	printf("Digite o tamanho do raio: \n ");
	scanf("%f", &raio);

	circu = 2 * pi * raio;
	
	printf(" A circufer�ncia do c�rculo � : %.2f\n", circu);
	
	return 0 ;
}
