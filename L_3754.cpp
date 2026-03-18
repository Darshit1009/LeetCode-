#include <iostream>
using namespace std;
#include <string>

class Solution
{
public:
    long long sumAndMultiply(int n)
    {
        string op = to_string(n);
        string ans = "";
        long long sum = 0;

        for (int i = 0; i < op.size(); i++)
        {
            if (op[i] != '0')
            {
                ans += op[i];
            }
        }

        if (ans == "")
            return 0;

        long long a = stoll(ans);

        for (int j = 0; j < ans.size(); j++)
        {
            sum += ans[j] - '0';
        }

        return a * sum;
    }
};
int main()
{
    Solution s;
    cout << s.sumAndMultiply(1020104003);
    return 0;
}