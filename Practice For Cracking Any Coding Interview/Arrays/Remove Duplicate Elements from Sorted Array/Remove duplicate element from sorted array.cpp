#include <bits/stdc++.h>
using namespace std;

// Function for removing duplicate elements

int remove_duplicates(int arr[],int n)
{
	
	// Initialising res as 1
	
	int res = 1;
	
	// traversing from index 1 to n-1
	
	for(int i=1;i<n;i++)
	{
		
		// If array element of ith index is not equal to (i-1)th index
		
		if(arr[i] != arr[res-1])
		{
			
			// assign the ith size array elements to the result size array in place
			
			arr[res] = arr[i];
			
			// Incrementing the result in each iteration
			
			res++;
		}
	}
	
	// returning the result
	
	return res;
}

// main code

int main()
{
	int arr[] = {1, 2, 2};
	cout << remove_duplicates(arr,3);
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
