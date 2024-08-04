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
        int n = nums.size(), count = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j < n; j++)
            {
                sum += nums[j];
                if (sum == goal)
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
    cout << s.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}

/*
    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/