#include<stdio.h>
#include<stdlib.h>
//protótipo de uma função
int sqr(int);
int dobro(int);
int triplo(int);

int main(){
    int numero =0;
    printf("Digite um numero inteiro:\n");
    scanf("%d",&numero);
    if(numero<0){
sqr(numero);
    }
    else if(numero%2 == 0){
    dobro(numero);
    }
    else{
triplo(numero);
    }
    return 0;
    }
    int sqr(int numero){
        //calcula o quadrado do numero
        int x = numero;
        printf("O quadrado do numero e: %d\n",x*x);
        return(0);
     }
     int dobro(int numero){
        int x = numero;
        printf("o dobro do numero e: %d\n",2*x);
        return(0);
}
int triplo(int numero){
    int x = numero;
    printf("o triplo do numero e: %d\n",3*x);
    return(0);
}