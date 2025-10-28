#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int primo;
    int verif = 0;

    printf("Indique o número a analisar: ");
    scanf("%d",&primo);
       if (primo <= 1) {
        printf("%d não é um número primo\n", primo);
        return 0;
    }
       for(int i = 2 ; i < primo ; i++){
        if( primo % i == 0){
            verif = 1;
            break;
    }
       }
    if(verif == 0){
    printf("%d é um número primo",primo);
    }else{
    printf("%d não é um número primo",primo);
    }
       }

