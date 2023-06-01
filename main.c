#include <stdio.h>
#include <stdlib.h>


void menu(){
    int escolha;

    printf("Calculadora em c\n\n");

    printf("Selecione a operacao: \n");
    printf("1 - Soma\n");
    printf("2- Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");
    printf("Escolha a operacao: ");
    scanf("%d", $escolha);

    switch(escolha){
        case 1:
            soma();
        break;
        case 2:
            subtracao();
        break;
        case 3:
            multiplicacao();
        break;
        case 4:
            divisao();
        break;
        case 5:
            system("exit");
            printf("\nFinalizando");
        break;

        default:
            printf("Resposta invalida");
            system("pause");
            system("cls");
            menu();
            break;
    }

}

int main(){

    return 0;
}
