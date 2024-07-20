/*
    Check an array is Palindrome or not
*/

#include <bits/stdc++.h>

using namespace std;

bool checkPallindrome(int i, vector<int> &arr, int n)
{
    if (i >= n / 2)
        return true;

    if (arr[i] != arr[n - i - 1])
        return false;

    return checkPallindrome(i + 1, arr, n);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << checkPallindrome(0, arr, n);
    return 0;
}