#include <iostream> 
using namespace std;

void PrintPattern(int n)
{
	for(int i=0;i<n;i++)
	{
		int no = n;
		for (int j=0;j<n;j++)
		{
			for (int k=0;k<n-i;k++)
			{
				cout << no << " ";
			}
			no--;
		}
		cout << "$";
	}
}



int main()
{
	
	PrintPattern(9);
	return 0;
}

