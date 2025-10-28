#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    printf("       -=-TABUADA-=-\n");
    printf("Indique o número da tabuada: ");
    scanf("%d",&num);
    for(int i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d\n",i,num,i*num);
    }return 0;
}
