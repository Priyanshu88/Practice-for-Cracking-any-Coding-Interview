#include <bits/stdc++.h>
using namespace std;

// function for nth root 

int nthroot(int n, int m)
{
	// If the number is equal to 1
	// Simply return 1
	
   	if(m == 1)
	return 1;
	
	// int ans = 1;
	// Iterate with i to the power n till if it is less than or equal to m
	
	for(int i = 2;pow(i,n) <= m;i++)
	{
		
		// If i to the power n is equal to m
		// Return i else return -1 
		
		if(pow(i,n) == m)
		return i;
	} 
	return -1;
}


// function for nth root 

void nthRoot(int n,double m)
{
	
	// if m lies in [0,1]   
	
	double low ,high;
	if(m >= 0 && m <= 1)
	{
		
		// Set lower limit as m
		
		low = m;
	
		// Set upper limit as 1
	
		high = 1;
	} 
	else
	{
		
		// Otherwise lower limit as 1 and upper limit as m
		
		low = 1;
		high = m;
	}
	
	// Using for approximation
	// To get the as better accuracy
	// Correct upto 11 decimal places
	
	double epsilon = 0.00000000001;
	
	// Itermediate value property

	double guess = (low + high)/2;
	
	// If the absolute error of our guess is more than epsilon 
	
	while(abs((pow(guess,n)) - m) >= epsilon)
	{
		
		// If guess to the power n is greater than m the high = guess
		
		if(pow(guess,n) > m)
		{
			high = guess;
		}
		
		// Else low is equal to guess
		
		else
		{
			low = guess;
		}
		
		// Do the approximations utill you find the answer
		// 
		
		guess = (low+high)/2;
	}
	cout << fixed << setprecision(16) << guess;
}


int main()
{
	cout << nthroot(2,9) << endl;
 	nthRoot(2,9);
	return 0;
}


// T.C.: O(nlogm)
// S.C.: O(1)
