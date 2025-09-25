#include <iostream>
using namespace std;
class Solution
{
public:
    bool canWinNim(int n)
    {
        if (n == 0)
        {
            return false;
        }
        return n % 4;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.canWinNim(5);
    return 0;
}
