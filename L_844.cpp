#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        string rst1;
        string rst;

        for (char a : s)
        {
            if (a == '#')
            {
                if (!rst1.empty())
                    rst1.pop_back();
            }
            else
            {
                rst1 += a;
            }
        }

        for (char a : t)
        {
            if (a == '#')
            {
                if (!rst.empty())
                    rst.pop_back();
            }
            else
            {
                rst += a;
            }
        }

        return rst1 == rst;
    }
};
int main()
{
    Solution s;
    cout << s.backspaceCompare("ab##", "a#b#");
    return 0;
}