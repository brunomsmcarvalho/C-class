#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    int b = 4;
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}

//print a=4 print b = 2


