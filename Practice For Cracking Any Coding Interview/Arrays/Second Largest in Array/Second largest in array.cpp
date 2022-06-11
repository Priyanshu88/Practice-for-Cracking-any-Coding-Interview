#include <bits/stdc++.h>
using namespace std;

// Function for second largest

int print2largest(int arr[],int n)
{
	
	// Declaring i and for first & second 
	
	int i,first,second;
	
	// If the elements are less than 2
	
	if(n < 2)
	{
		
		// return -1
		
		return -1;
	}
	
	// Initialising first and second as minimum
	
	first = second = INT_MIN;
	
	// Traversing till n-1
	
	for(i = 0;i<n;i++)
	{
		
		// If current element is greater than first largest 
		
		if(arr[i] > first)
		{
			
			// store first largest in second largest
			
			second = first;
			
			// and also store current element in first largest
			
			first = arr[i];
		}
		
		// if current element is greater than second largest and
		// current element is not the first largest 
		
		else if(arr[i] > second && arr[i] != first)
		{
			
			// Update second largest as current element
			
			second = arr[i];
		}
	}
	
	// If seond largest is minimum only
	
	if(second == INT_MIN)
	{
		
		// return -1
		
	 	return -1;
	}
	
	// Otherwise
	
	else
	{
		
		// return second element
		
	     return second;
	}
}

// main code

int main()
{
	int arr[] = {10,5,10};
	cout << print2largest(arr,3);
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
