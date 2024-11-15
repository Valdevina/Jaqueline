#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    float numeros[10];
    float menor, maior;

    
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    
    menor = numeros[0];
    maior = numeros[0];

    
    for (i = 1; i < 10; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    
    printf("O menor número digitado foi: %.2f\n", menor);
    printf("O maior número digitado foi: %.2f\n", maior);

    return 0;
}
