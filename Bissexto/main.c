#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bissexto;
    printf("Vamos Verificar se o ano é bissexto\n");
    scanf("%d", &bissexto);
    if(bissexto%400 == 0){
        printf("O ano %d é 1bissexto",bissexto);
    }else if (bissexto%100 == 0){
        printf("O ano %d não é 2bissexto",bissexto);
    }else if (bissexto%4 == 0){
        printf("O ano %d é 3bissexto",bissexto);
    }else{
        printf("O ano %d não é 4bissexto",bissexto);
    }
    return 0;
}
//if((bissexto % 4 == 0 && bissexto % 100 != 0) || ano % 400 == 0){
//  printf("O ano é bissexto.");
//}else{
//  printf("O ano não é bissexto.");
