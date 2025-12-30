#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool sumOfNumberAndReverse(int num)
    {
        for (int x = 0; x <= num; x++)
        {
            int rev = reverseNumber(x);
            if (x + rev == num)
            {
                return true;
            }
        }
        return false;
    }

private:
    int reverseNumber(int x)
    {
        int rev = 0;
        while (x > 0)
        {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        return rev;
    }
};
int main()
{
    Solution sol;
    cout << boolalpha;
    cout << sol.sumOfNumberAndReverse(443) << endl;
    cout << sol.sumOfNumberAndReverse(63) << endl;
    cout << sol.sumOfNumberAndReverse(181) << endl;
    return 0;
}
