#include<stdio.h>
int main(){
    int n,notes,choice;
    printf("enter the amount :  ");
    scanf("%d",&n);
    printf("enter the notes we need :  ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 100:
    notes=n/100;
    printf(" number of 100 notes : = %d",notes);
        n=n%100;
         break;
    case 50:
    notes=n/50;
    printf(" number of 50 notes : = %d",notes);
        n=n%50;
         break;
    
    case 20:
    notes=n/20;
    printf(" number of 20 notes : = %d",notes);
        n=n%20;
         break;

    case 10:
    notes=n/10;
    printf(" number of 10 notes : = %d",notes);
        n=n%10;
         break;

    case 5:
    notes=n/5;
    printf(" number of 5 notes : = %d",notes);
        n=n%5;
         break;

    case 2:
    notes=n/2;
    printf(" number of 2 notes : = %d",notes);
        n=n%2;
         break;

    case 1:
    notes=n/1;
    printf(" number of 1 notes : = %d",notes);
        n=n%1;
         break;

       
    
    default:
    printf("enter only valid values");
        break;
    }
}