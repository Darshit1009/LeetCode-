#include <iostream>
using namespace std;
class Solution
{
public:
    int alternateDigitSum(int n)
    {
        int num = n;
        int digit = 0;
        int count = 0;
        int sum = 0;
        while (n > 0)
        {

            digit = n % 10;
            n = n / 10;
            count++;
            if (count % 2 != 0)
            {
                sum += digit;
            }
            if (count % 2 == 0)
            {
                sum = sum - digit;
            }
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.alternateDigitSum(111);
    return 0;
}
