#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[32];
    printf("Inroduza um nome: ");
    scanf("%s", nome);


    for(int i = strlen(nome)-1; i >=0; i--){
        printf("%c",nome[i]);
    }
    return 0;
}
