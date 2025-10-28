#include <stdio.h>
#include <stdlib.h>

int multiplica (int a,int b){

return a*b;
}
int main()
{
    int n1 , n2;
    printf("Indique o número a calcular a tabuada: ");
    scanf("%d",&n2);
    for(n1=1;n1<=10;n1++){
        printf("%d * %d = %d\n",n1,n2,multiplica(n1,n2));

}
return 0;
}
