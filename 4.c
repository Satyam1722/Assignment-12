

#include<stdio.h>
void odd(n){
    if(n==0)
        return;
    if(n%2!=0)
  printf("%d ",n);
  odd(n-1);

}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  odd(n*2);
  return 0;
}
