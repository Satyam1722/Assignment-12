#include<stdio.h>
void natural(n){
    if(n==0)
        return;
  natural(n-1);
  printf("%d ",n);
}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  natural(n);
  return 0;
}
