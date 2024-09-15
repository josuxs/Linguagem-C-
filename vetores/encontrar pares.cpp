//Contagem de n�meros pares
//Escreva um programa que leia 7 n�meros inteiros e os armazene em um vetor. 
//O programa deve contar e exibir quantos desses n�meros s�o pares.
//Use o operador % (MOD) para verificar se um n�mero � par e incremente um contador cada vez que encontrar um n�mero par.
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int vet[7];
    int contador_pares = 0;
    
    printf("Digite uma sequ�ncia de 7 n�meros:\n");
    for (int cont = 0; cont < 7; cont++) {  
        printf("Digite o n�mero %d: ", cont + 1);
        scanf("%i", &vet[cont]);
    }
    
    for (int cont = 0; cont < 7; cont++) {
        if (vet[cont] % 2 == 0) {  
            contador_pares++;
        }
    }
    printf("Quantidade de n�meros pares: %i\n", contador_pares);
    
    return 0;
}

