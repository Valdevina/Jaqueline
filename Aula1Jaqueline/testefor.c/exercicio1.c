#include<stdio.h>
#include <stdlib.h>
main(){
int i,numero;
int maior=0;
for(i=1; i<=10; i++){
printf("digite um valor:\n");
scanf("%d",&numero);
if(numero>maior)
maior=numero;
}
printf("o numero maior e:%d \n",maior);


}