#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int primo;
    do{
        printf("Indique o valor m�ximo do intervalo: ");
        scanf("%d", &primo);
    }while(primo<=1);
        printf("N�meros primos at� %d:\n", primo);
        for (int i =2; i<= primo;i++) {
            int cont = 0;
            for (int j = 1; j <= i;j++) {
                if (i % j==0) {
                    cont++;
                }
            }
            if (cont==2) {
                printf("%d\t", i); //acrescenta uma tabula��o aos n�meros
            }
        }
        printf("\n");
        return 0;
    }
