#include<iostream>
using namespace std;

int main(){
float temp;
cout<<"Enter the temperature in fahrenheit : ";
cin>>temp;
temp=(temp-32)*(5.0/9.0);
cout<<"The temperature in Celsius is : "<<temp;
return 0;
}