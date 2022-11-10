
#include<stdio.h>
void even(n){
    if(n==0)
        return;
  if(n%2==0)
  printf("%d ",n);
  even(n-1);


}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  even(n*2);
  return 0;
}
