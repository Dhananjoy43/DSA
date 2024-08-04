/*
    Question: Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it. Return the number of nice sub-arrays.


    Example 1:
    Input: nums = [1,1,2,1,1], k = 3
    Output: 2
    Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].

    Example 2:
    Input: nums = [2,4,6], k = 1
    Output: 0
    Explanation: There are no odd numbers in the array.

    Example 3:
    Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
    Output: 16

    Leetcode: https://leetcode.com/problems/count-number-of-nice-subarrays/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    bool isOddNumber(int n)
    {
        return n % 2;
    }

public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        int n = nums.size(), count = 0;
        for (int i = 0; i < n; i++)
        {
            int oddNum = 0;
            for (int j = i; j < n; j++)
            {
                if (isOddNumber(nums[j]))
                    oddNum++;

                if (oddNum == k)
                    count++;
            }
        }
        return count;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int goal;
    cin >> goal;
    Solution s;
    cout << s.numberOfSubarrays(nums, goal) << endl;
    return 0;
}

/*
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/