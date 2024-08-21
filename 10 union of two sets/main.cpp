#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //union of two arrays
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {6, 3, 8, 9, 5};
    int m=5,n=5;
    int C[m+n];
    int i=0,j=0,k=0;
    while (i<m && j<n)
    {
        if (A[i]==B[j])
        {
            C[k++]=A[i++];
            j++;
        }else if (A[i]<B[j])
        {
            C[k++]=A[i++];
        }else {
            C[k++]=B[j++];
        }
    }


    std::cout<<"Union have been found\n";
    for (int i = 0; i < (m+n); i++)
    {
        std::cout<<C[i]<<" ";
    }
    return 0;
}
