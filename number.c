//Accept any two numbers, if the first number is greater than second then print the sum of these two numbers,
// otherwise print their difference. Write this program using ternary operator
#include<stdio.h>
int main(){
    int num1,num2,sum=1,def;
    printf("enter two numbers:  \n");
    scanf("%d%d",&num1,&num2);
    if(num1>=num2){
        sum=num1+num2;
        printf("the sum of two numbers is : %d\n",sum);
    }
    else{
        def=num1-num2;
        printf("diffr=erence the two number is : %d\n",def);
    }
    return 0;

}