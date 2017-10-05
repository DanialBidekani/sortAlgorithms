// this program is written by danial atash
// and implement selection sort

#include <iostream>

using namespace std;

int main()
{
	register int i, j; // counters
	int temp, index;
	int *A; //array
	int len; // array length

	// recieve array length
	cout<<"Enter Your Array Length:\n";
	cin>>len;

	//make array
	A = new int[len];
	cout<<"Enter Numbers To Array:\t";
	for(i=0; i<len; i++)
		cin>>A[i];

	for(i=0; i<len-1; i++)
	{
		index = i;
		for(j=i+1; j<len; j++)
		{
			if(A[index] > A[j])
				index = j;
		}
		temp = A[index];
		A[index] = A[i];
		A[i] = temp;
	}

	//print
	for(i=0; i<len; i++)
		cout<<A[i]<<"\t";
}
