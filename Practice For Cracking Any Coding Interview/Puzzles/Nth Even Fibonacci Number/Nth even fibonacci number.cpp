#include <bits/stdc++.h>
using namespace std;

// Function for nth even fibonacci

long long int nthEvenFibonacci(long long int n)
{
	
	// Since the answer can be very large
	// So returning answer modulo 1000000007
	
	const long long int modulo = 1e9+7;
	
	// Every upcoming 3rd number will be even in fibonacci series
	
 	n = n*3;
	
	// Creating the dp array to prestore the value
	
	long long int dp[n+5];
	
	// Storing the first value as 0 in dp array with reference to fibonacci numbers
	
	dp[0] = 0;
	
	// Storing the second value as 1 in dp array with reference to fibonacci numbers
	
	dp[1] = 1;
	
	// Iterating from 2nd value till n*3
	
	for(int i=2;i<=n;i++)
	
	{
		
		// Formula for fibonacci F(n) = F(n-1) + F(n-2) 
		// For very large value taking modulo with declared modulo value
		
		dp[i] = (dp[i-1]%modulo + dp[i-2]%modulo)%modulo;
	}
	
	// Returning the value of n*3 of dp array
	
	return dp[n];
}


int main()
{
	
	// code for nth even fibonacci
	
	cout << nthEvenFibonacci (345);
	return 0;
}


// T.C. : O(n) 
// S.C. : O(n)
