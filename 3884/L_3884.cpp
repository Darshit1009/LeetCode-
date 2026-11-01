// 3884. First Matching Character From Both Ends
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstMatchingIndex(string s)
    {
        for (int i = 0; i <= s.size() / 2; i++)
        {
            if (s[i] == s[s.size() - i - 1])
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    cout << s.firstMatchingIndex("abcacbd");
    return 0;
}