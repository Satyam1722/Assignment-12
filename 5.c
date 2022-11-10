#include<stdio.h>
void even(n){
    if(n==0)
        return;
  even(n-1);
  if(n%2==0)
  printf("%d ",n);

}

int main(){
  int n;
  printf("enter the number : ");
  scanf("%d",&n);
  even(n*2);
  return 0;
}
