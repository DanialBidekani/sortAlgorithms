// this code is written by ---> danial bidekani :)
// in Sun Oct 30 2016

#include <iostream>
#include <cstdio>
#include <cstdlib> // for rand()
#include <ctime>

using namespace std;

// function declaration area
int partition(int[], int, int);
void quickSort(int[], int, int);
int randomizedPartition(int[], int, int);

int main()
{
    int n, *A;
    register int i;

    scanf("%d", &n);
    
    // build dynamic array
    A = new int[n];

    
    for(i=0; i<n; i++)
    	scanf("%d", &A[i]);
    
    // function call
    quickSort(A, 0, n-1);

    // print sorted array
   	for(i=0; i<n; i++)
   		printf("%d ", A[i]);
    
    printf("\n");
    delete []A;
    return 0;
}
//------------------------------------->>> quickSort(int[], int, int)
void quickSort(int A[], int p, int r)
{
	int q;
	if(p<r)
	{
		q = randomizedPartition(A, p, r);
		quickSort(A, p, q-1);
		quickSort(A, q+1, r);
	}
}
//----------------------------------->>> partition(int[], int, int)
int partition(int A[], int p, int r)
{
	int x = A[r];
	int i=-1, j;
	
	for(j=0; j<r; j++)
	{
        if(A[j] <= x)
		{
            i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	
	return i+1;
}
//----------------------------------->>> randPartition(int[], int, int)
int randomizedPartition(int A[], int p, int r)
{
    std::srand(std::time(0)); // use current time as seed for random generator
	int random = p+ rand()%(r-p+1);
	
	swap(A[r], A[random]);
	
	return partition(A, p, r);
	
}
