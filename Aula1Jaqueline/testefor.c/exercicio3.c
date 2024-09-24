#include<stdio.h>
#include <stdlib.h>
main(){
    int quant,i;
 float nota,soma;
printf("Qual o  numero de alunos da sala? \ n");
    scanf ("%d",&quant);
    for(i=0;i<quant;i++){
        printf("Digite a nota do aluno:\n");
        scanf("%f",&nota);
        soma=soma + nota;}
        printf ("A media das notas dos alunos e:%.2f \n",soma/quant);

}