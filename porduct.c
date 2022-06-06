#include<stdio.h>
int main(){
    int n,rem,pro=1;
    printf("enter a number : ");
    scanf("%d",&n);
   while(n>0){
        rem=n%10;
          pro=pro*rem;
        n=n/10  ;
      
    }
    printf("%d",pro);
    return 0;
}