#include <bits/stdc++.h>
using namespace std;

// There are sqrt(n) Perfect Squares between 1 and n.

int countSquares(int n)
{
 	int ans = sqrt(n-1);
 	return ans;
}


int main()
{
	cout << countSquares(17);
	return 0;
}


// T.C. : O(sqrt(n))
// S.C. : O(1)

