#include <bits/stdc++.h>
using namespace std;

// This function will not work for higher values of n
// It causes overflow for bigger values of n
// function to count trailing zeros

int countTrailingzeros(int n)
{
	
	//
	
	int fact = 1;
	
	for (int i = 2;i<=n;i++)
	
		fact = fact*i;
	
	int res = 0;
	
	
	
	while(fact % 10==0)
	
	
	
	{
	
	
		res++;
	
	
		fact = fact/10;
	}
	
	
	return res;
}



int main()
{
	cout << countTrailingzeros(10);
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)


// Better Approach 
// We count the prime factors 2 and 5 as It's multiplication produces 0

int countzeros(int n)
{
	
	// Intializing result as 0
	
	int res = 0;
	
	// To remove extras 5s we jump i*5
	// Case :- As in 28! 0s are 6
	
	for (int i = 5;i<=n;i=i*5)
	
	// Dividing to extra 5 and updating with count in each iteration
	
		res = res+n/i;
		
	// Return result
		
	return res;
}


int main()
{
	
	cout << countzeros(100);
	return 0;
}

// T.C. : O(log5(n))  log of n base 5
// S.C. : O(1)
