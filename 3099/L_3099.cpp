#include <iostream>
#include <vector>

class Solution
{
public:
    int sumOfTheDigitsOfHarshadNumber(int x)
    {
        int sum = 0;
        int origin = x;
        while (x > 0)
        {
            int rem = x % 10;
            sum = sum + rem;
            x = x / 10;
        }
        if (origin % sum == 0)
        {
            return sum;
        }

        return -1;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.sumOfTheDigitsOfHarshadNumber(18);
    return 0;
}
