#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float  nota, total;
    printf("Qual é a 1ª nota do aluno? ");
    scanf("%f", &nota);
    total = nota;
    printf("Qual é a 2ª nota do aluno? ");
    scanf("%f", &nota);
    total += nota;
    printf("Qual é a 3ª nota do aluno? ");
    scanf("%f", &nota);
    total += nota;
    printf("A média do aluno é %.2f !",total/3);
    if(total/3<9.5){
        printf("\nChumbou!\n\n");
    }else if(total/3<13.5){
        printf("\nSuficiente!\n\n");
    }else if(total/3<17.5){
        printf("\nBom!\n\n");
    }else{
        printf("\nExcelente\n\n");
    }
    return 0;
}

