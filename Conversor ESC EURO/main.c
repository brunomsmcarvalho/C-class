#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float conversao;
    printf("Vamos converter Escudos em Euros!\n\n");
    printf("Quantos Escudos? ");
    scanf("%f",&conversao);
    printf("%.2f escudos s�o %.2f euros",conversao, conversao/200.482);
    return 0;
}
//1 escudo s�o 0,0091 euros
