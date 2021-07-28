#include<stdio.h>
void prime(int n[] );

int main() {
  int i, a[10];
  printf("Enter 10 numbers: ");
  for (i=0;i<10;i++) {
    scanf("%d", &a[i]);
  }
  prime(a);
} 

void prime(int n[]) {
  int i,j;
  for(i=0;i<10;i++) {
    for(j=2;j<n[i];j++){
      if(n[i]%j==0){
        break;
      }
    }
    if(n[i]==j){
      printf("%d",n[i]);
    }
  }
}