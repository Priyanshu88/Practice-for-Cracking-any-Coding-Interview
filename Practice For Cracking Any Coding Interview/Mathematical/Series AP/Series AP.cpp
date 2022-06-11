#include <iostream>
using namespace std;

void SeriesAP(int A1, int A2, int n)
{
	int d = A2-A1;
	//nth term = A1+(n-1)(A2-A1)
	int term = A1+(n-1)*d; 
	cout << term;
}


int main()
{
	SeriesAP(1,2,10);
	return 0;
}
