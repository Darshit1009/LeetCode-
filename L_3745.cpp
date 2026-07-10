// 3745. Maximize Expression of Three Elements
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class Solution
{
public:
    int maximizeExpressionOfThree(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() - 1] + nums[nums.size() - 2] - nums[0];
    }
};
int main()

{
    Solution s;
    vector<int> a = {1, 4, 2, 5};
    cout << s.maximizeExpressionOfThree(a);
    return 0;
}