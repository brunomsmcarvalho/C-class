#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int altu,largura,raio,op;
    printf("1. Calcular a �rea de um quadrado\n");
    printf("2. Calcular a �rea de um rect�ngulo\n");
    printf("3. Calcular a �rea de um tri�ngulo rect�ngulo\n");
    printf("4. Calcular a �rea de um c�rculo\n");
    printf("Indique a opera��o a aplicar: \n");
    scanf(" %d", &op);
    system ("cls");
    switch(op){
    case 1 :
        printf("Indique a altura do quadrado: \n");
        scanf("%d",&altu);
        printf("A �rea do quadrado �: %d\n\n", altu*altu);
        break;
    case 2 :
        printf("Indique a altura e o comprimento do rect�ngulo: \n");
        printf("Altura: ");
        scanf("%d",&altu);
        printf("Comprimento: ");
        scanf("%d",&largura);
        printf("A �rea do rect�ngulo �: %d\n\n", altu*largura);
        break;
    case 3 :
        printf("Indique a altura e comprimento do tri�ngulo: \n");
        printf("Altura: ");
        scanf("%d",&altu);
        printf("Comprimento: ");
        scanf("%d",&largura);
        printf("A �rea do tri�ngulo �: %d\n\n", (altu*largura)/2);
        break;
    case 4 :
        printf("Indique o raio da circunfer�ncia: \n");
        scanf("%d",&raio);
        printf("A �rea do c�rculo �: %.2f\n\n", PI*raio*raio);
        break;
    default:
        printf("Op��o inv�lida!\n");
    }
    return 0;
}
