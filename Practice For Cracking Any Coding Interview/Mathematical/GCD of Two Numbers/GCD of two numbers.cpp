#include <bits/stdc++.h>
using namespace std;

// Euclidean Algorithms

int GCD(int a,int b)
{
	
	// Loop till a is not equal to b
	
	while(a != b)
	{
		// Simple Computation as required for find HCF
		
		if(a > b)
		
		// Reducing larger number 
		
		a = a-b;
		else
		b = b-a;
	}
	return a;
	
}

// Instead of doing repeated subtraction we can do modular division 

int GCD1(int a,int b)
{
	if(b==0)
	return a;
	else
	return GCD(b,a%b);
}

// Extended euclidean algorithm
// Recursive version

int gcd(int a, int b, int& x, int& y) 
{
    if (b == 0) 
	{
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

// Extended euclidean algorithm
// Iterative version

int gcd1(int a, int b, int& x, int& y) 
{
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) 
	{
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}



int main()
{
	cout << GCD(12,15) << endl;
	cout << GCD(10,15);
	return 0;
}
