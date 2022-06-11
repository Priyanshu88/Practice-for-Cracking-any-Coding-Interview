#include <bits/stdc++.h>
using namespace std;

//Way 1
// Function for reverse of array
// arr[] is the Array ana n is the size

void reverse(int arr[],int n)
{
	
	// Intialsing low as and high as last element 
	
	int low = 0;int high = n-1;
	
	// Traversing till low is less than high
	
	while(low<high)
	{
		
		// Storing current low elements in temp
		
		int temp = arr[low];
		
		// Assigning high elements on the place of low elements
		// basically swapping
		
		arr[low] = arr[high];
		
		// then replacing high elements with low elements
		
		arr[high] = temp;
		
		// Incrementing low for each step
		
		low++;
		
		// Decrementing high for each step
		
		high--;
	}
	
	// For printing reversed the array 
	
	for(int i=0;i<n;i++)
	
	// printing it
	
	cout << arr[i] << " ";
}

// main code

int main()
{
	
	int arr[] = {1,2,3,4,5,6,7,7,3,8,1,0,7,9,3,8,3,1,0,3,9,7,9,3,4,7,2,9};
	reverse(arr,28);
	return 0;
}

// Way 2

int main()
{
    	
	// Taking t testcases as input    
	    	
	int t;
	cin >> t;
	
	// For each testcase
	
	while(t--)
	{
		
		// Taking size of array as input
		
		int n;
		cin >> n;
		
		// Decalring the array of size n
		
		int arr[n];
		
		// Taking input of array elements 
		
		for (int i=0;i<n;i++)
		{
			cin >> arr[i] << " ";
		}
		
		// Printing the elements from end of the array
		
		for (int i=n-1;i>=0;i--)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
