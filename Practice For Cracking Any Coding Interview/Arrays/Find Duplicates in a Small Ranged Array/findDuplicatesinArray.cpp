#include<bits/stdc++.h>
using namespace std;

// function for finding the duplicates in an array

vector<int> duplicates(int arr[], int n) 
{

    // 

    for(int i=0;i<n;i++)
    {

        // 

        int index = arr[i] % n;

        // 

        arr[index] = arr[index] + n;
    }

    // 

    for(int i=0;i<n;i++)
    {

        // 

        if((arr[i] / n) >= 2)
        {

            // 

            cout << i << " ";
        }
    }
}



// main code

int main()
{
    int n = 5;
    int a[] = {2,3,1,2,3};
    return 0;
}


// T.C.: O()
// S.C.: O()