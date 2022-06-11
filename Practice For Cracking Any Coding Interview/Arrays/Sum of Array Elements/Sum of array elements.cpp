#include <bits/stdc++.h>
using namespace std;

// function for calculating the sum of array
// arr is the array and n is the size of array

int sumElement(int arr[],int n)
{
	// Initialising sum as 0
	
	int sum = 0;
	
	// Traversing till size-1
	
	for(int i=0;i<n;i++)
	{
		
		// summing with current element and storing in sum
		
		sum = sum+arr[i];
	}
	
	// returning sum
	
	return sum;
}

// main code

int main()
{
	int arr[] = {1,2,3,4};
	cout << sumElement(arr,4);
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
