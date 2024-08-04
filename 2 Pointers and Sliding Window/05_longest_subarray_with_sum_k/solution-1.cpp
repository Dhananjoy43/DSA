/*
    Question: You are given an array 'a' of size 'n' and an integer 'k'. Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

    Example :
    Input: ‘n’ = 7 ‘k’ = 3
    ‘a’ = [1, 2, 3, 1, 1, 1, 1]
    Output: 3
    Explanation: Subarrays whose sum = ‘3’ are:
    [1, 2], [3], [1, 1, 1] and [1, 1, 1]

    Here, the length of the longest subarray is 3, which is our final answer.

    Link: https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarrayWithSumK(vector<int> a, long long k)
    {
        int longest = 0, left = 0, right = 0, n = a.size();
        long long sum = a[0];
        while (right < n)
        {
            while (left <= right && sum > k)
            {
                sum -= a[left];
                left++;
            }
            if (sum == k)
                longest = max(longest, right - left + 1);

            sum += a[++right];
        }
        return longest;
    }
};

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Solution s;
    cout << s.longestSubarrayWithSumK(a, k) << endl;
    return 0;
}