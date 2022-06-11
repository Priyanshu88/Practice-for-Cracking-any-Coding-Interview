#include <bits/stdc++.h>
using namespace std;

void SeriesGP (int A,int R,int N)
{
	//nth term  =  ar^n-1
	int nthterm = A*pow(R,N-1);
	cout << nthterm;
}


int main()
{
	SeriesGP(2,2,4);
	return 0;
}
