// this code is written by ---> danial bidekani :)
// in sun Oct 30 2016

#include <iostream>
#include <limits>
#include <cmath>
using namespace std;

void mergeSort(int[], int, int);
void merge(int[], int, int, int);

int main()
{
    int arr[4] = {4, 3, 1, 2};

    mergeSort(arr, 0, 3);

    for(int i =0; i<4; i++)
        cout<<arr[i]<<", ";

    return 0;
}

void mergeSort(int A[], int p, int r)
{
    int q;

    if(p<r)
    {
        q = floor((p+q)/2);
        mergeSort(A, p, q);
        mergeSort(A, q+1, r);
    }
}

void merge(int A[], int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    
    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
        L[i] = A[p+i-1];

    for(int j=0; j<n2; j++)
        R[j] = A[q+j];

    L[n1+1] = std::numeric_limits<int>infinity();
    R[n2+1] = std::numeric_limits<int>infinity();
    
    int i=0, j=0;

    for(int k=p; k<r; k++)
    {
        if(L[i]<R[i])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[i];
            j++;
        }
    }
}
