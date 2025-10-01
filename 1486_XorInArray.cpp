#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int xorOperation(int n, int start)
    {
        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            nums[i] = start + 2 * i;
        }

        int result = nums[0];
        for (int i = 1; i < n; ++i)
        {
            result ^= nums[i];
        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.xorOperation(10, 0);
    return 0;
}