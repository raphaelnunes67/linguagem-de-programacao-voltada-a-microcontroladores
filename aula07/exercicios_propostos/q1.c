#include<stdio.h>

int main(){
 int a,b;
 printf("Digite o valor A: ");
 scanf("%d", &a);
 printf("Digite o valor B: ");
 scanf("%d", &b);

 for (int i=a; i<b; i++){
  if(i%2 == 0){
    printf("%d",i);
  }
  else{
    continue;
  }
 }
  
}