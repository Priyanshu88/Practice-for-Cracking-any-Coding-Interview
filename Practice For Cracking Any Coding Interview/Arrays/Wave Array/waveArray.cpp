#include<bits/stdc++.h>
using namespace std;

// Way 1
// function for swaping the two numbers

void swap(int* x,int* y)
{

    // storing x value int temp

    int temp = *x;

    // then y value in x

    *x = *y;

    // temp value in y

    *y = temp;
}

//  function for converting sorted array into wave array

void convertToWave(vector<int> &arr,int n)
{

    // Traversing from 0  to n-1 for even elements

    for(int i=0;i<n;i=i+2)
    {

        // if i is greater than 0 and current even indexed element is less than previous

        if(i > 0 && arr[i-1] > arr[i])
        {

            // then swap them

            swap(&arr[i],&arr[i-1]);
        }

        // if i is less than n-1 and current even indexed element is less than next element

        if(i < n-1 && arr[i] < arr[i+1])
        {

            // then swap them

            swap(&arr[i],&arr[i+1]);
        }
    }
}

// Way 2

// arr: input array
// n: size of array
//Function to sort the array into a wave-like array.

void convertToWave(vector<int> &arr,int n)
{

    // Iterating from 0 with increment of +2index till odd positioned element is less than n

    for(int i=0;i+1<n;i=i+2)
    {

        // swap the elements 

        swap(arr[i],arr[i+1]);
    }
}

// main code

int main()
{
    vector<int> arr{10, 90, 49, 2, 1, 5, 23};
    int n = 7;
    convertToWave(arr,n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}