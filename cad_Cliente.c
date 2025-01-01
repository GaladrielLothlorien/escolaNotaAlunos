#include <stdio.h>

int main(){
    int option;
    char nome[15];

    printf("=========Cadastro de Clientes========\n");
    printf("[1] - Cadastro de Clientes");

    scanf("%d", &option);

    switch(option){
        case 1:
            printf("Digite o nome do cliente: ");
            scanf("%s", nome);
        break;
    }

    printf("\n=========Cadastro Realizado com sucesso========\n");
    printf("Nome: %s \n", nome);

    return 0;
}