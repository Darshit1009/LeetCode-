#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int scoreOfString(string s)
    {

        int sum = 0;

        for (int i = 1; i < s.size(); i++)
        {
            int ch1 = s[i];
            int ch2 = s[i - 1];
            sum += abs(int(ch1) - int(ch2));
        }
        return s.size() > 0 ? sum : 0;
    }
};
int main()
{
    Solution s;
    cout << s.scoreOfString("za");
    return 0;
}