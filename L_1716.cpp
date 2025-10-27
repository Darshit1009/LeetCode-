#include <iostream>
using namespace std;
class Solution
{
public:
    int totalMoney(int n)
    {
        int weeks = n / 7;
        int day = n % 7;
        int total = 0;
        total += (7 * weeks * (weeks + 1)) / 2;
        for (int i = 0; i < day; i++)
        {
            total += weeks + 1 + i;
        }
        cout << total;
    }
};
int main()
{
    Solution s;
    s.totalMoney(14);

    return 0;
}