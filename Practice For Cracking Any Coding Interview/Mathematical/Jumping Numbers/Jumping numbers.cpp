#include <bits/stdc++.h>
using namespace std;

int jumping(int x)
{
	// Converting into string
	
	string s = to_string(x);
	
	// To determine the jumping number condition
	
	bool flag = true;
	for (int i = 0;i<s.length()-1;i++)
	{
		// Checking the absolute value with the diffrence of one for each adjacent 
		// If difference is not 1 then is not Jumping number
		
		if(abs(s[i]-s[i+1]) != 1)
		{
			flag = false;
		}
	}
	return flag;
}

long long jumpingNums(long long x)
{
	// Untill we found jumping number
	
	while(true)
	{
		
		// Returning if given number is jumping number
		// else moving back from that number
		
		if(jumping(x))
		return x;
		x--;
	}
}




int main()
{
 	cout << jumpingNums(989);	
	return 0;
}
