//Count the number of possible triangles 
//Given an unsorted array arr[] of n positive integers. Find the number of triangles that can be formed with three different array elements as lengths of three sides of triangles. 
//
//Example 1:
//
//Input: 
//n = 3
//arr[] = {3, 5, 4}
//Output: 
//1
//Explanation: 
//A triangle is possible 
//with all the elements 5, 3 and 4.
//Example 2:
//
//Input: 
//n = 5
//arr[] = {6, 4, 9, 7, 8}
//Output: 
//10
//Explanation: 
//There are 10 triangles
//possible  with the given elements like
//(6,4,9), (6,7,8),...
// 
//
//Your Task: 
//This is a function problem. You only need to complete the function findNumberOfTriangles() that takes arr[] and n as input parameters and returns the count of total possible triangles.
//
//Expected Time Complexity: O(n2).
//Expected Space Complexity: O(1).
//
//Constraints:
//3 <= n <= 10^3
//1 <= arr[i] <= 10^3

#include <bits/stdc++.h>
using namespace std;

// Function for finding the number of triangles

int findNumberOfTriangles(int arr[], int n)
{
	
	// Initialising to count
	
	int count = 0; 
	
	// Sorting the array
	
	sort(arr,arr+n);
	
	// Traversing from n-1 to 1st index
	
	for (int i=n-1;i>=1;i--)
	{
		
		// for each iteration value of left as 0
		
		int left = 0;
		
		// for each iteration value of right as i-1
		
		int right = i-1;
		
		// for every left less than right
		
		while(left < right)
		{
			
			// If addition of arr[left] and arr[right] is greater than arr[i]
			// that means if they form triangles
			// then triangles can obviously formed 
   			// from a[left+1], a[left+2].....a[right-1], arr[right] and a[i], because the array is sorted
			
			if(arr[left] + arr[right] > arr[i])
			{
				
				// So calculate the total values that can form triangles
				
				count = count+right-left;
				
				// Decrement the value of right
				
				right--;
			}
			
			// If a triangle cannot be formed using arr[left] and arr[right]
			
			else
			{
				
				// Increment the value of l 
				
				left++;
			}
		}
	}
	
	// returning the count the value
	
	return count;
}

// main code 

int main()
{
	int arr[] = {6, 4, 9, 7, 8};
	cout << findNumberOfTriangles(arr,5);
	return 0;
}


// T.C. : O(n^2)
// S.C. : O(1)
