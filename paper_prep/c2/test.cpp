#include<iostream>
using namespace std;


int main(int arg, char**args){

 for (int i =0 ;i<10;i++){
     cout<<*(args[i]);
 }

return 0;
}