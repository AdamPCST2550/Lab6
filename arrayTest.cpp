#include <iostream>
#include <array>
using namespace std;

void print_Array (int numArray[], int arraySize); 

int main(){

  int arr[3] = {1, 2, 3};
  int size = sizeof(arr)/sizeof(int);
 

  print_Array(arr, size);
  
  return 0;
}

void  print_Array(int numArray[], int arraySize){

 
  cout << "[";

  for(int i = 0; i< arraySize; i++){
    
    cout  << numArray[i];

    if(i<=1){
      cout << ", ";
    }
  }

  cout << "]";
}
