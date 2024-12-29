# escolaNotaAlunos
#include <stdio.h>

int main(){
    //Declarar variaveis
    int notaA, notaB, media;
    char nome[30];

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("Digite a primeira nota: ");
    scanf("%d", &notaA);

    printf("Digite a segunda nota: ");
    scanf("%d", &notaB);

    media = (notaA + notaB) / 2;

    printf("O nome do aluno: %s\n", nome);
    printf("A media foi: %d\n", media);

    if(media >=6){
        printf("\nAluno: %s\n", nome);
        printf("\nAluno foi aprovado!\n");
    }else{
        printf("\nAluno: %s\n", nome);
        printf("\nAluno foi reprovado!\n");
    }

    return 0;
}
# escolaNotaAlunos
