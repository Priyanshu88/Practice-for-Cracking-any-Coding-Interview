#include <bits/stdc++.h>
using namespace std;

// Function for finding prime numbers

bool isPrime(int n)
{
	
	// If n is less than or equal to 1
	// return false
	
	if(n<=1)
	return false;
	
	// Iterating till sqrt(n)
	
	for(int i=2;i*i<=n;i++)
	{
		
		// If it is divisible by i 
		// return false
		
		if(n%i == 0)
		return false;
	}
	
	// return true
	
	return true;
}

// Function for finding prime pair

void findPrimePair(int n)
{	

	// Dynamic size array for storing the pairs
	
	vector <int> res;
	
	// Iterating from 2 to n
	
	for(int i = 2;i<=n;i++)
	{
		
		// If isPrime is true
		
		if(isPrime(i))
		{
			
			// Iterating for the pairs (p,q) such that p*q<=n
			
			for (int j = 2;j<=n/i;j++)
			{
				
				// If j is prime
				
				if(isPrime(j))
				{
					
					// Store i in result
					
					res.push_back(i);
					cout << i << " ";
					
					// Store j in result
					
					res.push_back(j);
					cout << j << " ";
				}
			}
		}
	}
}

int main()
{
 	findPrimePair(8);
	return 0;
}


// T.C.: O(n^2(sqrt(n)))
// S.C.: O(1)
