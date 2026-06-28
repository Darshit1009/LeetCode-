#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mirrorDistance(int n)
    {

        int origin = n;
        int num = 0;
        while (n > 0)
        {
            int rem = n % 10;
            num = num * 10 + rem;
            n = n / 10;
        }
        return abs(origin - num);
    }
};
int main()
{
    Solution s;
    int n = 25;
    cout << s.mirrorDistance(n);
    return 0;
}