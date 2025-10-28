#include <stdio.h>
#include <stdlib.h>
int multiplica (int a, int b) {
return a*b;
}
int soma (int a, int b){
return a+b;
}
int subtracao (int a, int b){
return a-b;
}
float divisao(int a, int b){
    if(b==0){
        printf("ERRO, não se pode dividir números por 0!!");
        return 0;
    }
    return a/b;

}
int main()
{
    int op,n1,n2;
    do{
        printf("Indique o primeiro número: ");
        scanf("%d", &n1);
        do{
            printf("1. Somar\n");
            printf("2. Subtrair\n");
            printf("3. Multiplicar\n");
            printf("4. Dividir\n");
            printf("5. Encerrar programa\n");
            printf("Indique a operação a aplicar: ");
            scanf(" %d", &op);
        }while(op<1 || op > 5);

        if ( op == 5 ){
            printf("Adeus e até breve!!");
            break;
        }
        system ("cls");
        printf("Indique o segundo número: ");
        scanf("%d", &n2);
        switch(op){
        case 1 :
            printf("%d + %d = %d\n",n1,n2,soma(n1,n2));
            break;
        case 2 :
            printf("%d - %d = %d\n",n1,n2,subtracao(n1,n2));
            break;
        case 3 :
            printf("%d x %d = %d\n",n1,n2,multiplica(n1,n2));
            break;
        case 4 :
            printf("%d / %d = %f\n",n1,n2,divisao(n1,n2));
            break;
        }
    }while(op != 5);


    return 0;
}
