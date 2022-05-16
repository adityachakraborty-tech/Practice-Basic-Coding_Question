/*P5.4 Program to find largest number from three given numbers*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three number:  \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        printf("b is the largest number");

    }
    else if(b>c){
        printf("c is the largest number");
    }
    else{
        printf("a is the largest number");
    }
    return 0;

}