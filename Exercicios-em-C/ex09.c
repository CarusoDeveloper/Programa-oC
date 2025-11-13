#include <stdio.h>

int main() {

    float nota1, nota2, nota3, resultado;

    printf("Digite sua nota do primeiro semestre: ");
    scanf("%f", &nota1);


    printf("Digite sua nota do segundo semestre: ");
    scanf("%f", &nota2);



    printf("Digite sua nota do terceiro semestre: ");
    scanf("%f", &nota3);

    resultado = (nota1 + nota2 + nota3) / 3;
    printf("Sua média foi: %.2f\n", resultado);


}