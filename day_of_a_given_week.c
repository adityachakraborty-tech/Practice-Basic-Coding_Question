#include<stdio.h>
int main(){
    int d,m,y,j,f,h,fh,day;
    printf("enter the date(dd/mm/yyyy):  ");
    scanf("%d/%d/%d",&d,&m,&y);
    j=d;
    switch(m-1){
        case 11 : 
        j+=30;
        case 10 : 
        j+=31;
        case 9 : 
        j+=30;
        case 8 : 
        j+=31;
        case 7 : 
        j+=31;
        case 6 : 
        j+=30;
        case 5 : 
        j+=31;
        case 4 : 
        j+=30;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
        case 3 : 
        j+=31;
        case 2 : 
        j+=28;
        case 1 : 
        j+=31;
    }
    if(y%100!=0 && y%4==0 || y%400==0)
    if(m>2)
    j=j+1;
    f=(y-1)/4;
    h=(y-1)/100;
    fh=(y-1)/400;
    day=(y+j+f-h+fh)%7;
    switch(day){
    
     case 1:
      printf("sunday\n");
      break;
      case 2:
       printf("mondaY\n");
       break;
       case 3: 
       printf("TUESDASY\n");
        break;
        case 4: 
        printf("WEDNESDAY\n");
         break;
         case 5:
          printf("THURSDAY\n");
          break;
          case 6:
           printf("FRIDAY\n");
           break;
           case 7: 
            printf("saturday\n");
            break;
    }
return 0;
}