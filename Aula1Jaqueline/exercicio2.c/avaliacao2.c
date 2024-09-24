#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nome[50];        
    char endereco[100];   
    int telefone;    
   
    printf("Digite seu nome:\n");
    scanf("%s",&nome);

    printf("Digite seu endereco:\n");
    scanf("%s", &endereco);

    printf("Digite seu telefone:\n");
    scanf ("%d",&telefone);
    printf("nome:%s\n",nome);
    printf("endereço:%s\n",endereco);
    printf("telefone:%d\n", telefone);

    return 0;
}
