#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string reversePrefix(string s, int k)
    {
        int i = 0;
        int j = k - 1;
        if (s.size() == 0)
        {
            return "";
        }
        while (i < j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }
};
int main()
{
    Solution s;
    string q = "abcd";
    cout << s.reversePrefix(q);
    return 0;
}