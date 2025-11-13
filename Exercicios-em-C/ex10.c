#include <stdio.h>


int main() {
    
    //variáveis
    char ProdutoA[30] = "Produto A";
    char ProdutoB[30] = "Produto B";

    unsigned int EstoqueA = 1000;
    unsigned int EstoqueB = 2000;

    float ValorA = 10.50;
    float ValorB = 20.50;

    unsigned int EstoqueminimoA = 500;
    unsigned int EstoqueminimoB = 2500;

    double ValorTotalA;
    double ValorTotalB;

    int ResultadoA, ResultadoB;

    //informações dos produtos
    printf("O %s tem estoque de %u e o valor unitário é R$ %.2f\n", ProdutoA, EstoqueA, ValorA);
    printf("O %s tem estoque de %u e o valor unitário é R$ %.2f\n", ProdutoB, EstoqueB, ValorB);

    //comparação de preços

    ResultadoA = EstoqueA > EstoqueminimoA;
    ResultadoB = EstoqueB > EstoqueminimoB;


    printf("O produto %s tem estoque minímo %d\n", ProdutoA, ResultadoA);
    printf("O produto %s tem estoque minímo %d\n", ProdutoB, ResultadoB);

}