# include <stdio.h>
# include <stdlib.h>

int main()
{
    int prno,i,n,flg;
			printf("\n\n Find the Pronic Numbers between 1 to 1000: \n");
			printf(" -----------------------------------------------\n");
			printf(" The Pronic numbers are: \n");
 for(prno=1;prno<=1000;prno++)
 {
     flg=0;
    for(i=1;i<=prno;i++)
        {
            if(i*(i+1)==prno) 
            {
            flg=1;
            break;
            }
        }
            if(flg==1)
            {
			printf("%d ",prno);
            }
 }
            printf("\n");
}