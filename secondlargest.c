#include<stdio.h>
int main(){
    int i,d,n;
    int l=0,sl=0;
    printf("enter the number : ");
    scanf("%d",&n);
    i=n;
    while(i>0){
        d=i%10;
        if(l<d){
            sl=l;
            l=d;
        }
        else if (d>=sl)
        {
            sl=d;
        }
        i=i/10;
        
    }
    printf("2nd largest number %d",sl);
    return 0;
}