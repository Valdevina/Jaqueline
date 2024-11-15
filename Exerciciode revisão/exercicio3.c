#include <stdio.h>

void exibir_opcoes() {
    printf("Escolha uma forma de pagamento:\n");
    printf("1) A vista (10%% de desconto)\n");
    printf("2) Em 2 vezes (sem juros)\n");
    printf("3) De 3 até 10 vezes com 3%% de juros ao mês (apenas para compras acima de R$100,00)\n");
}

int obter_opcao() {
    int opcao;
    printf("Digite a opção desejada (1, 2 ou 3): ");
    scanf("%d", &opcao);
    return opcao;
}

void pagamento_a_vista(float valor) {
    float valor_com_desconto = valor * 0.9;
    printf("Pagamento a vista (10%% de desconto): R$ %.2f\n", valor_com_desconto);
}

void pagamento_2x(float valor) {
    printf("Pagamento em 2 vezes: 2 parcelas de R$ %.2f\n", valor / 2);
}

void pagamento_3a10x(float valor) {
    int parcelas;
    float valor_total, valor_parcela;
    
    if (valor > 100.0) {
        printf("Digite o número de parcelas (entre 3 e 10): ");
        scanf("%d", &parcelas);
        
        if (parcelas >= 3 && parcelas <= 10) {
            valor_total = valor * 1.03;  
            valor_parcela = valor_total / parcelas;
            printf("Pagamento em %d vezes:  %d parcelas de R$ %.2f\n", parcelas, parcelas, valor_parcela);
        } else {
            printf("Número de parcelas inválido. Deve ser entre 3 e 10.\n");
        }
    } else {
        printf("Compra inferior a R$ 100,00 não pode ser parcelada com juros.\n");
    }
}

int main() {
    float total_gasto;
    int opcao;

    
    printf("Digite o total gasto pelo cliente (R$): ");
    scanf("%f", &total_gasto);

    
    exibir_opcoes();
    opcao = obter_opcao();

    
    switch (opcao) {
        case 1:
            pagamento_a_vista(total_gasto);
            break;
        case 2:
            pagamento_2x(total_gasto);
            break;
        case 3:
            pagamento_3a10x(total_gasto);
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
