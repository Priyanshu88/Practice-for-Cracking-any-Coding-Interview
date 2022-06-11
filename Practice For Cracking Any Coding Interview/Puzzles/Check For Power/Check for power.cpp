#include <bits/stdc++.h>
using namespace std;

// Way 1
// Create a function

bool checkPower(int x,int y)
{
	
	// for handelling the power as zero
	// If x is greater than y and y is equal to 1 then return true
	
	if(x>y && y == 1)
	return true;
	
	// Iterating till y 
	
	for (int i =1;i<=y;i++)
	{
		
		// If x^i becomes equal to y
		// Return true
		
		if(pow(x,i) == y)
		return true;
	}
	
	// Else return false
	
	return false;
}


int main()
{
	cout << checkPower(2,8);
	return 0;
}



// T.C. : O(logx(y)) => logy base x
// S.C. : O(1)

// Way 2

bool checkPow(int x,int y)
{
	
	// Taking log(y) in base x 
	
	int val1 = log(y)/log(x);
	
	// This is double compare to the val1 or val2 both are equal
	
	double val2 = log(y)/log(x);
	return (val1 == val2);
}

int main()
{
	cout << checkPow(1,3);
	return 0;
}


// T.C.: O(loglogy)
// S.C.: O(1)
