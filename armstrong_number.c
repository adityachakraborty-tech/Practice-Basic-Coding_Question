#include<stdio.h>
int main (){
    int n,cube,sum,rem,temp;
    printf("enter a number :" );
    scanf("%d",&n);
    temp=n;
    
        while(n>0){

        
            rem=n%10;
            n/=10;
            cube=rem*rem*rem;
            sum=sum+cube;
        }
        if(temp==sum)
            printf("armstrong number ");
        
        else
            printf("not armstrong");
        
    
    return 0;

}