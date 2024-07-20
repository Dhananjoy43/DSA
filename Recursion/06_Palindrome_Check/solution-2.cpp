/*
    Check an string is Palindrome or not
*/

#include <bits/stdc++.h>

using namespace std;

bool checkPallindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;

    return checkPallindrome(i + 1, s);
}

int main()
{
    string s;
    cin >> s;

    cout << checkPallindrome(0, s);
    return 0;
}