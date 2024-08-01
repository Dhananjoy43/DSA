/*
    Question: Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.


    Example 1:
    Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
    Output: 6
    Explanation: [1,1,1,0,0,1,1,1,1,1,1]
    Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

    Example 2:
    Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
    Output: 10
    Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
    Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.

    Leetcode: https://leetcode.com/problems/max-consecutive-ones-iii/description/
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    /**
     * @brief Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
     *
     * @param nums Binary array of integers
     * @param k Maximum number of 0's that can be flipped
     * @return Maximum number of consecutive 1's
     */
    int longestOnes(vector<int> &nums, int k)
    {
        int l = 0, r = 0, zeros = 0, len = 0, maxLen = 0;
        int n = nums.size();

        while (r < n)
        {
            if (nums[r] == 0)
            {
                zeros++;
            }
            while (zeros > k)
            {
                if (nums[l] == 0)
                    zeros--;
                l++;
            }
            if (zeros <= k)
                len = r - l + 1;
            maxLen = max(maxLen, len);
            r++;
        }
        return maxLen;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    Solution s;
    cout << s.longestOnes(nums, k);
    return 0;
}

/*
    ***********Sample Testcase***********

    Input:  11
            1 1 1 0 0 0 1 1 1 1 0
            2

    Output: 6

    T.C.: O(N)+O(N);
    S.C.: O(1)
*/