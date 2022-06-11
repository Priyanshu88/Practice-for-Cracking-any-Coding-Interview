#include<bits/stdc++.h>
using namespace std;

// function for finding the max sum path in two arrays
// a1[] and a2[] arrays respectively l1 and l2 are length 

int max_path_sum(int a1[], int a2[], int l1, int l2)
{

    // Initializing result, sum1 and sum2 as 0
    
    int result = 0,sum1 = 0,sum2 = 0;

    // Initializing the indexes for a1[] and a2[]

    int i=0,j=0;

    // loop i till l1-1 and j till l2-1

    while(i < l1 && j < l2)
    {

        // if ar1 is smaller than ar2, incresing ar1 and adding its value to sum1
        // if elements of a1[i] is less than a2[j]

        if(a1[i] < a2[j])
        {   

            // add a1[i] elements to sum1 

            sum1 = sum1+a1[i];

            // and increment i

            i++;
        }
        
        // // if ar2 is smaller than ar1, incresing ar2 and adding its value to sum2
        // if elements of a1[i] is greater than a2[j]

        else if(a1[i] > a2[j])
        {
            
            // ass a2[j] elements to sum2

            sum2 = sum2+a2[j];

            // and increment j

            j++;
        }

         // if ar1=ar2, checking the maximum sum obtained from both the arrays
            // updating result and sum1 and sum2 is again changed to zero
        // if we have same elements

        else
        {

            // take the maximum of above both sums and add with common element and result

            result = result + max(sum1,sum2) + a1[i];

            // after common element adding 
            // updating sum1 as 0

            sum1 = 0;
            
            // and sum2 as 0

            sum2 = 0;

            // increment i

            i++;

            // increment j

            j++;
        }
    }

    // loop till l1-1

    while (i < l1)
    {

        // and add remaining elements of a1[i] with sum1

        sum1 = sum1 + a1[i];

        // increment i 

        i++;
    }

    // loop till l2-1
    
    while(j < l2)
    {

        // and add remaining elements of a2[i] with sum2

        sum2 = sum2 + a2[j];

        // increment j

        j++;
    }

    // add maximum of two sums of remaining elements
    
    result = result + max(sum1,sum2);

    // returning result

    return result;
}


// main code

int main()
{
    int l1 = 5, l2 = 4;
    int a1[] = {2,3,7,10,12};
    int a2[] = {1,5,7,8};
    cout << max_path_sum(a1,a2,l1,l2);
    return 0;
}

// T.C.: O(m+n)
// S.C.: O(1)