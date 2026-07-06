#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int getProduct(int i)
    {
        int pro = 1;
        while (i > 0)
        {
            pro *= i % 10;
            i /= 10;
        }
        return pro;
    }
    int smallestNumber(int n, int t)
    {
        if (n == 0)
        {
            return 0;
        }
        for (int i = n; i <= 100; i++)
        {
            if (getProduct(i) % t == 0)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    cout << s.smallestNumber(15, 3);
    return 0;
}