#include <stdio.h>

int main(){

    int idade, matricula;
    char nome[20];
    float altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);


    printf("Digite seu nome: ");
    scanf("%s", &nome);


    printf("Digite sua altura: ");
    scanf("%f", &altura);


    printf("Digite sua matricula: ");
    scanf("%d", &matricula);


    printf("Dados: \n");
    printf("Seu nome: %s - Sua matricula: %d\n", nome, matricula);
    printf("Sua idade: %d - Sua altura: %f", idade, altura);

    return 0;

}