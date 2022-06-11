#include <bits/stdc++.h>
using namespace std;

// Function for counting squares in a matrix

long long squaresInMatrix(int m,int n)
{
	
	// If n is less than m
	
     if(n < m)
     
     // Swappong m with n because the below formula is applicable only for m <= n
     
     swap(m,n);
     
     // for m==n the pattern we found for squares is m*(m+1)*(2m+1)/6 as (m<n) and for m<n the pattern we found for squares is (n-m)*m*(m+1)/2
     // To avoid overflow typecasting with long long
     
     long long ans = (long long)m*(long long)(m+1)*(long long)(2*m + 1)/6 + (long long)(n-m)*(long long)m*(long long)(m+1)/2;
     
     // Return answer
     
	return ans;
}



int main()
{
	
	// compile for squares in matrix
	
	cout << squaresInMatrix(2,2);
	return 0;
}


// T.C. : O(1)
// S.C. : O(1)
