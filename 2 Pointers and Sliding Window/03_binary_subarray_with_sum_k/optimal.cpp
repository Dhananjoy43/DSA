/*
    Question: Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.


    Example 1:
    Input: nums = [1,0,1,0,1], goal = 2
    Output: 4

    Example 2:
    Input: nums = [0,0,0,0,0], goal = 0
    Output: 15

    Leetcode: https://leetcode.com/problems/binary-subarrays-with-sum/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return numSubarraysWithSumLessThanGoal(nums, goal) - numSubarraysWithSumLessThanGoal(nums, goal - 1);
    }

private:
    int numSubarraysWithSumLessThanGoal(vector<int> &nums, int goal)
    {
        int l = 0, r = 0, sum = 0, count = 0, n = nums.size();

        while (r < n)
        {
            sum += nums[r];
            while (l <= r && sum > goal)
            {
                sum -= nums[l++];
            }
            count += r - l + 1;
            r++;
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
    cout << s.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}

/*
    Time Complexity: O(4n)
    Space Complexity: O(1)
*/