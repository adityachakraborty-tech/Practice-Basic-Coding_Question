//Accept any five digit number and print the value of remainder after dividing by 3
#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5,rem,num;
    printf(" enter the five digit number:  \n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    num=n1+n2+n3+n4+n5/3;
    rem=num%10;
    printf("now the value of reminder is : %d\n",rem);
    return 0;

}