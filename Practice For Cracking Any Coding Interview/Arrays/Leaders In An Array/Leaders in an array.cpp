#include <bits/stdc++.h>
using namespace std;

// Function for finding leaders of the element
// taking array and size of as an inout 

void Leaders(int arr[],int n)
{

	// Last element will always be a leader

	int curr_leader = arr[n-1];

	// output the last element

	cout << curr_leader << " ";

	// Traversing from last-1 to 0

	for(int i=n-2;i>=0;i--)
	{

		// if current stored leader is less than arr[i] assign arr[i] in curr_leader

		if(curr_leader < arr[i])
		{
			curr_leader = arr[i];

		// ouput the leader

			cout << curr_leader << " ";
		}
	}
}

// main code 

int main()
{
	int arr[] = {1,2,3,4,0};
	int n = sizeof(arr[n])/sizeof(arr[0]);
	Leaders(arr,n);
	return 0;
}



// T.C. : O(n)
// S.C. : O(n)