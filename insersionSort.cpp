/*
 * --------------------------------------------------
 * this program is written by me, Danial Atash
 * this program show you how you can write the
 * insertion sort in c++
 * Best case is (n)
 * Worst case is O(n^2)
 * Average case is (n^2)
 * ---------------------------------------------------
 */
#include <iostream>

using namespace std;

void insertionSort(int a[], int aLength)
{
	int c; // the counter
	int k; // index keeper
	int key;
	for(c=1; c < aLength; c++)
	{
		k = c;
		key = a[c];

		while( k>0  &&  key<a[k-1])
		{
			a[k] = a[k-1];
			k--;
		}// end while
		a[k] = key;
	}// end for
}
