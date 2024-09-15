//Contagem de números pares
//Escreva um programa que leia 7 números inteiros e os armazene em um vetor. 
//O programa deve contar e exibir quantos desses números são pares.
//Use o operador % (MOD) para verificar se um número é par e incremente um contador cada vez que encontrar um número par.
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int vet[7];
    int contador_pares = 0;
    
    printf("Digite uma sequência de 7 números:\n");
    for (int cont = 0; cont < 7; cont++) {  
        printf("Digite o número %d: ", cont + 1);
        scanf("%i", &vet[cont]);
    }
    
    for (int cont = 0; cont < 7; cont++) {
        if (vet[cont] % 2 == 0) {  
            contador_pares++;
        }
    }
    printf("Quantidade de números pares: %i\n", contador_pares);
    
    return 0;
}

