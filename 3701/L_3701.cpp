#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int alternatingSum(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                sum = sum + nums[i];
            }
            else
                sum = sum - nums[i];
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 3, 5, 7};
    cout << s.alternatingSum(q);
    return 0;
}
