#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool digitCount(string num)
    {
        vector<int> ans(11, 0);
        for (int i = 0; i < num.size(); i++)
        {
            ans[num[i] - '0']++;
        }
        //   bool nthi=false;
        for (int i = 0; i < num.size(); i++)
        {
            if (ans[i] != num[i] - '0')
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
    cout << s.digitCount("1210");
    return 0;
}
