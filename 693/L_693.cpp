// 693. Binary Number with Alternating Bits
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string binaryConversion(int t)
    {
        string bin = "";
        while (t != 0)
        {
            bin += (t & 1) ? '1' : '0';
            t >>= 1;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }
    bool hasAlternatingBits(int n)
    {
        string ans = binaryConversion(n);
        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i] == ans[i - 1])
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    // cout << boolalpha;
    cout << s.hasAlternatingBits(5);
    return 0;
}