#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int a;
    float b[20];
    float cont = 0;

    do{
        printf("indique o n�mero de notas que deseja calcular: ");
        scanf("%d",&a);
    }while (a<=1 || a > 20);

        for(int i = 0; i < a;i++){
            do{
                printf("Indique a %d� nota: ",i+1);
                scanf("%f",&b[i]);
            }while (b[i]<0 || b[i]>20);
            cont += b[i];
    }
    for(int i = 0 ; i < a ; i++){
        printf("A %d� nota �: %.2f\n",i+1,b[i]);
    }

    printf("A m�dia das notas do aluno � %.2f valores." , cont/a);
        }


