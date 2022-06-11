#include <bits/stdc++.h>
using namespace std;

// Function for searching the element
// a[] is array, n is the size and x is the key element to be searched

int searchEle(int a[],int n,int x)
{
	
	// Iterating from 0 to n-1
	
	for(int i=0;i<n;i++)
	{
		
		// If the element is found 
		
		if(a[i] == x)
		
		// return the index of the element
		
		return i;
	}
	
	// Otherwise return -1
	
	return -1;
}

// Function for inserting the element
// a is the array, n is the size of array, y is the key element to be inserted 
// yi is the position of y element and cap is the capacity of array

int insertEle(int a[],int n,int y,int yi,int cap)
{
	
	// if the size is greater than or equal to capacity 
	
	if(n >= cap)
	{
		
		// return size of array
		
		return n;
	}
	
	// To make the position of y element according to array
	
	int index = yi-1;
	
	// Traversing from end to index we can do in either way
	
	for(int i=n-1;i>=index;i--)
	{
		
		// Moving one place forward to the elements from index
		
	 	a[i+1] = a[i];
	 	
	 	// Storing the element on index position
		
		a[index] = y;
	}
	
	// return the inserted element
	
	return a[yi];
}


// Function for deleting the element form array
// a is the array, n is the size and z is the element to be deleted

int deleteEle(int a[],int n,int z)
{
	
	// Initialising i with 0
	
	int i;
	
	// Traversing from 0 to n-1
	
	for(int i = 0;i<n;i++)
	{
		
		// If array element is same as given element
		
          if (a[i] == z)
		{
			
			// break the loop
			
			break;
		}
	}
	
	// if the index is equal to size of array
	
	if(i < n)
	{
	 	// Traversing from ith position to reduced size array as it we will get after deleting	
		
		for(int j = i;j < n-1;j++)
		{
		
	          // Moving all elements on space ahead
		
		     a[j] = a[j+1];
		}
	}
	return n;
}

// main code

int main()
{
	int a[] = {1,2,3,7,4,5,6,8,9};
	cout << searchEle(a,9,7) << endl;
	cout << insertEle(a,9,12,4,12) << endl;
	cout << deleteEle(a,9,7) << endl;
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
