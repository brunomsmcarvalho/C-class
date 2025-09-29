#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //lib para caracteres especiais

int main()
{
    setlocale(LC_ALL,""); //ler a lib dos caracteres especiais
    int ano;
    printf("Em que ano estamos? ");
    scanf("%d", &ano);
    printf("Estamos, então, em %d. \n\n\n",ano);
    return 0;
}
