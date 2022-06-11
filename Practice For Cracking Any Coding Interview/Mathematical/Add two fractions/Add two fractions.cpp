#include <bits/stdc++.h>
using namespace std;


// Using GCD to find common factor of num3 & den3
// Using GCD to find common factor of den1 & den2
// Euclidean Algorithm


int GCD(int a,int b)
{
	if(b==0)
	return a;
	else
	return GCD(b,a%b);
}


// Using lowest to compute the final value of num3/den3


void lowest(int &num3,int &den3)
{
	
	// Finding GCD to find common in both num3 & den3
	
	int common_factor = GCD(num3,den3);
	
	// Making simpler by dividing with the GCD 
	
	num3 = num3 / common_factor;
	
	// Making simpler by dividing with the GCD
	
	den3 = den3 / common_factor;
}



void addFractions(int num1, int den1, int num2, int den2,int &num3,int &den3)
{
	
	// For finding the LCM of den1 & den2 
	// Calculating the GCD
	
	den3 = GCD(den1,den2);
	
	// formula used : (a*b) = GCD(a*b) * LCM(a*b)
	
	den3 = (den1 * den2) / den3;
	
	// Changing the fractions to same denominator
	// Calculating it for num3 
	
	num3 = (num1)*(den3/den1) + (num2)*(den3/den2);
	
	// Using to get the simpler form of num3/den3	
	
	lowest(num3,den3);
}


int main()
{
	int num3,den3;
	
 	addFractions(1,500,2,500,num3,den3);
	
	cout << "Sum is:" << num3 << "/" << den3; 
	
	return 0;
}


// Way 2

int main()
{
	
	// Declaration of ratios 
	 
	typedef ratio <4,5> ratio1;
	typedef ratio <3,4> ratio2;
	
	// Sum of two ratios
	
	typedef ratio_add < ratio1, ratio2 > sum;
	cout << sum::num << "/" << sum::den;
	
	return 0;
}
