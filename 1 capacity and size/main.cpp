#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  //here we are checking the capacity and size of an vector array
  //and increasing the size of it without losing our previous elements and
  //initializing new one
  //but the fact here is when we increase its size there is already data 
  //present in that 
  vector <int> myVec={1,2,3};
  myVec.reserve(10);
  cout<<"Capacity(holdable size) of my Vector myVec is "<<myVec.capacity() ;
  cout<<"\nLength(no. of elements) of my Vector myVec is "<<myVec.size() ;

  cout << "\nElements in myVector: ";
  for (size_t i=0; i<myVec.size();i++ ) {
    cout << " "<< myVec[i];
  }
  // myVec.push_back(4);
  // cout << "\nElements in myVector now are: ";
  // for (size_t i=0; i<myVec.size();i++ ) {
  //   cout << " "<< myVec[i];
  // }
  return 0;
}
