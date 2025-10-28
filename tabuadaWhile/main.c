#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;

do{
    system("cls");
    printf("Indique um valor para a tabuada (1-12): ");
    scanf("%d", &a);
}while(a<1||a>12);
for(int i =1;i<=10;i++){
    printf("%d * %d = %d\n",a,i,a*i);
}
}

