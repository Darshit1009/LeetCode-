#include <iostream>
using namespace std;

class Solution
{
public:
    int kthFactor(int n, int k)
    {
        int c = 0;
        if (n <= 0)
        {
            return -1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
            if (c == k)
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
    cout << s.kthFactor(12, 3);
    return 0;
}