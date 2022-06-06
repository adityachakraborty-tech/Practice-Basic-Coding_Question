#include<stdio.h>
int main(){
    int n,cube,sum,rem;
    printf("armstong numbers are : ");
    for(int num=100;num<=999;num++){
        n==num;
        sum=0;
        while(n>0){
            rem=n%10;
            n/=10;
            cube=rem*rem*rem;
            sum=sum+cube;
       }
       if(num==sum)
           printf("%d\n",num);
       

    }
    return 0;
} 