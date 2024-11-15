#include <stdio.h>

int main() {
    int i;

    
    for (i = 2; i <= 1000; i += 2) {
        printf("%d ", i);
        printf(" e par \n");
    }

    
    for (i = 1; i <= 1000; i += 2) {
        printf("%d ", i);
        printf(" e impares \n");
    }
    

    return 0;
}
