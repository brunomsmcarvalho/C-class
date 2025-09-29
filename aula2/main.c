#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float conversao;
    printf("-=-Vamos converter Euros em Escudos!-=-\n\n");
    printf("Quantos Euros? ");
    scanf("%f", &conversao);
    printf("%.2f Euros são %.2f escudos",conversao, conversao * 200.482);
    return 0;
}

//1 euro = 200.482 escudos
