#include <bits/stdc++.h>
using namespace std;

// Using calculation of GCD by euclidean algorithm

int GCD(int a, int b)
{
	if(b == 0)
	return a;
	return GCD(b,a%b);
}

// Simple formula if we now HCF or GCD let a = 12, b = 15
// a*b = 180 and GCD(a,b) = 3
// LCM = 180/3

int LCM(int a, int b)
{
	return (a*b)/GCD(a,b);
}

int main()
{
	cout << LCM(12,15);
	return 0;
}
