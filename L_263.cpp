#include <iostream>
using namespace std;
class Solution
{
public:
    bool isUgly(int n)
    {
        if (n <= 0)
            return false;
        while (n % 2 == 0)
            n = n / 2;
        while (n % 3 == 0)
            n = n / 3;
        while (n % 5 == 0)
            n = n / 5;
        return n == 1;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.isUgly(20);
    return 0;
}
