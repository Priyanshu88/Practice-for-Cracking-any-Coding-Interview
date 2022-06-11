#include <bits/stdc++.h>
using namespace std;

long long int reverse_digits(long long int n)
{

	int temp = n;
	int rev = 0;
	while(temp != 0)
	{
		
		// To find the last digit in each iteration
		
		int ld = temp % 10;
		
		// To reverse the digit from end
		
		rev = rev * 10 +ld;
		
		// Dropping the digits after every iteration
		
		temp = temp / 10;
	
	}
	
	// Returning after all computations
	
	return rev;
}




int main()
{
	cout << reverse_digits(122);
	return 0;
}
