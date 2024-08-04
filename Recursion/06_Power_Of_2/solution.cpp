#include <bits/stdc++.h>

using namespace std;

class solution
{
public:
    int powerOf2(int n)
    {
        if (n == 0)
            return 1;

        while (n > 0)
            return 2 * powerOf2(n - 1);
    };
};

int main()
{
    int n;
    cin >> n;
    solution s;
    cout << s.powerOf2(n);
    return 0;
}