#include <bits/stdc++.h>

using namespace std;

int sum(int n, int total = 0)
{
    if (n == 0)
        return total;

    return sum(n - 1, total + n);
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n, 0);
    return 0;
}