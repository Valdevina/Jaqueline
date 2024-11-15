#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    
    printf("Digite os 9 elementos da matriz (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("\nMatriz original:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

   
    printf("\nMatriz com os elementos multiplicados por 5:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j] * 5);
        }
        printf("\n");
    }

    return 0;
}
