#include <bits/stdc++.h>
using namespace std;

// Using to count the open doors

int countOpenDoors(int n)
{
	
	// The number of doors that have an odd no. of factors will remain open
	// So the numbers which is perfect squares having odd number of factor
	// i.e. in total number of doors that remain open from 1 to n will be number of perfect squares between 1 to N
	// i.e. square root of n
	
	int doorsOpen = sqrt(n);
	return doorsOpen;
}

int main()
{
 	cout << countOpenDoors(100);	
	return 0;
}


// T.C. : O(log(n))
// S.C. : O(1)
