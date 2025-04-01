#include <stdio.h>

int main(){
    // Declarando Produtos
    char produtoA[30] = "ProdutoA";
    char produtoB[30] = "ProdutoB";

    unsigned int estoqueA = 1000; 
    unsigned int estoqueB = 2100;
    
    float valorA = 12.50;
    float valorB = 20.80;

    unsigned int estoqueMin_A = 500;
    unsigned int estoqueMin_B = 3500;

    double valorTotal_A;
    double valorTotal_B;

    int resultadoA, resultadoB;

    // Infos dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é R$: %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$: %.2f\n", produtoB, estoqueB, valorB);

    // Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMin_A;
    resultadoB = estoqueB > estoqueMin_B;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);
    
    // Comparações entre valores totais dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));
    
    
    
    
    
    
    
    return 0;
}