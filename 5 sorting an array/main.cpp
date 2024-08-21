#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
  int arr[10]={6,7,1,2,3,8,9,10,4,5};
  int size=sizeof(arr)/sizeof(arr[0]);
  //for sorting an array we can simply use the sort function
  sort(arr,arr+size);
  cout<<"array has been sorted\n";
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
    

  return 0;
}
