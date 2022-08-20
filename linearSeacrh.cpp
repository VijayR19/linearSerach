#include <iostream>
using namespace std;

int linearSerach(int arr[],int size,int element){
  for(int i{0};i<size;i++){
    if(arr[i]==element){
      return i; //index where i is located
      }
  }
  return -1; //if the element is not found 
}

int main() {
        //remeber linearsearch works in sorted or unsorted array;

  int myArray[]={12,6,30,50,1,120,19,78,20};
  // cout<<sizeof(myArray)<<endl; //9*4=36
  // cout<<sizeof(int);//4
  int size = sizeof(myArray)/sizeof(int); //9
  int element=50; //3
  int findIndex = linearSerach(myArray,size, element);
  cout<<"your value is at index: "<<findIndex<<endl;

  return 0;
} 