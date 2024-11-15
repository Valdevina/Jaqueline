/* 1-Crie um programa que de uma mensagem de Boas Vindas aos alunos*/
/* 2-Pedir para o aluno digitar o nome antes de desejar boas vindas e mostre a mensagem com o nome dele*/
/* 3-Pedir ao aluno para digitar as notas de 04 avaliações,somar e calcular a média(media = soma/4) e mostrar qual é  a média*/


#include <stdio.h>
#include <stdlib.h>
main(){
    char nome [10];
float nota1, nota2, nota3, nota4, soma, media;
    printf("Digite seu Nome:\n");
    scanf("%s",&nome);
    printf("Seja Bem vindos:%s", nome);

    printf("Digite a nota da 1ª avaliacao: ");
    scanf("%f", &nota1);

    printf("Digite a nota da 2ª avaliacao: ");
    scanf("%f", &nota2);
    printf("Digite a nota da 3ª avaliacao: ");
    scanf("%f", &nota3);
    printf("Digite a nota da 4ª avaliacao: ");
    scanf("%f", &nota4);
    soma = nota1 + nota2 + nota3 + nota4;
    media = soma / 4;
    printf("A média das 4 avaliacoes é: %.2f\n", media);
}
