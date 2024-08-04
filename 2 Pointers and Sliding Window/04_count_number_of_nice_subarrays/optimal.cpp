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

private:
    int numberOfSubarraysLessThanEqualK(vector<int> &nums, int k)
    {
        int n = nums.size(), l = 0, r = 0, oddNum = 0, count = 0;
        while (r < n)
        {
            if (isOddNumber(nums[r]))
                oddNum++;
            while (oddNum > k)
            {
                if (isOddNumber(nums[l++]))
                    oddNum--;
            }
            count += r - l + 1;
            r++;
        }
        return count;
    }

public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {
        return numberOfSubarraysLessThanEqualK(nums, k) - numberOfSubarraysLessThanEqualK(nums, k - 1);
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
    Time Complexity: O(4n)
    Space Complexity: O(1)
*/