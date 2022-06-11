#include <bits/stdc++.h>
using namespace std;


int kthdigit(int a, int b, int k)
{
	
	// Computing power
	
	int power = pow(a,b);
	
	int count = 0;
	
	// loop until power is greater then 0  and count is lass than k
	
	while(power > 0 && count < k)
	{
		
		// To get the last digit
		
		int rem = power % 10;

		// To have the kth count

		count++;
		
		// If count is equal to k 
		
		if(count == k)
		
		// return that digit from the iteration
		
		return rem;
		
		// Dropping last digit after every count < k
		
		power = power / 10;
	}
	return 0;
}

int main()
{
	cout << kthdigit(3,3,1);
	return 0;
}
