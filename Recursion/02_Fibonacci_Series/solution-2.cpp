/*
    Print first n fibonacci numbers

    Question Link: https://www.naukri.com/code360/problems/print-fibonacci-series_7410103?topList=ninjas-sde-sheet&problemListRedirection=true&search=fib&leftPanelTabValue=SUBMISSION

    Example:
    Input: ‘n’ = 5
    Output: 0 1 1 2 3
    Explanation: First 5 Fibonacci numbers are: 0, 1, 1, 2, and 3.
*/

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

vector<int> generateFibonacciNumbers(int n)
{
    // Write your code here.
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        ans.push_back(fib(i));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = generateFibonacciNumbers(n);
    printVector(ans);
    return 0;
}