#include <iostream>
#include <math.h>
using namespace std;
class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        long long a = 0;
        long long b = (long long)sqrt(c);

        while (a <= b)
        {
            long long sum = a * a + b * b;
            if (sum == c)
                return true;
            else if (sum < c)
                a++;
            else
                b--;
        }
        return false;
    }
};
int main()
{
    Solution s;
    cout << s.judgeSquareSum(3);
    return 0;
}