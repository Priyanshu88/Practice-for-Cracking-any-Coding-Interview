#include <bits/stdc++.h>
using namespace std;

// function for square of distance from point(x,y) to point (a,b)

int distSquare(int x, int y, int a, int b)
{
	return (x-a)*(x-a)+(y-b)*(y-b);
}

// Using, as it returns true if ((x1,y1),(x2,y2),(x3,y3),(x4,y4)) form a square

bool isSquare(int x1, int y1, int x2, int y2, int x3,int y3, int x4, int y4)
{
	
	// Square of distance from (x1,y1) to (x2,y2)
	
	int d2 = distSquare(x1,y1,x2,y2);
	
	// Square of distance from (x1,y1) to (x3,y3)
	
	int d3 = distSquare(x1,y1,x3,y3);
	
	// Square of distance from (x1,y1) to (x4,y4)
	
	int d4 = distSquare(x1,y1,x4,y4);
	
	// If the above distances are zero
	
	if(d2 == 0 || d3 == 0 || d4 == 0)
	
	// returning false
	
	return false;
	
	// If distances of ((x1,y1),(x2,y2)) and ((x1,y1),(x3,y3)) are same 
	// If square of distance of ((x1,y1),(x4,y4)) is same as the twice of square of distance of ((x1,y1),(x2,y2))
	// If square of distance of ((x2,y2),(x3,y3)) is same as the twice of square of distance of ((x2,y2),(x4,y4)) then
	// it will form a square
	
	if(d2 == d3 && 2*d2 == d4 &&2*distSquare(x2,y2,x4,y4) == distSquare(x2,y2,x3,y3))
	{
		return true;
	}
	
	// If distances of ((x1,y1),(x3,y3)) and ((x1,y1),(x4,y4)) are same 
	// If square of distance of ((x1,y1),(x2,y2)) is same as the twice of square of distance of ((x1,y1),(x3,y3))
	// If square of distance of ((x3,y3),(x4,y4)) is same as the twice of square of distance of ((x3,y3),(x2,y2)) then
	// it will form a square
	
	if(d3 == d4 && 2*d3 == d2 && 2*distSquare(x3,y3,x2,y2) == distSquare(x3,y3,x4,y4))
	{
		return true;
	}
	
	// If distances of ((x1,y1),(x4,y4)) and ((x1,y1),(x2,y2)) are same 
	// If square of distance of ((x1,y1),(x3,y3)) is same as the twice of square of distance of ((x1,y1),(x2,y2))
	// If square of distance of ((x2,y2),(x4,y4)) is same as the twice of square of distance of ((x2,y2),(x3,y3)) then
	// It will form a square 
	
	if(d2 == d4 && 2*d2 == d3 && 2*distSquare(x2,y2,x3,y3) == distSquare(x2,y2,x4,y4))
	{
		return true;
	}
	
	// Otherwise return false
	
	return false;
}

// Using for output and check
// Taking all four points

string isSq(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
	
	// If is square is ture return "Yes"
	
	if(isSquare(x1,y1,x2,y2,x3,y3,x4,y4))
	return "Yes";
	
	// Else return "No"
	
	else
	return "No";
}



int main()
{
	cout << isSq(20,10,10,20,20,20,10,10);
	return 0;
}


// T.C. : O(1)
// S.C. : O(1)
