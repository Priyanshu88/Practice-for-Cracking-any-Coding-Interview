#include <bits/stdc++.h>
using namespace std;

// Function for calculating day number of the week

int dayNum(int d,int m,int y)
{

     // Using Tomohiko Sakamoto's Algorithm or Disparate Variation method
     // Subtracting 1 after february from array of leading number of days for each month

	static int Y[] = {0,3,2,5,0,3,5,1,4,6,2,4};
	
	// If m is jan/feb i.e. m<3 then decrement y by 1
	
	if(m<3)
	y -= 1;
	
	// Return after Adding year with y/4 (for leap year condition), -y/100 (Excluding leap year), y/400(Including leap year),
	// Y[m-1] (for leading number of days in array starting from 0) and given day 
	// and Take modulo with 7 
	
	return(y + y/4 - y/100 + y/400 +Y[m-1] +d)%7;
}

// Function for returning the day of the week

string printWeekName(int d, int m,int y)
{
	
	// Storing the day number in day
	
	int day = dayNum(d,m,y);
	
	// If day is 0
	
	if(day == 0)
	
	// return Sunday
	
	return "Sunday";
	
	// If day is 1
	
	if(day == 1)
	
	// return Monday
	
	return "Monday";
	
	// If day is 2
	
	if(day == 2)
	
	// return Tuesday
	
	return "Tuesday";
	
	// If day is 3
	
	if(day == 3)
	
	// return Wednesday
	
	return "Wednesday";
	
	// If day is 4
	
	if(day == 4)
	
	// return Thursday
	
	return "Thursday";
	
	// If day is 5
	
	if(day == 5)
	
	// return Friday
	
	return "Friday";
	
	// If day is 6
	
	if(day == 6)
	
	// return Saturday
	
	return "Saturday";
}

int main()
{
	
	// Compile to print the week name
	
	cout << printWeekName(28,1,2022);
	return 0;
}


// T.C. : O(1)
// S.C. : O(1)
