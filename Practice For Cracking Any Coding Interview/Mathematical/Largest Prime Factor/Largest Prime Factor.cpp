#include <bits/stdc++.h>
using namespace std;

long long maxPrimefactor(long long n)
{
	// Intializing the maximum prime value
	
	long long maxPrime = 1;
	
	// if the values are less than 1
	
	if(n < 1) 
	return -1;
	
	// if the value is divided by 2
	// then store it and do sucessive divisions with 2
	
	while(n % 2 == 0)
	{
		maxPrime = 2;
		n = n/2;
	}
	
	// if the value is divided by 3
	// then store it and do sucessive divisions with 3
	
	while(n % 3 == 0)
	{
		maxPrime = 3;
		n = n/3;
	}
	
	// Iterating for the values which does not have prime factor after 2 or 3
	// Skipping the iteration for optimzation
	
	for(int i = 5;i*i<=n;i=i+6)
	{
		while(n % i == 0)
		{
			maxPrime = i;
			n = n/i;
		}
		while(n % (i+2) == 0)
		{
			maxPrime = i+2;
			n = n/(i+2);
		}
	}
	
	// if the prime is greater than 3
	// storing it to maxPrime
	
	if(n > 3)
	maxPrime = n;
	return maxPrime;
}


int main()
{
	cout << maxPrimefactor(0);
	return 0;
}


// T.C. : O(sqrt(n))
// S.C. : O(1)
