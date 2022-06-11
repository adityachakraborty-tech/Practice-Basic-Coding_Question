#include<stdio.h>
int ispronic (int n){
    int i;
    for(i=1;i<=n/2;i++)
    {
        if(i*(i+1)==n);
        return 1;
    }
    return 0;
}
void main(){
    int n,r;
    printf("enter a number :  ");
    scanf("%d",&n);
    n=n+1;
    while(1){
        r=ispronic(n);
        if(r==1)
        {
            printf("%d",n);
            break;
        }
   
    }
         n=n+1;
}