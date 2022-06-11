#include <bits/stdc++.h>
using namespace std;

// Check if n is perfect or not

bool isPerfect (long long int n)
{
	
	// Using to store the sum

	int sum = 1;
	
	// Iterate till n^1/2
	
	for(int i = 2;i*i<n;i++)
	{
		
		// Finding divisors and adding them
		
		if(n%i == 0)
		{
			sum = sum + i + n/i;
		}
		else
		{
			sum = sum + i;
		}
	}
	
	// If sum of divisors is equal to n then 
	// return true
	
	if(sum == n && n != 1)
	return true;
	return false;
}




int main()
{
	cout << isPerfect(6);
	return 0;
}


// T.C. : O(sqrt(n))
// S.C. : O(1)
