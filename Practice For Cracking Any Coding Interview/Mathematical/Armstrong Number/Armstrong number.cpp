#include <bits/stdc++.h>
using namespace std;

// function to calculate x raised to the power y

int power (int x, int y)
{
	if (y == 0)
	return 1;
	if(y%2 == 0)
	return power (x, y/2) * power(x, y/2);
	return x * power(x, y/2)* power(x, y/2);
}

// for calculating the number of digits

int order(int x)
{
	int n = 0;
	while(x)
	{
		n++;
		x=x/10;
	}
	return n;
}

// checking for armstrong 

bool isArmstrong(int x)
{
	int n = order(x);
	int temp = x,sum = 0;
	while(temp)
	{
		int r = temp % 10;
		sum += power(r,n);
		temp = temp/10;	
	}	
	return (sum == x);
}

int main()
{
	cout << isArmstrong(1253);
	return 0;
}





// Way 2

bool isArmstrong (int sum)
{
	int len = 0;
	int temp = num;
	while(temp)
	{
		len++;
		temp/=10;
	}
	
	temp = num;
	int sum = 0;
	while(temp)
	{
		sum += pow(temp%10,len);
		temp = temp/10;
	}
	return (sum == num);
}
















