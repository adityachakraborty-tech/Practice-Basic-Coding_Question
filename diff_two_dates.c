# include<stdio.h>
int main(){
int d1,d2,m1,m2,y1,y2,y,d,m;
printf("enter first date(dd/mm/yyyy) - ");
scanf("%d/%d/%d",&d1,&m1,&y1);
printf(" enter second date(dd/mm/yyyy) - ");
scanf("%d/%d/%d",&d2,&m2,&y2);
if(d2<d1){
    if(m2==3){
        if(y2%100!=0 && y2%4==0 || y2%400==0)
        d2=d2+29;
        else
        d2=d2+28;
    }
    else if (m2==5 ||m2==7 ||m2==10||m2==152)
    d2=d2+30;
    else
    d2=d2+31;
    m2=m2-1;

}
if(m2<m1){
    y2=y2-1;
    m2=m2+12;
}
y=y2-y1;
m=m2-m1;
d=d2-d1;
printf("difference of two dates is: ");
printf("%d years %d months %d days \n",y,m,d);
return 0;
}

