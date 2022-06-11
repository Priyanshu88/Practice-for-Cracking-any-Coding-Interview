#include<bits/stdc++.h>
using namespace std;

//Way 1
// function for finding the maximum index

int maxIndexDiff(int a[], int n) 
{

    // for maximum difference

    int maxDiff = -1;

    int i=0; int j=0;

    // Auxiloary array to hold the smallest element on the left side

    int* LMin = new int[(sizeof(int)*n)];

    // Auxiloary array to hold the greater element on the right side

    int* RMax = new int[(sizeof(int)*n)];

    // initializing with first element to LMin[0]

    LMin[0] = a[0];

    // traversing from 1 to n-1

    for(int i=1;i<n;i++)
    {
        //Constructing LMin[] such that LMin[i] stores the minimum value 
        //from (arr[0], arr[1], ... arr[i]).
        // storing minimum of a[i] and LMin[i-1]

        LMin[i] = min(a[i],LMin[i-1]);
    }

    // initializing RMax[n-1] with last element of array

    RMax[n-1] = a[n-1];

    // traversing from n-2 to 0

    for(int j=n-2;j>=0;j--)
    {

        //Constructing RMax[] such that RMax[j] stores the maximum value 
        //from (arr[j], arr[j+1], ..arr[n-1]).
        // storing maximum of a[j] and RMax[j+1]

        RMax[j] = max(a[j],RMax[j+1]);
    }

    // Traversing both arrays from left to right

    while (i<n && j<n)
    {

        // if LMin[i] is smaller than or equal to RMax[j] 

        if(LMin[i] <= RMax[j])
        {

            // store maximum of previous maxDiff and j-i

            maxDiff = max(maxDiff,j-i);

            // and move ahead in j to look for greater j-i

            j++;
        }
        
        // otherwise

        else
        {

            // increment in LMin

            i++;
        }
    }

    // return maxDiff

    return maxDiff;
}

// Way 2
// Function for finding the maximum index

int maxIndexDiff(int arr[],int n)
{

    // Creating an n size array

    int leftMin[n];

    // initializing the first element as arr[0] 

    leftMin[0] = arr[0];

    // traversing from 1 to n-1

    for(int i=1;i<n;i++)
    {

        // storing minimum of leftmin with [i-1]th index and arr[i]

        leftMin[i] = min(leftMin[i-1],arr[i]);
    }

    // initializing the maxDiff with minimum value

    int maxDiff = INT_MIN;

    // initializing i as n-1 and j as n-1

    int i = n-1, j = n-1;

    // iterating till n-1 is greater than or equal to 0 

    while(i >= 0 && j >= 0)
    {

        // if jth element of array is greater than or equal to leftMin[i]

        if(arr[j] >= leftMin[i])
        {

            // store maximum of maxDifference and j-i

            maxDiff = max(maxDiff,j-i);

            // move next in leftMin

            i--;
        }

        // otherwise

        else
        {

            // Decrement j

            j--;
        }
    }
    return maxDiff;
}

// main code

int main()
{
    // int n = 9;
    // int a[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = 2;
    int a[] = {1,10};
    cout << maxIndexDiff(a,n);
    return 0;
}

// T.C.: O(n)
// S.C.: O(n)