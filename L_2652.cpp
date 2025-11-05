#include <iostream>
using namespace std;
class Solution
{
public:
    int sumOfMultiples(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            {
                sum += i;
            }
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    int a;
    a = s.sumOfMultiples(7);
    cout << a;
    return 0;
}
