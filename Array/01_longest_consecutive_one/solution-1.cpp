/*
    Question: Given a binary array 'ARR' of size 'N', your task is to find the longest sequence of continuous 1’s that can be formed by replacing at-most 'K' zeroes by ones. Return the length of this longest sequence of continuous 1’s.

    Link: https://www.naukri.com/code360/problems/maximum-consecutive-ones_9392250?topList=ninjas-sde-sheet&problemListRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=3&search=&sort_entity=order&sort_order=ASC&customSource=studio_nav
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubSeg(vector<int> &arr, int n, int k)
    {
        // Write your code here.
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0, zeros = 0;
            for (int j = i; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    count++;
                }
                else
                {
                    if (zeros < k)
                    {
                        zeros++;
                        count++;
                    }
                    else
                    {
                        count = 0;
                        break;
                    }
                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution s;
    cout << s.longestSubSeg(arr, n, k) << endl;
}