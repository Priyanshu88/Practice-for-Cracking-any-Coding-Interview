#include <bits/stdc++.h>
using namespace std;

// for finding the count of pairs of cuberoots 

int pairCubeCount(int n)
{
	
	// Intiliziing count as 0 
	
 	int count = 0; 
 	
 	// Iterating till less than cube root of n because while doing the cube 
	// we will skip cube elements 
	
	for (int i = 0;i*i*i<n;i++)
	{
		
		// Storing the cube of current found cube root element less than n
		
		int curcube = i*i*i;
		
		// Finding the difference of current cube root from n
		
		int diff = n - curcube;
		
		// Storing the cube root of difference for further comparision
		
		int cbrtdiff = cbrt(diff);
		
		// If the previous difference is equal to cube root of difference
		// Increment count 
	
		if(cbrtdiff*cbrtdiff*cbrtdiff == diff)
  		count++;
	}
	return count;
}


int main()
{
	cout << pairCubeCount(28);
	return 0;
}


// T.C. : O(cbrt(n))
// S.C. : O(1)
