/*
    Question: You have been given an integer 'N'.
    Your task is to return true if it is a power of two. Otherwise, return false.

    Sample Input 1:
    16
    Sample Output 1:
    true
    Explanation of Sample Input 1:
    16 can be represented as 2^4. So, 16 is the power of two, and hence true is our answer.

    Sample Input 2:
    10
    Sample Output 2:
    false

    Link: https://www.naukri.com/code360/problems/power-of-two_893061?interviewProblemRedirection=true&search=power&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n < 0)
            return false;
        while (n > 1)
        {
            int rem = n % 2;
            if (rem == 1)
                return 0;
            n /= 2;
        }
        return 1;
    }
};

int main()
{
    int n;
    cin >> n;
    solution s;
    cout << s.isPowerOfTwo(n) << endl;
    return 0;
}