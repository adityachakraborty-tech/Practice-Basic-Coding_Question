//Write a program'to accept the principal, rate, and number of years and find out the simple interest
#include<stdio.h>
int main(){
    int si,p,r,t;
    printf("enter the principal:  ");
    scanf("%d",&p);
    printf("enter the rate of amount: ");
    scanf("%d",&r);
    printf("enter the year : ");
    scanf("%d",&t);
    si=p*t*r/100;
    printf("now simple interest is : %d ",si);
    return 0;
}