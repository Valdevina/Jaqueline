#include <stdio.h>
#include <stdlib.h>
int main(){
    int notas[2][2];
    for(int i =0; i < 2; i++) {//para as linhas
    for (int j = 0; j < 2; j++) {//para as colunas
    printf ("Digite a nota:");
    notas[i][j] = i+2;}
}
printf('*********saída de Dados**********');
for (int i = 0; i < 2; i++){// para as linhas
for  (int j= 0;i < 2; j++){// para as colunas
printf("\n Nota[%d]= %d \n",i,j,notas[i][j]);
}

}
return 0;
}
