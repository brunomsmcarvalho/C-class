#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int altu,largura,raio,op;
    printf("1. Calcular a área de um quadrado\n");
    printf("2. Calcular a área de um rectângulo\n");
    printf("3. Calcular a área de um triângulo rectângulo\n");
    printf("4. Calcular a área de um círculo\n");
    printf("Indique a operação a aplicar: \n");
    scanf(" %d", &op);
    system ("cls");
    switch(op){
    case 1 :
        printf("Indique a altura do quadrado: \n");
        scanf("%d",&altu);
        printf("A área do quadrado é: %d\n\n", altu*altu);
        break;
    case 2 :
        printf("Indique a altura e o comprimento do rectângulo: \n");
        printf("Altura: ");
        scanf("%d",&altu);
        printf("Comprimento: ");
        scanf("%d",&largura);
        printf("A área do rectângulo é: %d\n\n", altu*largura);
        break;
    case 3 :
        printf("Indique a altura e comprimento do triângulo: \n");
        printf("Altura: ");
        scanf("%d",&altu);
        printf("Comprimento: ");
        scanf("%d",&largura);
        printf("A área do triângulo é: %d\n\n", (altu*largura)/2);
        break;
    case 4 :
        printf("Indique o raio da circunferência: \n");
        scanf("%d",&raio);
        printf("A área do círculo é: %.2f\n\n", PI*raio*raio);
        break;
    default:
        printf("Opção inválida!\n");
    }
    return 0;
}
