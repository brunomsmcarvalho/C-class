#include <stdio.h>
#include <stdlib.h>
int main(){
    char op;
    float n1,n2;

    printf("Indique o primeiro valor: ");
    scanf("%f", &n1);
    printf("1 -> +\n");
    printf("2 -> -\n");
    printf("3 -> x\n");
    printf("4 -> /\n");
    printf("Indique a operação a aplicar: ");
    scanf(" %c", &op);
    printf("Indique o segundo valor: ");
    scanf("%f", &n2);
    switch(op){
    case '1':
        printf("%.2f + %.2f = %.2f",n1,n2,n1+n2);
        break;
    case '2':
        printf("%.2f + %.2f = %.2f",n1,n2,n1-n2);
        break;
    case '3':
        printf("%.2f + %.2f = %.2f",n1,n2,n1*n2);
        break;
    case '4':
        printf("%.2f + %.2f = %.2f",n1,n2,n1/n2);
        break;
    }
    return 0;
}
