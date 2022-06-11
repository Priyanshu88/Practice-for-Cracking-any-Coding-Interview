#include <bits/stdc++.h>
using namespace std;

// Checking if n is prime or not

bool isPrime (int n)
{
	for (int i=2;i*i<=n;i++)
	{
		if(n%i == 0)
		return false;
	}
	return true;
}

// for finding the exactly three divisors

int threeDivisors(int n)
{
	
	// Intializing count as 0
 	
 	int count = 0;
	
	// 
	
	for (int i = 2;i*i<=n;i++)
	{
		
		// Calcukating to find which are squares of prime numbers and less than or equal to the number
		
		if(isPrime(i))
		{
			if (i*i<=n)
			{
				// Counting if the condition satisfies
				
		        count++;
			}
		}
	}
	return count;
	
}


int main()
{

 	cout << threeDivisors(122);
	return 0;
}


// T.C. : O(n)
// S.C. : O(1)
