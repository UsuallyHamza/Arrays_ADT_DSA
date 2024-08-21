#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //merging two arrays into one 
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {6, 7, 8, 9, 10};
    int m=5,n=5;
    int C[m+n];
    int i=0,j=0,k=0;
    while (i<m && j<n)
    {
        if (A[i]<B[j])
        {
            C[k++]=A[i++];
        } else {
            C[k++]=B[j++];
        }
    }
    //copying remaining elements of A if any
    while (i < m)
    {
        C[k++]=A[i++];
    }
    //copying remaining elements of B if any
    while (j < n)
    {
        C[k++]=B[j++];
    }
    cout<<"Arrays has been merged\n";
    for (int i = 0; i < (m+n); i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}
