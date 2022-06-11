#include <bits/stdc++.h>
using namespace std;

// Function for prime number

bool isPrime(int n)
{
	
	// if the n is 1 then return false
	
	if(n == 1)
	return false;
	
	// If n is 2 or 3 then return true
	
	if(n == 2 || n == 3)
	return true;
	
	// If n is divisible by 2 or 3 return false
	
	if(n % 2==0 || n % 3==0)
	return false;
	
	// Iterating till sqrt(n)
	
	for (int i = 5;i*i<=n;i++)
	{
		
		// Simple prime finding step
		// If it is divisible return false
		
		if(n%i == 0 || n % (i+2) == 0)
		return false;
	}
	
	// If not false then return true
	
	return true;
}


int main()
{
	cout << isPrime(25);
	return 0;
}

// T.C.: O(sqrt(n))
// S.C.: O(1)
