#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int size=sizeof(arr)/sizeof(arr[0]);
  //to insert in a sorted array we first take an index as a input
  cout<<"Enter the index where you want to insert the element\n";
  int index, element;
  cin>>index;
  cout<<"Enter the element you want to insert\n";
  cin>>element;
  //now i have to create an array larger than previous array
  int arr2[size+1];

  for (int i = 0; i < index; i++)
  {
    arr2[i]=arr[i];
  }
  
  arr2[index]=element;
  
  for (int i = index; i < size; i++)
  {
    arr2[i+1]=arr[i];
  }
  
  cout<<"element has been inserted\n";
  
  for (int i = 0; i < size+1; i++)
  {
    cout<<arr2[i]<<" ";
  }
  return 0;
}
