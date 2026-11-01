#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        vector<int> ans;
        int c = 0;
        for (int i = 0; i < details.size(); i++)
        {
            string curr = details[i];
            int age = (curr[11] - '0') * 10 + (curr[12] - '0');

            if (age > 60)
            {
                c++;
            }
        }
        return c;
    }
};
int main()
{
    Solution s;
    vector<string> q = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    cout << s.countSeniors(q);
    return 0;
}