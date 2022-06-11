#include <bits/stdc++.h>
using namespace std;

// Sieve of Eratosthenes Algorithm

int Sieve(int n)
{
	
	// Creating dynamic size array intialized as true
	
  	vector <int> isPrime(n+1,true);
  	
  	// Ignoring 1 for prime number, iterating from 2 to n
  	
	for (int i = 2;i <= n;i++)
	{
		
		// If isPrime true
		
		if(isPrime[i])
		{	
		
			// Update all multiple of i greater than or equal to 
			// the square root of it
			// numbers which are multiple of i and are less than i^2
			// are already marked
		
    		for (int j = i*i;j<=n;j=j+i)
    		
    		// Isprime as false
    		
    		isPrime[j] = false;
		}
	}
	
	// Initializing sum
	
	int sum = 0;
	
	// Traversing till n
	
	for (int i =2;i<=n;i++)
	
		// If isPrime true
	
		if(isPrime[i])
		
		// Sum with i and return sum
		
		sum = sum+i;
		return sum;
}



int main()
{
	cout << Sieve(5);
	return 0;
}


// T.C.: O(n(log(log(n))))
// S.C: O(n)
