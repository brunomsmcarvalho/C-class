#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    float  nota, total;
    printf("Qual � a 1� nota do aluno? ");
    scanf("%f", &nota);
    total = nota;
    printf("Qual � a 2� nota do aluno? ");
    scanf("%f", &nota);
    total += nota;
    printf("Qual � a 3� nota do aluno? ");
    scanf("%f", &nota);
    total += nota;
    printf("A m�dia do aluno � %.2f !",total/3);
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

