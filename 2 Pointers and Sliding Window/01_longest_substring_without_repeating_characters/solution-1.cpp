/*
    Question: Given a string s, find the length of the longest substring without repeating characters.

    Example 1:
    Input: s = "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.

    Example 2:
    Input: s = "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.

    Leetcode: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> mpp(256, -1);
        int l = 0, r = 0, maxL = 0;
        int n = s.size();
        while (r < n)
        {
            if (mpp[s[r] != -1])
            {
                l = max(mpp[s[r]] + 1, l);
            }

            mpp[s[r]] = r;

            maxL = max(maxL, r - l + 1);
            r++;
        }
        return maxL;
    }
};

int main()
{
    string str;
    cin >> str;
    Solution obj;
    cout << obj.lengthOfLongestSubstring(str);
    return 0;
}