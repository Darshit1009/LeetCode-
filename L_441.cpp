#include <iostream>
using namespace std;
class Solution
{
public:
    int arrangeCoins(int n)
    {
        long remaining = n;
        for (int i = 1; i <= n; i++)
        {
            remaining -= i;
            if (remaining < 0)
            {
                return i - 1;
            }
            if (remaining == 0)
            {
                return i;
            }
        }
        return 0;
    }
};

int main()
{
    Solution s;
    s.Coin(5);
    return 0;
}