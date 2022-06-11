#include <bits/stdc++.h>
using namespace std;

int BinarytoDecimal(int n)
{
	int num = n;
	int dec_value = 0;
	
	// base value as 2^0 = 1
	
	int base = 1;
	int temp = num;
	while(temp)
	{
		
		// Extracting the digits from right
		
		int last_digit = temp % 10;
		temp = temp / 10;
		
		// Multiplying with proper base and adding to the decimal value
		
		dec_value = dec_value + last_digit * base;
		base = base * 2;
	}
	return dec_value;
}

int binarytoDecimal(string str)
{
	// Since base value will be 2^0 = 1

	int base = 1;
	
	int dec_value = 0;
	
	// Using string variable to store the binary numbers
	
	string num = str;
	
	// Iterating from end
	
	for(int i = num.length()-1;i >= 0;i--)
	{
		
		// if 1 then add with the base to that value
		
		if(num[i] == '1')
		
		{
			dec_value = dec_value+base;
		}
			
			// Compute the decimals for each iteration  
			
			base = base * 2;
	
	}
	return dec_value;
}



int main()
{
	cout << binarytoDecimal("10101001") << endl;
	cout << BinarytoDecimal(10101001);
	return 0;
}


// Way 2

// Using predefined function
/*
int main()
{
	string binarytoDecimal = "10101001";
	cout << stoi(binarytoDecimal,0,2);
	return 0;
}
*/
