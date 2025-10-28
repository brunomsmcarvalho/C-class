#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");
    float n1,n2;
    float resultado;
    char operacoes;
    printf("Introduza o primeiro numero: ");
    scanf("%f",&n1);
    printf("Introduza o segundo numero: ");
    scanf("%f",&n2);
    printf("Escolha a operação desejada +,-,*,/\n");
    scanf(" %c",&operacoes);
    if(operacoes== '+'){
    resultado = n1 + n2;
    printf("%.2f + %.2f = %.2f\n", n1, n2, resultado);
    }else if(operacoes == '-'){
    resultado = n1- n2;
    printf("%.2f - %.2f = %.2f\n", n1, n2, resultado);
    }else if(operacoes == '*'){
    resultado = n1* n2;
    printf("%.2f * %.2f = %.2f\n", n1, n2, resultado);
    }else{
    resultado = n1/n2;
    printf("%.2f / %.2f = %.2f\n", n1, n2, resultado);
    }
    return 0;
}
