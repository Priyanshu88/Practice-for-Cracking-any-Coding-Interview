#include<bits/stdc++.h>
using namespace std;

// function for sorted subsequence of size 3
// taking array and array size as an input

void find3numbers(int arr[],int n)
{
    // for taking the maximum element from right side
    
    int max = n-1;

    // for taking the minimum element from left side

    int min = 0;

    // Auxiliary array for storing the smaller element from left
    
    int* smaller = new int[n];
    
    //  first entry will always be -1
    
    smaller[0] = -1;
    
    // Traversing from 1 to n-1
    
    for(int i=1;i<n;i++)
    {

        /// if array[i] element is lesser than arr[min]

        if(arr[i] <= arr[min])
        {

             // assign minimum element index to min

            min = i;

            // assign -1 to smaller element if there is no such element

            smaller[i] = -1;
        }

        // if arr[i] element is greater than smaller

        else
        {

            // assign min index to smaller[i]

            smaller[i] = min;
        }
    }

    // Auxiliary array for storing the greater element from right

    int* greater = new int[n];

    // the last entry will always be -1

    greater[n-1] = -1;

    // traversing from right-1 to 0

    for (int i=n-2;i>=0;i--)
    {

        // if arr[i] element is greater than arr[max]

        if(arr[i] >= arr[max])
        {

            // assign maximum element index to max

            max = i;

            // assign -1 to greater element if there is no such element

            greater[i] = -1;
        }
        else
        {

             // assign max index to smaller[i]

            greater[i] = max;
        }

    }

    // Traversing the both and find smaller[] and greater[]

    for (int i=0;i<n;i++)
    {

        // if smaller[i] & greater[i] are not equal to -1 

        if(smaller[i] != -1 && greater[i] != -1)
        {

            // print arr[smaller[i]] then arr[i] and arr[greater[i]]

            cout << arr[smaller[i]] << " " << arr[i] << " " << arr[greater[i]];
            return;
        }
    }

    // If we reach number, then
    // there are no such 3 numbers

    cout << "No such subsequence are found";

    // free the dynamic memory to avoid memory leak

    delete[] smaller;
    delete[] greater;

}

// function for finding the sorted subsequence of size 3

vector<int> find3Numbers(vector<int>&arr,int n)
{

    // if the size is less than 3

    if(n < 3)
    {
        cout << "No such subsequence is possible";
        //return;
    }

    // track the bast sequence length

    int seq = 1;

    // min number in array 

    int minimum = arr[0];

    // least maximum number is the best sequence
    // tracking of arr[j]

    int max_seq = INT_MAX;

    // storing minimum as arr[i]

    int store_min = minimum;

    // Iterate from 1 to n-1

    for(int i=1;i<n;i++)
    {

        // if arr[i] is equal to minimum
        // continue

        if(arr[i] == minimum)
        {
            continue;
        }

        // if arr[i] is less than minimum

        else if(arr[i] < minimum)
        {

            // store arr[i] in minimum and
            // continue

            minimum = arr[i];
            continue;
        }

        // if arr[i] is less than the maximum sequence

        else if(arr[i] < max_seq)
        {

            // then assign array[i] to max_seq

            max_seq = arr[i];

            // best sequence start value

            store_min = minimum;
        }

        // If arr[i] is greater than max_seq

        else if(arr[i] > max_seq)
        {

            // print store_min, max_seq and arr[i]

            cout << store_min << " " << max_seq  << " " << arr[i] << endl;
            //return;
        }
    }
    cout << "No such subsequence exist";
}


// main code

int main()
{
    // int arr[] = {1,2,1,1,3};
    // int arr[] = {1,1,3};
    // vector<int> arr {1,1,3};
    vector<int> arr {1,2,1,1,3};
    find3Numbers(arr,5);
    return 0;
}


// T.C.:O(n)
// S.C.:O(n)

// T.C.: O(n)
// S.C.: O(1)