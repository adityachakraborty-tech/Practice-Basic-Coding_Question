#include<stdio.h>
int main(){
    int n,i,sum=0,term=1;
    printf("enter numbers of terms:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+term;
        term=term+i;
    }
    printf("the sum of series upto %d term is %d\n",n,sum);
    return 0;
}