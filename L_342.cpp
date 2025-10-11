#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPowerOfFour(int n)
    {
        if (n <= 0)
        {
            return false;
        }
        while (n % 4 == 0)
        {
            n = n / 4;
        }
        return n == 1;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.isPowerOfFour(16);

    return 0;
}
