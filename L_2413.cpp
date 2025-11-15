#include <iostream>
using namespace std;

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        if (n == 0)
        {
            return -5;
        }
        if (n % 2 == 0)

        {
            return n;
        }
        else
        {
            return n * 2;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    cout << s.smallestEvenMultiple(15);

    return 0;
}