#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int tent , acertou ;
    char forca[30] , palavra[30] = "" , letra, op;

    do{
        printf("Vamos jogar à forca? [S] / [N]: ");
        scanf(" %c" , &op);

         if (op == 'N' || op == 'n') {
            printf("Adeus!\n");
            return 0;
         }

        printf("Indique a palavra da forca: ");
        scanf("%s",forca);

        system("cls");

        tent = 5;
        acertou = 0;

        printf("Palavra com:");

        for (int i = 0; i < strlen(forca); i++) {
             palavra[i] = '_';
             printf(" %c" , palavra[i]);
        }
        palavra[strlen(forca)] = '\0';
        printf(" espaços!");
        do{
            printf("\n\nIndique a letra para testar: ");
            scanf(" %c", &letra);
            int cont = 0;
            system("cls");
            for(int i = 0 ;  i < strlen(forca); i++){
                if(forca[i] == letra){
                    palavra[i] = letra;
                    cont++;
                }
                printf("%c",palavra[i]);
            }
            if(strcmp(palavra, forca) == 0){
                    printf("\n\nGANHOU!! VOCE E O MELHOR DA SUA ALDEIA!!\n\n");
                    acertou = 1;
                    break;
                }
            if (cont == 0){
                printf("\n\nERROU!!! %c nao existe, Tente novamente!!", letra);
                tent--;
            };
        printf("\nTentativas: %d\n", tent);
        }while( tent > 0 && !acertou);
            if(tent == 0){
                printf("GAME OVER\n\n");
            };
    }while(op == 's' || op == 'S');

return 0;
}


