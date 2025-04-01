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
    unsigned int estoqueMin_B = 1500;

    double valorTotal_A;
    double valorTotal_B;

    // Infos dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoB, estoqueB, valorB);

    // Comparações com o valor mínimo de estoque
    

}