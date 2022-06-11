#include <bits/stdc++.h>
using namespace std;

// To find the closest

int closestNumber(int n,int m)
{
    int n2;
    
    // To check the division 
	
	int q = n/m;
	
	// Exact number possiblities
	
	int n1 = m*q;
	
	// Afer and before the exact number possibilities
	
	if(n*m > 0)
		n2 = m*(q+1);	
	else
		n2 = m*(q-1);
	
	// To check if n1 is closest or n2
	
	if(abs(n-n1) < abs(n-n2))
	return n1;
	return n2;
}


int main()
{
	cout << closestNumber(-15,4);
	return 0;
}
