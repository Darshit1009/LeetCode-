#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDifference(string s)
    {

        set<int> a;
        map<char, int> frq;
        for (int i = 0; i < s.size(); i++)
        {
            frq[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            a.insert(frq[s[i]]);
        }
        std::vector<int> ret(a.begin(), a.end());
        int odd = INT_MIN;
        int even = INT_MAX;
        for (int i = 0; i < ret.size(); i++)
        {
            if (ret[i] % 2 == 0)
            {
                if (ret[i] < even)
                {
                    even = ret[i];
                }
            }
            if (ret[i] % 2 != 0)
            {
                if (ret[i] > odd)
                {
                    odd = ret[i];
                }
            }
        }
        return odd - even;
    }
};
int main()
{
    Solution s;
    cout << s.maxDifference("abcabcab");
    return 0;
}