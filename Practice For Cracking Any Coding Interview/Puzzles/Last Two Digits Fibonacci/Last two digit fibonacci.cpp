#include <bits/stdc++.h>
using namespace std;

// Function for calculating last twoo digit fibonacci

int fibonacciDigits(long long n)
{
	
	// Creating the dp array to prestore the value
	
	long long dp[300];
	
	// Storing the first value as 0 in dp array with reference to fibonacci numbers	
	dp[0] = 0;
	
	// Storing the second value as 1 in dp array with reference to fibonacci numbers
	
	dp[1] = 1;
	
	// Iterating from 2nd value till 300 because after that last two digit will start repeating
	
	for(int i=2;i<300;i++)
	
	{
		
		// Formula for fibonacci F(n) = F(n-1) + F(n-2) 
		// For very large value taking modulo with declared modulo value
		
		dp[i] = (dp[i-1] + dp[i-2])%100;	
	}
	
	// After 300th fibonacci number last two digits start repeating
	// so returning the same
		
	return dp[n%300];
}


int main()
{
	
	// Code for last two digits fibonacci
	
	cout << fibonacciDigits(365);
	return 0;
}


// T.C. : O(k = 300)
// S.C. : O(k = 300)
