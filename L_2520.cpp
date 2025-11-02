#include <iostream>
using namespace std;
class Solution
{
public:
    int countDigits(int num)
    {
        int count = 0;
        if (num < 0)
        {
            return 0;
        }
        int ori = num;
        while (num > 0)
        {
            int rem = num % 10;

            if (ori % rem == 0)
            {
                count++;
            }
            num /= 10;
        }
        return count;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.countDigits(121);
    return 0;
}
