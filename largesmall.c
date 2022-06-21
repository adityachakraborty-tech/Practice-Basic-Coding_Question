#include<stdio.h>
int main(){
    int arr[5];
    int small,large,i;
    small=large=arr[0];
    for(i=0;i<5;i++){
        printf("enter the elements arr[%d]:   ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]>large)
        large=arr[i];
        if(arr[i]<small)
        small=arr[i];
    }
    printf("largeest= %d , smallest =%d ",large , small);
    return 0;
}