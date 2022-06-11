#include<bits/stdc++.h>
using namespace std;


// function for maximum sub array sum

vector<int> findSubArray(int a[],int n)
{

    // initializing for maximum sum 

    long long max_sum = -1;

    // initializing for current sum 

    long long cur_sum = 0;

    // initializing for maximum range of left side 

    int max_range_left = -1;
    
    // initializing for maximum range of right side 
    
    int max_range_right = -1;

    // initializing for current range of left side 

    int cur_range_left = 0;

    // initializing for maximum range of right side 

    int cur_range_right = 0;

    // iterating till right range is less than n

    while(cur_range_right < n)
    {

        // if array element till current right range is less than 0

        if(a[cur_range_right] < 0)
        {

            // add 1 in right range and assign it to current left range

            cur_range_left = cur_range_right + 1;

            // and current sum will be equal to 0

            cur_sum = 0;
        }

        // if array element till current right range is greater than 0

        else
        {

            // Add a[cur_range_right] to cur_sum

            cur_sum +=(long long)a[cur_range_right];
            
            // and if cur_sum is greater than max_sum
            
            if(cur_sum > max_sum)
            {

                // assign cur_sum to max_sum

                max_sum = cur_sum;

                // assign cur_range_left to max_range-left 

                max_range_left = cur_range_left;

                // assign cur_range_right to max_range_right

                max_range_right = cur_range_right;
            }

            // and if cur_sum is equal to max_sum

            else if(cur_sum == max_sum)
            {

                // if segment range  of left is greater 

                if(cur_range_right + 1 - cur_range_left > max_range_right + 1 - max_range_left)
                {

                    //  then assign crr_range_left to max_range_left

                    max_range_left = cur_range_left;
                    
                    // and assign crr_range_right to max_range_right
                    
                    max_range_right = cur_range_right;
                }
            }
        }

        // increment cur_range_right

        cur_range_right++;
    }

    // creating ans vector

    vector<int> ans;

    // if max_range_left is equal to -1 and max_range_right is equal to -1

    if(max_range_left == -1 || max_range_right == -1)
    {

        // store -1 in vector

        ans.push_back(-1);

        // return ans

        return ans;
    }

    // iterating from max_range_left to max_range_right

    for(int i=max_range_left;i<=max_range_right;++i)
    {

        // storing the ith elements in array

        ans.push_back(a[i]);
    }

    // returning the ans

    return ans;
} 

// function for printing the answer

void printAns(vector<int> &ans)
{

    // iterating from x till ans

    for(auto &x:ans)
    {

        // and print x

        cout << x << " ";
    }
    cout << "\n";
}


// main code

int main()
{
    int a[] = {1, 2, 5, -7, 2, 3};
    auto ans = findSubArray(a,6);
    printAns(ans);
    return 0;
} 


// T.C.: O(n)
// S.C.: O(1)