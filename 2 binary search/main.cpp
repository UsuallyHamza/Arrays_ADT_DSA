#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  //binary search
  int arr[]={5,2,1,2,2,3,2,4,2,3};
  //firstly sort the array as it is needed in binary search
  //so we will use the sort func
  //for using sort, first we need the size of array
  int size=sizeof(arr)/sizeof(arr[0]);
  cout<<"The no. of elements in array are "<<size<<endl;
  sort(arr, arr+size);
  //array has been sorted out
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  //now implementing binary search
  // we need four variables for it
  int low=0,mid,high=size-1,key;
  bool found=false;
  cout<<"enter the element you want to find\n";
  cin>>key;
  while (low<=high)
  {
    mid=(low+high)/2;
    if (arr[mid]==key)
    {
      found=true;
      break;
    }else if (arr[mid]<key)
    {
      low=mid+1;
    }else
    {
      high=mid-1;
    }
  }
  if (found==true)
  {
    cout<<"key found at index"<<mid<<endl;
  }else {
    cout<<"key not found in the array"<<endl;
  }
  
  return 0;
}
