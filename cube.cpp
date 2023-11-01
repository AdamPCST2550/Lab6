#include <iostream>
using namespace std;

int cubeNumber(int number); 

int main(){

  int x;
  
  cout<<"Enter an integer\n>>";
  cin>> x;  

  cout<<x << " cubed is " << cubeNumber(x);
  
  return 0;
}

int cubeNumber(int number){

  return (number * number) * number;  
}
