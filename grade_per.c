 #include<stdio.h>
 int main(){
     float s1,s2,s3,s4,total,per;
     char grade;
     printf("enter four subject number :  ");
     scanf("%f%f%f%f",&s1,&s2,&s3,&s4);
     total=s1+s2+s3+s4;
     per=total/4; 
     if(per>=85){
         printf("grade A ");

     }
      else if(per>=70){
         printf("grade B ");
     }
     else if(per>=55){
         printf("grade C ");
     }
      if(per<40){
         printf("grade D ");
     }
     printf ( "Percentage is %f\nGrade is %c\n", per, grade);
     return 0;

 }