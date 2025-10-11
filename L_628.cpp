#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return max(nums[n - 1] * nums[n - 2] * nums[n - 3],
                   nums[0] * nums[1] * nums[n - 1]);
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, -5, -6};
    Solution s;
    cout << s.maximumProduct(nums); // Output: 24
    return 0;
}