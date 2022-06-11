#include <bits/stdc++.h>
using namespace std;

// To sum the digits of n

int digitSum(int n)
{
	int sum = 0;
    while(n>0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

// To check if n is palindrome or not

bool isPalindrome(int n)
{
	// To find the appropriate divisor to extract the leading digit

	int divisor = 1;
    while(n/divisor >= 10)
    divisor = divisor*10;
    
    while(n != 0)
    {
    	int leading = n/divisor;
    	int trailing = n%10;
    	
		// If the first digit and last digit different return false
    	
    	if(leading != trailing)
    	return false;
    	
    	// Remove the leading and trailing digit from the number
    	
		n = (n%divisor) / 10;
    
		// Reducing the divisor for next iteration by 100 as 2 digits are removed 
	
		divisor = divisor/100;
	}
	return true;
}

// To check the palindrome output after digitSum

bool isSumofDigitisPalindrome(int n)
{
	int sum = digitSum(n);
	if(isPalindrome(sum))
	return true;
	return false;
}


int main()
{
	cout << (isSumofDigitisPalindrome(474));
	return 0;
}
