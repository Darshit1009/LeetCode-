#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        map<char, int> ct;
        for (int i = 0; i < s.size(); i++)
        {
            ct[s[i]]++;
        }
        int count = ct[s[0]];
        for (auto const &[key, val] : ct)
        {
            if (val != count)
            {
                return false;
            }
        }
        return true;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.areOccurrencesEqual("abbabc");
    return 0;
}
