#include <stdio.h>
#include <stdlib.h>
float calcula_salario(float horas){
    float salario_bruto, cont_prev, salario_liquido;
    salario_bruto = horas * 110.00;
    if (salario_bruto < 1412.00)
{ 
    salario_bruto = 1412.00;
}
cont_prev = salario_bruto * 0.11;
salario_liquido = salario_bruto - cont_prev;
printf("valor a receber e: %.2f", salario_liquido);
return(0);
}
int main(){
        char nome_funcionario [50];
        float horas;
        printf("Digite no nome do funcionario:\n");
        gets(nome_funcionario);
        printf("Digite o numero de horas trabalhadas:\n");
        scanf ("%f",&horas);
        calcula_salario(horas);
}
