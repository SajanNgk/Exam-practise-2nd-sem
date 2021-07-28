#include<stdio.h>

int main(){
    int a,i;
    printf("Enter a number: ");
    scanf("%d", &a);
        if(a<2){
            printf("The number is not prime.");
        }
        else{
            for(i=2;i<a;i++){
                if(a%i==0){
                    printf("The number is not prime. ");
                    break;
                }
            }
            if(a==i){
                printf("The number is prime.");
            }
         }
}