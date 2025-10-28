#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("-=-SEQUENCIA DE FIBONACCI-=-\n");
    printf("Indique até que número quer ler a sequência de Fibonacci: ");
    scanf("%d",&num);

    int num1=0,num2=1,num3;
    printf("%d %d ",num1,num2);
    for(num3 = num1+num2; num3<=num;num3=num1+num2){
        printf("%d ",num3);

        num1 = num2;
        num2 = num3;

    }
return 0;
}
