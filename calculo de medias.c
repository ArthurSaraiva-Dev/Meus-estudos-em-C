#include <stdio.h>

int main(){

    float nota1, nota2, nota3;
    float media;
    
    printf("*** Programa CALCULADOR DE MÉDIA ***\n");

    printf("Digite a primeira nota para calculo: \n");
    scanf("%f", &nota1);

    printf("Digite a terceira nota para calculo: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota para calculo: \n");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    printf("A média é: %.1f", media);
    
    
    return 0;
}
