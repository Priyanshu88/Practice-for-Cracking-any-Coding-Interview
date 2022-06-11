#include <bits/stdc++.h>
using namespace std;

// Sieve Algorithm

void Sieve(int n)
{
	
	// Creating dynamic size array intialized as true
	
  	vector <int> isPrime(n+1,true);
  	
  	// Ignoring 1 for prime number, iterating from 2 to n
  	
	for (int i = 2;i <= n;i++)
	{
		
		// If isPrime true
		
		if(isPrime[i])
		{	
			cout << i << " ";
			
			// Update all multiple of i greater than or equal to 
			// the square root of it
			// numbers which are multiple of i and are less than i^2
			// are already marked
			
    		for (int j = i*i;j<=n;j=j+i)
    		
    		// Not prime, mark as false
    		
    		isPrime[j] = false;
		}
	}
}


int main()
{
	Sieve(35);
	return 0;
}

// T.C.: O(n*long(log(n)))
// S.C.: O(n)
