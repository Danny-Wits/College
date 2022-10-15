#include<stdio.h>

int main(){
   int in1,in2,in3,hcf1=1,hcf2=1;
    printf("Enter the first number here: ");
    scanf("%d",&in1);
    printf("Enter the 2nd number here: ");
    scanf("%d",&in2);
    printf("Enter the 3nd number here: ");
    scanf("%d",&in3);
    for(int n=2;n<=in1||n<=in2;n++) 
     { if (in1%n==0){
        if (in2%n==0){
            hcf1=n;
        }}}
    in1 =(in1*in2)/hcf1;

     for(int n=2;n<=in1||n<=in3;n++) 
     { if (in1%n==0){
        if (in3%n==0){
            hcf2=n;
        }}}
      int LCM = (in1*in3)/hcf2;
    printf("LCM of the entered numbers is %d",LCM);
    return 0;

}