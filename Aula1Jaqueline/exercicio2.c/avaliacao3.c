#include <stdio.h>
#include <stdlib.h>

main() {
    int i,numero;
    int maior=0;

    for(i=1;i<=5;i++) {

    printf("Informe o numero \n ");
    scanf("%d",&numero);
    
    
    if (numero > maior) {
        maior = numero;
    }
}
        printf("o Maior numero é: %d\n",maior);
        return 0;
}