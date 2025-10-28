#include <stdio.h>
#include <stdlib.h>

void tabuada(int a){
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, a, i*a);
    }
}
int main()
{
    int n1;
    do{
        printf("Qual a tabuada que quer fazer? ");
        scanf("%d",&n1);
    }while(n1 < 0 || n1>20);
    tabuada(n1);
    return 0;
}
