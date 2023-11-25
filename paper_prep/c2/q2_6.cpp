#include<iostream>
using namespace std;

class temp {
float value;
public:
  temp(float value){
  this->value=value;
  }   
  float to_celsius(){
   value-=32;
   value*=(5.0/9.0);
   return value  ;
  } 
};
int main(){

float temperature;
cout<<"Enter the temperature in fahrenheit : ";
cin>>temperature;
temp t1(temperature);
cout<<"The temperature in Celsius is : "<<t1.to_celsius();

return 0;
}