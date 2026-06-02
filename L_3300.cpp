// You are given an integer array nums.
// You replace each element in nums with the sum of its digits.
// Return the minimum element in nums after all replacements.
#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int minElement(vector<int> &nums)
    {
        int mini = INT16_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            int rem = 0;
            while (nums[i] != 0)
            {
                rem = nums[i] % 10;
                sum += rem;
                nums[i] = nums[i] / 10;
            }
            nums[i] = sum;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            mini = min(mini, nums[i]);
        }
        return mini;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 3, 40, 50, 55, 14};
    int ans = s.minElement(a);
    cout << ans;
    return 0;
}