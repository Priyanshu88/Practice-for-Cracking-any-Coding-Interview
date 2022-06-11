#include <bits/stdc++.h>
using namespace std;

// Calculating GCD by Euclidean Algorithm

int GCD(int a, int b)
{
	if(b == 0)
	return a;
	return GCD(b,a%b);
}

// Function to find the GCD of array
// Input array and array size

int GCDofArray(int arr[],int n)
{
	
	// Storing the GCD of first element of array   
	
	int result = arr[0];
	
	// For finding in all the elements 
	
	for(int i = 1;i<n;i++)
	{
		
		// GCDs of pairs of number from 0th element
		
		result = GCD(arr[i],result);
		
		// if it becomes 1 at any stage 
		// return 1
		
		if(result == 1)
		{
			return 1;
		}
	}
	return result;
}



int main()
{
	int arr[] = {2,4,6,8,16};
	
	// Finding the size of array
	
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << GCDofArray(arr,n) << endl;
	return 0;
}

