#include <stdio.h>
int main(){
float in;
printf("Please enter the temperature you want to convert from Celsius to Fahrenheit here: ");
scanf("%f",&in);
in= (in*9/5)+32;
printf("The temperature you entered will be %f in Fahrenheit",in);
return 0;
}
