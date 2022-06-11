#include <bits/stdc++.h>
using namespace std;

// Using to find triangular number

bool triangularNum(int n)
{
	
	// Number i for n will be from number of n natural numbers
	// i^2*i = 2*n
	// For floor value calculation
	
	int i = sqrt(2*n);
	
	// Comparing the value of i*(i+1) with 2*n : from sum of n natural  numbers
	
	if((i*(i+1)) == 2*n)
	
	// If true return true
	
	return true;
	
	// Otherwise false
	
	return false;
}



int main()
{
	cout << triangularNum(55);
	return 0;
}



// T.C. : O(log(n))
// S.C. : O(1)
