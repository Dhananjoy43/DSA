/*
    Reverse an array using recursion
*/

#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void rev(int i, vector<int> &arr, int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);

    return rev(i + 1, arr, n);
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
    rev(0, arr, n);
    printVector(arr);
    return 0;
}