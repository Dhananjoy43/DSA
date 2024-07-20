#include <bits/stdc++.h>

using namespace std;
void pushToVector(int x, vector<int> &ans)
{
    if (x < 1)
        return;

    pushToVector(x - 1, ans);
    ans.push_back(x);
}

vector<int> printNos(int x)
{
    vector<int> ans;
    pushToVector(x, ans);
    return ans;
}

void printVector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int x;
    cin >> x;
    vector<int> ans;
    ans = printNos(x);
    printVector(ans);
    return 0;
}
