/*
    Question: You are given an array 'a' of size 'n'.
    Print the Next Greater Element(NGE) for every element.
    The Next Greater Element for an element 'x' is the first element on the right side of 'x' in the array, which is greater than 'x'.
    If no greater elements exist to the right of 'x', consider the next greater element as -1.


    Link: https://www.naukri.com/code360/problems/next-greater-element_10297924?topList=ninjas-sde-sheet&problemListRedirection=true&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &arr, int n)
    {
        // Write your code here
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            int graeter = -1;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] > arr[i])
                {
                    graeter = arr[j];
                    break;
                }
            }
            ans.push_back(graeter);
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution s;
    vector<int> ans = s.nextGreaterElement(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}