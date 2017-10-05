// this program is written by ---> danial bidekani
// in Apr 12  2015 and it implements the Counting Sort
// by time complexity in O(n+k)
#include <iostream>

using namespace std;

void countingSort(int A[], int n)
{
	int i;
	int Max = A[0];
	int *B, *C;

	//find max number in array

	for(i=1; i<n; i++)
	{
		if(A[i]>Max)
			Max = A[i];
	}

	//define array that length is max

	B = new int[Max+1];

	//set zero all of B array

	for(i=0; i<=Max; i++)
		B[i]=0;

	//
	for(i=0; i<n; i++)
		B[A[i]]++;
	//
	for(i=1; i<=Max; i++)
		B[i] = B[i]+B[i-1];

	//make a new array for save sorted array

	C = new int[n];

	for(i=n-1; i>=0; i--)
	{
		C[ B[ A[i]]-1] = A[i];
		B[A[i]]--;
	}

	//put C in A and delete C

	for(int i=0; i<n; i++)
		A[i] = C[i];
}
