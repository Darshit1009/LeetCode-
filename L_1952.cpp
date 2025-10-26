#include <iostream>
using namespace std;
class Solution
{
public:
    bool isThree(int n)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
            if (count > 3)
            {
                break;
            }
        }
        if (count == 3)
        {
            return true;
        }
        return false;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.isThree(4);
    return 0;
}
