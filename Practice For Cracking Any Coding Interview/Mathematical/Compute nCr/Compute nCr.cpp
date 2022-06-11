#include <bits/stdc++.h>
using namespace std;

int factorial (int n)
{
	// initilization 
	
	int fact = 1;
	for (int i = 2;i<=n;i++)
	{
		
		// multiplying with the loop values
		
		fact = fact*i;
	}
	return fact;
}


int nCr(int n,int r)
{
	
	// formula : nCr = n! / (r)! (n-r)!
	
	int result = (factorial (n))/(factorial(r)*factorial((n-r)));
	return result;
}


int main()
{
	cout << nCr(7,4);
	return 0;
}

// T.C. : O(n)
// S.C. : O(1)
