/*Given Data is:
Basic pay =22,600
D.A. = 40% of basic pay
C.A. = 78% of bacis pay 
To find: Gross Salary*/
#include <stdio.h>
int main(){
    //variable b for basic pay
    float b=22600;
    //variable d for D.A.
    float d=(b*40)/100;
    //Note that b* (40/100) will not give the right result.
    //variable c for C.A.
    float c=(b*78)/100;
    //variable g for gross salary
    float g=b+d+c;
    printf("The Gross income of the employee is %f",g);
    return 0;
}