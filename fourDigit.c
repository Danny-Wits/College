#include <stdio.h>
int main()
{  int in,r1,r2,r3;
   printf("Enter the four digit no. here: ");
   scanf("%d",&in);
   r1=in%10;
   in=in/10;
   r2=in%10;
   in=in/10;
   r3=in%10;
   in=in/10;
   in=in+r1+r2+r3;
   printf("The sum of the digits is %d.",in);
    return 0;
}