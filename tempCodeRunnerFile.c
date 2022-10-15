#include<stdio.h>
int main()
{ int in,x,y,z;
 printf("Enter any three digit number here ");
 scanf("%d",&in);
 x=in/100;
 y=(in/10)%10;
 z=in%10;
 in=z*100+y*10+x;
    printf("Reversed number is %d",in);
    return 0;
}