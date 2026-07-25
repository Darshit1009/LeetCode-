#include <iostream>
using namespace std;

class Solution
{
public:
    int numberOfSteps(int num)
    {
        int c = 0;
        while (num > 0)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
                c++;
            }
            else
            {
                num = num - 1;
                c++;
            }
        }
        return c;
    }
};
int main()
{
    Solution s;
    cout << s.numberOfSteps(8);
    return 0;
}