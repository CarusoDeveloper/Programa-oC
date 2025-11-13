#include <stdio.h>


int main() {

    int idade;
    float altura;
    char nome[26];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Seu nome é: %s", nome);
    
    
    return 0;

}