
#include<stdio.h>
void natural(n){
    if(n==0)
        return;
  printf("%d ",n);
  natural(n-1);

}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  natural(n);
  return 0;
}
