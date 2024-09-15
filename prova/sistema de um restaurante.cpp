//Comando de prova - Programação 1
//Em um restaurante localizado no bairro Liberdade, à beira do rio, o dono do estabelecimento resolveu oferecer aos seus clientes um cardápio com um novo programa de descontos. De praxe, o programa deve receber os pedidos dos clientes com base nos preços apresentados na Tabela 1. 
//Tabela 1: Preços dos itens oferecidos pelo restaurante
//Código do Combo              Item                                                 Preço (R$)
//1                                           Prato executivo:                              45.50
//                                             Refrigerante Baré:                          3.50
//2                                           Almoço especial:                           65.00
//                                             Jarra de suco:                                 18.00
//Sistema de desconto do restaurante
//O dono do restaurante resolveu criar um novo sistema de desconto para os seus clientes do seguinte modo:
//- se os clientes consumirem itens, cujo valor total seja até 500 reais, então seria descontado 3% do valor da comanda.
//- se os clientes consumirem itens, cujo valor total seja até 800 reais, então seria descontado 5% do valor da comanda.
//- se os clientes consumirem itens, cujo valor total seja maior que 800 reais, então seria descontado 7% do valor da comanda.
//- Senão, não haveria desconto.
//Dado esse contexto, utilize a Linguagem C, para criar um programa para o dono do restaurante, que:
//A) Imprima as informações contidas na Tabela 1 e, em seguida receba do cliente o tipo de pedido desejado. Utilize o número código para isso. (Vale 0.5)
//B) Verifique se o cliente selecionou o código do combo 1 ou 2. Imprima o código do combo e o nome do item correspondente. Se o usuário tiver digitado um número diferente de 1 ou 2, então imprima a frase "Código invalido. Selecione um novo código (1 ou 2)". Utilize o comando DO...WHILE para repetir essa operação enquanto não for informado um código válido. (Valem 3.0).
//C) Se o cliente tiver digitado a opção de combo 1, então receba dele a quantidade de pratos executivos e a quantidade refrigerantes que deseja. Calcule e mostre o subtotal a pagar pelos pratos executivos. Calcule e mostre, também, o subtotal a pagar pelos refrigerantes solicitados. (Valem 1.0).
//D) Se o cliente tiver digitado a opção de combo 2, então receba dele a quantidade de pratos especiais e a quantidade sucos que deseja. Calcule e mostre o subtotal a pagar pelos pratos especiais. Calcule e mostre, também, o subtotal a pagar pelos sucos solicitados. (Valem 1.0).
//E) Receba do usuário a quantidade de pessoas que irão pagar a conta. Calcule e mostre também: o valor total da comanda (sem o desconto); o valor do desconto (em reais); o valor total da comanda (após o desconto ter sido aplicado), conforme o Sistema de desconto do restaurante; e, por fim, calcule e mostre o valor a ser pago por cada pessoa da mesa.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int numero_codigo;
    int cont = 1;
    float prato, refri, somaprato, somarefri;
    int almocoprato, jarra;
    float somap, somajarra;
    int pessoas;
    float desconto = 0, valor_comanda, valor_final, valor_por_pessoa;

    do {
        printf("Combo 1: Prato executivo = 45.50 reais + Refrigerante Baré = 3.50 reais\n");
        printf("Combo 2: Almoço especial = 65.00 reais + Jarra de Suco = 18.00 reais\n");
        printf("Qual o tipo de pedido desejado? Digite 1 ou 2: \n");
        scanf("%i", &numero_codigo);

        if (numero_codigo == 1) {
            printf("Você selecionou o combo 1: Prato executivo = 45.50 reais + Refrigerante Baré = 3.50 reais\n");
            printf("Digite quantos pratos e quantos refrigerantes você deseja: \n");
            scanf("%f %f", &prato, &refri);

            somaprato = 45.50 * prato;
            somarefri = 3.50 * refri;
            valor_comanda = somaprato + somarefri;

            printf("Valor total dos pratos: %.2f\n", somaprato);
            printf("Valor total dos refrigerantes: %.2f\n", somarefri);
            printf("Valor total da comanda sem desconto: %.2f\n", valor_comanda);

        } else if (numero_codigo == 2) {
            printf("Você selecionou o combo 2: Almoço especial = 65.00 reais + Jarra de Suco = 18.00 reais\n");
            printf("Digite a quantidade de almoços especiais e jarras de suco: \n");
            scanf("%i %i", &almocoprato, &jarra);

            somap = 65.00 * almocoprato;
            somajarra = 18.00 * jarra;
            valor_comanda = somap + somajarra;

            printf("Valor total dos pratos de almoço especial: %.2f\n", somap);
            printf("Valor total das jarras de suco: %.2f\n", somajarra);
            printf("Valor total da comanda sem desconto: %.2f\n", valor_comanda);

        } else {
            printf("Código inválido. Selecione um novo código (1 ou 2).\n");
        }
    } while (numero_codigo != 1 && numero_codigo != 2);

    // Receber quantidade de pessoas
    printf("Quantas pessoas vão dividir a conta? \n");
    scanf("%i", &pessoas);

    // Aplicar descontos
    if (valor_comanda <= 500) {
        desconto = valor_comanda * 0.03;
    } else if (valor_comanda <= 800) {
        desconto = valor_comanda * 0.05;
    } else if (valor_comanda > 800) {
        desconto = valor_comanda * 0.07;
    }

    valor_final = valor_comanda - desconto;
    valor_por_pessoa = valor_final / pessoas;

    // Mostrar valores finais
    printf("Valor total da comanda (sem desconto): %.2f\n", valor_comanda);
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Valor total da comanda (após desconto): %.2f\n", valor_final);
    printf("Valor a ser pago por cada pessoa: %.2f\n", valor_por_pessoa);

    return 0;
}

