#include <bits/stdc++.h>
using namespace std;
//#define ll long long

// Method 1

// Creating a structre to return two values
// In this structure min and max are declared

struct Pair
{
     int min;	
     int max;
};

// Function for getting min and max
// a is the array and n is the size of array

struct Pair getMinMax(long long a[],int n)
{
	
	// structure variable
	
	struct Pair minmax;
	long long int i;
	
	// If array has even number of elements
	
	if(n % 2 == 0)
	{
		
		// If a[0] is greater 
		
	 	if(a[0] > a[1])
 		{
 			
 			// then initialsing max as a[0]
 			
		 	minmax.max = a[0];
		 	
		 	// and min as a[1]
		 	
		 	minmax.min = a[1];
	     }
	     
	     // If a[1] is greater 
	     
	     else
	     {
	     	
	     	// then initialise min a[0]
	     	
	     	minmax.min = a[0];
	     	
	     	// and max as a[1]
	     	
	     	minmax.max = a[1];
		}
		
		// Setting the iteration starting from index 2 of array
		
		i = 2;
	}	
	
	// If array has odd number of elements
	
	else
	{
		
		// then initialise first element as minimum
		
		minmax.min = a[0];
		
		// and maximum
		
		minmax.max = a[0];
		
		// setting the starting index from 1
		
		i = 1;
	}
	
	// loop till size-1
	
	while(i < n-1)
	{
		
		// Taking elements in pair for comparision
		// If a[i] is greater
		
		if(a[i] > a[i+1])
		{
			
			// and if a[i] is greater than max of so far
			
			if(a[i] > minmax.max)
			{
				
				// assign max as a[i]
				
				minmax.max = a[i];
			}
			
		     // if a[i+1] is less than min of so far
			
			if(a[i+1] < minmax.min)
			{
				
				// assingn min as a[i+1]
				
				minmax.min = a[i+1];
			}
		}
		
		// else i.e if(a[i+1] > a[i])
		// if a[i+1] is greater
		
		else
		{
			
			// and if a[i+1] is greater than max of so far
			
			if(a[i+1] > minmax.max)
			{
				
				// assign max as a[i+1]
				
				minmax.max = a[i+1];
			}
			
			// if a[i] is less than min of so far 
			
			if(a[i] < minmax.min)
			{
				
				// assign min as a[i]
				
				minmax.min = a[i];
			}
		}
		
		// Incrementing the traversal index by 2 as 2 elements are already processed in loop
		
		i = i + 2;
	}
	return minmax;
}

// Method 2

//pair<long long,long long> getMinMa(long long a[],int n)
//{
//	long long mn = INT_MAX, mx = INT_MIN;
//	for(int i = 0;i<n;i++)
//	{
//		mn = min(a[i],mn);
//		mx = max(a[i],mx);
//	}
//	return {mn,mx};	
//}


// main code

int main()
{
	long long a[]= {1,345,234,21,56789};
	
	// For getting the pair of minmax
	
	Pair minmax = getMinMax(a,6);
	cout << minmax.min << endl;
	cout << minmax.max << endl;
	
//	pair<ll,ll> pp = getMinMa(a,6);
//	cout << pp.first << " " << pp.second << endl;

	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
