
#include<stdio.h>
void odd(n){
    if(n==0)
        return;
  odd(n-1);
  if(n%2!=0)
  printf("%d ",n);
}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  odd(n*2);
  return 0;
}
