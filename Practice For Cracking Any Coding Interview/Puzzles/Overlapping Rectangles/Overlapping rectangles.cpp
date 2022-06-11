#include <bits/stdc++.h>
using namespace std;

// Creating a function for overlapping rectangles

int OverlapRectangle(int l1[],int r1[],int l2[],int r2[])
{
	
	// If x coordinate of l1 is equal to the x coordinate of r1 or 
	// If y coordinate of l1 is equal to the y coordinate of r2 or
	// If x coordinate of l2 is equal to the x coordinate of r1 or
	// If y coordinate of l2 is equal to the y coordinate of r2 then
	// return false i.e. reactangles do not overlap
	
	if(l1[0] == r1[0] || l1[1] == r2[1] || l2[0] == r1[0] || l2[1] == r2[1])
	{
		return false;
	}
	
	// If x coordinate of l1 is greater than or equal to the x coordinate of r2 or 
	// If x coordinate of l2 is greater than or equal to the x coordinate of r1 or
	// If y coordinate of r1 is greater than or equal to the y coordinate of l2 or
	// If y coordinate of r2 is greater than or equal to the y coordinate of l1 then
	// return false i.e. reactangles do not overlap
	
	if(l1[0] >= r2[0] || l2[0] >= r1[0] || r1[1] >= l2[1] || r2[1] >= l1[1])
	{
		return false;
	}
	return true;
}


int main()
{	
	int l1[2] = {0,2};
	int r1[2] = {1,1};
	int l2[2] = {-2,0};
	int r2[2] = {0,-3};
	cout << OverlapRectangle(l1,r1,l2,r2);
	return 0;
}


// T.C. : O(1)
// S.C. : O(1)
