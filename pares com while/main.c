#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    do{
        printf("Indique o valor inicial do intervalo: ");
        scanf("%d", &a);
    }while(a<=0);
    do{
        printf("Indique o valor final do intervalo: ");
        scanf("%d", &b);
    }while(b<=a);

    printf("Pares: ");

    if (a % 2 !=0){
        a++;
    }
    for (int i=a;i<=b;i+=2)
        printf("%d ",i);

    printf("\nImpares: ");
    if (a % 2 ==0){
        a++;
    }
    for (int i=a;i<=b;i+=2)
        printf("%d ",i);
}

