#include<stdio.h>
int main(){
    int i,j,a[2][3],b[2][3],c[2][3];
    printf("enter the  elements of first matrix:  ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the  elements of second matrix:  ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
       printf("First matrix:  \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
       printf("second matrix:  \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]*b[i][j];
              printf("New matrix is =%d\t",c[i][j]);
        }
      //printf("\n");
    }
}