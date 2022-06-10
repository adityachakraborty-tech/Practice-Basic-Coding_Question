#include<stdio.h>
int main(){
    int num,sum=0,rem;
    printf("enter the number  : "  );
    scanf(" %d{",&num);
    while(num>0){
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }
    printf("%d",sum);
    }