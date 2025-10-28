#include <stdio.h>
#include <stdlib.h>
int main(){
    int num1,num2;
    printf("Apresente um valor: ");
    scanf("%d",&num1);
    printf("Apresente o segundo: ");
    scanf("%d",&num2);
    if (num1>num2){
        int num3 = num1;
        num1 = num2;
        num2 = num3;
  //  }for(num1 ; num1<num2 ; num1++){
    //            if(num1 % 2 == 0){
     }if(num1%2!=0){
        num1++;
     }
     for(int i = num1; i<=num2 ; i+=2 ){
        printf("%d ",i);

        }
    return 0;
    }
