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



int main()
{
	cout << factorial(5);
	return 0;
}



// T.C. : O(n)
// S.C. : O(1)
