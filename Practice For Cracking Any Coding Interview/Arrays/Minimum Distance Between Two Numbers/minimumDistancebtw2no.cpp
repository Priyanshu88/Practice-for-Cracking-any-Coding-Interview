#include<bits/stdc++.h>
using namespace std;

// Function for minimum distance between two numbers
// a[] is the array n is the size x and y are the elements

int minDist(int a[],int n,int x,int y)
{

    // Initializing previous index as -1
    // and minimum distance as maximum value

    int preIn = -1,Min_dis = INT_MAX;

    // traversing from 0 to n

    for (int i=0;i<n;i++)
    {

        // If array[i] is equal to x or y     

        if(a[i] == x || a[i] == y)
        {

            // and if previous index is not equal to -1 and preIn is not same as element found

            if(preIn != -1 && a[i] != preIn)
            {

                // store minimum of i-preIn and current minimum

                Min_dis = min(Min_dis,i-preIn);
            }

            // store i in preIn

            preIn = i;
        }
    }

    // if minimum distance is equal to max value
    // then return -1

    if(Min_dis == INT_MAX)
    {
        return -1;
    }

    // at last returning minimum index

    return Min_dis;
}

//main code

int main()
{
    //int a[] = {1,2,3,2};
    int a[] = {86,39,90,67,84,66,62};
    //cout << minDist(a,4,1,2);
    cout << minDist(a,7,42,12);

    return 0;
} 


// T.C: O(n)
// S.C. : O(1)