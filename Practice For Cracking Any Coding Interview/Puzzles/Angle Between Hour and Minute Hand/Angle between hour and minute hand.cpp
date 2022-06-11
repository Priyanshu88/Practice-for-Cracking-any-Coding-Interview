#include <bits/stdc++.h>
using namespace std;

// Function to find the angle between hours and minute 

int anglebtwHM(int H,int M)
{
	
	// Edge cases for validating the input
	
	if(H < 0 || M < 0 || H > 12 || M > 60)
	cout << "Wrong Input" << endl;
	
	// If H is equal to 12
	
	if (H == 12)
	
	// Assign H as 0
	
   	H = 0;
 	
 	// If M is equal to 60
 	
 	if(M == 60)
 	
 	// Assign M as 0
 	
 	M = 0;
 	
 	// Hours hand moves 360* in 12hrs 
	// then 30* in 1 hrs
	// then 0.5* in 1 minute 
 	
 	double H_angle = 0.5*(H*60 + M);
 	
 	// Minute hand moves 360* in 60min
 	// then 6* in 1 minute
 	
 	double M_angle = 6*M;
 	
 	// Difference between angle made by hour hand with respect to 12 in h hours and m minutes
 	// and angle made by minute hand with respect to 12 in h hours and m minutes
 	
 	double angle = (abs(H_angle - M_angle));
 	
 	// If the angle comes out be greater than 180
 	
	if(angle > 180)
	
	// then subtract the angle from 360
	
	angle = (int)(360-angle);
	
	// 
	
	else
	
	// otherwise assign the given angle
	
	angle = (int)angle;
	
	// and return the angle
	
	return angle;

}


int main()
{
	
	cout << anglebtwHM(12,30);
	return 0;
}


// T.C. : O(1)
// S.C. : O(1)
