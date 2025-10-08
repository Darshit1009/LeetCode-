#include <iostream>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {

        int rem;
        int sum;
        while (num >= 10)
        {
            int sum = 0;
            while (num > 0)
            {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.addDigits(15);

    return 0;
}
