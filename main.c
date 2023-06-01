#include <stdio.h>
#include <stdlib.h>

float lerValor(){
    float valor;
    printf("\nDigite o valor: ");
    scanf("%f", &valor);
    return valor;
}

float soma(){
    float valor1, valor2, resultado;
    valor1 = lerValor();
    valor2 = lerValor();
    resultado = valor1 + valor2;
    return resultado;
}

float subtracao(){
    float valor1, valor2, resultado;
    valor1 = lerValor();
    valor2 = lerValor();
    resultado = valor1 - valor2;
    return resultado;
}
float multiplicacao(){
    float valor1, valor2, resultado;
    valor1 = lerValor();
    valor2 = lerValor();
    resultado = valor1 * valor2;
    return resultado;
}

float divisao(){
    float valor1, valor2, resultado;
    valor1 = lerValor();
    valor2 = lerValor();
    resultado = valor1 / valor2;
    return resultado;
}

void menu(){
    int escolha;
    float resposta;

    printf("Calculadora em c\n\n");

    printf("Selecione a operacao: \n");
    printf("1 - Soma\n");
    printf("2- Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");
    printf("Escolha a operacao: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            resposta = soma();
            printf("\nResultado: %2f\n\n", resposta);
            //system("clear");
            menu();
        break;
        case 2:
            resposta = subtracao();
            printf("\nResultado: %2f\n\n", resposta);
            //system("clear");
            menu();
        break;
        case 3:
            resposta = multiplicacao();
            printf("\nResultado: %2f\n\n", resposta);
            //system("clear");
            menu();
        break;
        case 4:
            resposta = divisao();
            printf("\nResultado: %2f\n\n", resposta);
            //system("clear");
            menu();
        break;
        case 5:
            system("exit");
            printf("\nFinalizando");
        break;

        default:
            printf("Resposta invalida");
            getchar();
            system("clear");
            menu();
            break;
    }

}

int main(){
    menu();
    system("pause");
    return 0;
}
