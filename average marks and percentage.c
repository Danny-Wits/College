#include <stdio.h>
int main()
{  float m,e,s,h,u,c,sum,avg,per;
   printf("Please enter all your marks out of hundred." 
   "Now enter your marks in Mathametics  here: ");  
   scanf("%f",&m);
   printf("Enter your marks in English here: ");
   scanf("%f",&e);
   printf("Enter your marks in Science here: ");
   scanf("%f",&s);
   printf("Enter your marks in Hindi here: ");
   scanf("%f",&h);
   printf("Enter your marks in Urdu here: ");
   scanf("%f",&u);
   printf("Enter your marks in Computer Science here: ");
   scanf("%f",&c);
   sum=m+e+s+h+u+c;
   avg=sum/6;
   per=(sum/600)*100;
   /*if the marks are entered out of hundred 
    average (avg) will be equal to the 
    percentage but in other situtions 
    per varible will be required*/
   printf("Your average marks are %f and your percentage is %f",avg,per); 
   return 0;
}

