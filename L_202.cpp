#include <iostream>
using namespace std;
class Solution
{
public:
    int sumOfSquares(int n)
    {

        for (int i = 0; i < 1500; i++)
        {
            int sum = 0;
            while (n > 0)
            {
                int digits = n % 10;
                sum = sum + digits * digits;
                n = n / 10;
            }
            if (sum == 1)
            {
                return true;
            }
            n = sum;
        }
        return false;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.sumOfSquares(12); // Output: 5
    return 0;
}