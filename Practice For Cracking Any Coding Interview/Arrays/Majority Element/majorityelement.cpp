#include<bits/stdc++.h>
using namespace std;

// function for finding candidate for majority

int findCandidate(int arr[],int n)
{

    // initializing to majority element index as 0

    int maj_index = 0;

    // count for majority element as 1

    int count = 1;

    // traversing through each element
    
    for (int i=1;i<n;i++)
    {

        // if the arr[i] is same as arr[maj_index]

        if(arr[maj_index] == arr[i])
        {

            // increment the count

            count++;
        }

        // otherwise

        else
        {

            // decrement the count
            
            count--;
        }

        // if the count reaches 0

        if(count == 0)
        {

            // Assigning the current element index to majority index

            maj_index = i;

            // again set count as 1

            count = 1;
        }
    }

    // return candidate for majority

    return arr[maj_index];
}

// function for finding count of candidate

bool isMajority(int a[],int n,int cand)
{

    // initializing count as zero

    int count = 0;

    // traversing through the loop

    for(int i=0;i<n;i++)
    {

        // if a[i] is equal to candidate then

        if(a[i] == cand)
        {

            // increment the count

            count++;
        }
    }

    // if count is greater than n/2

    if(count > n/2)
    {

        // return 1

        return 1;
    }

    // otherwise

    else
    {

        // return 0

        return 0;
    }
}

// function for majority

int majorityElement(int a[],int n)
{

    // finding the candidate for majority

    int cand = findCandidate(a,n);

    // print the candidate if it is majority

    if(isMajority(a,n,cand))
    {

        // return the candidate

        return cand;
    }

    // otherwise

    else
    {

        // return -1

        return -1;
    }
}

int main()
{
    //int arr[] = {1,2,3};
    int arr[] = {3,1,3,3,2};
    cout << majorityElement(arr,5);
    return 0;
}

//T.C. : O(n)
//S.C. : O(1)
