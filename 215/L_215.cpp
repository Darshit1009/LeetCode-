#include <iostream>
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        return nums[k - 1];
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> ans = {3, 2, 1, 5, 6, 4};
    cout << s.findKthLargest(ans, 2);
    return 0;
}
