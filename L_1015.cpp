
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int smallestRepunitDivByK(int k)
    {

        if (k % 2 == 0 || k % 5 == 0)
            return -1;

        int num = 0;
        int length = 0;

        for (int i = 0; i < k; i++)
        {
            num = (num * 10 + 1) % k;
            length++;

            if (num == 0)
                return length;
        }

        return -1;
    }
};
int main()
{
    Solution s;
    cout << s.smallestRepunitDivByK(3);
    return 0;
}