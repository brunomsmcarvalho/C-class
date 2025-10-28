#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=0;
    do{
        printf("indique um valor: ");
        scanf("%d",&a);
    }while(a<1 || a>12); //Enqaunto isto for verdadeiro o meu ciclo não para de correr

}
