#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int product = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            product = product * nums[i];
        }
        if (product > 0)
        {
            return 1;
        }
        if (product < 0)
        {
            return -1;
        }
        if (product == 0)
        {
            return 0;
        }
        return -5;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 3, 54, 5};
    cout << s.arraySign(a);
    return 0;
}