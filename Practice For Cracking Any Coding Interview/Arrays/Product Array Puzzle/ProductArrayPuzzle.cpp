#include<bits/stdc++.h>
using namespace std;

// Way 1
// function for finding the product array puzzle

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) 
{

    // Allocating the memory and Initialising product array with 1

    vector<long long int> vec(n,1ll);

    // If all are 1

    if(n == 1)
    {

        // return the vec

        return vec;
    }

    // intializing temp with 1 for left product array value

    long long temp = 1ll;

    // looping from i to n

    for(int i=0;i<n;i++)
    {

        // storing the vec[i] values after multiplying temp

        vec[i] = vec[i] * temp;

        // now storing nums[i] multiplication with temp in temp only

        temp = temp * nums[i];
    }

    // Initialising temp with 1 

    temp = 1ll;

    // Looping from right side till 0

    for(int i=n-1;i>=0;i--)
    {

        // Multiplying vec[i] with temp and storing the vec[i]

        vec[i] = vec[i] * temp;

        // multiplying temp with nums[i] and storing in temp

        temp = temp * nums[i];

    }

    // returing the vector

    return vec;

}


// main code

int main()
{
    
    int n = 5;
    vector<long long int> nums{10, 3, 5, 6, 2};
    productExceptSelf(nums,n);
    return 0;
}

// T.C.: O(n)
// S.C.: O(n)

// Way 2

#include <bits/stdc++.h>
using namespace std;

// Function for printing product array
// taking array and size

void ProductArr(int arr[], int n)
{

    // Initializing prod to store the total product of array

    int prod = 1;

    // Traversing the array 

    for(int i=0;i<n;i++)
    {

        // storing the prod * arr[i] in prod
        
        prod = prod * arr[i];
    }

    // again traversing the array

    for(int i=0;i<n;i++)
    {

        // printing prod*pow(arr[i],-1)
        // which is prod * arr[i]^-1 = prod/arr[i]

        cout << (int) (prod * pow(arr[i],-1)) << ' ';
    }
}

// main code

int main()
{
    int arr[] = {10,3,5,6,2};
    int n = 5;
    ProductArr(arr,n);
    return 0;
}

// T.C.: O(n)
// S.C.: O(1)