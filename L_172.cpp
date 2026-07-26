// 172. Factorial Trailing Zeroes
#include <iostream>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int n)
    {
        int c = 0;
        while (n >= 5)
        {
            n = n / 5;
            c += n;
        }
        return c;
    }
};
int main()
{
    Solution s;
    cout << s.trailingZeroes(5);
    return 0;
}