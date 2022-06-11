#include <bits/stdc++.h>
using namespace std;

// Function for printing the alternate array
// a is the array and n is the size of array

void print (int a[],int n)
{
	
	// Travesing i from 0 to size and incrementing the value of i by 2 in each iteration
	
	for(int i = 0;i<n;i=i+2)
	{
		
		// Print the array
		
 	    cout << a[i] << endl;
 	}
}

// main code

int main()
{
    int a[] = {1,2,3,4,5,6,7,8};	
	print(a,8);
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
