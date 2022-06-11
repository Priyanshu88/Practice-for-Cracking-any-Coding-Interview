#include <bits/stdc++.h>
using namespace std;

// Creating an array globally

long long a[10000000];

// function for rotating the array
// d  is the number of size of rotation and n is the size of array

void rotateArr(long long d,long long n)
{
	
	// reverse of array left till d
	
	reverse(a,a+d);
	
	// reverse of array from d to n 
	
	reverse(a+d,a+n);
	
	// reverse of whole array
	
	reverse(a,a+n);
}

// main code

int main()
{
	
	// Taking testcases as input 
	
	long long t;
	cin >> t;
	
	// for each testcase
	
	while(t--)
	{
		
		// Taking number of size of array and
		// Taking number of size of rotation as input
		
		long long n;
		long long d;
		cin >> n; 
		cin >> d;
		
		// Taking array elements as input
		
		for(long long i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		// rotating the array anti-clockwise with d elements
		
		rotateArr(d,n);
		
		// Printing the d rotated array
		
		for(int i=0;i<n;i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
