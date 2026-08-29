#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstUniqueEven(vector<int> &nums)
    {
        vector<int> freq(101, 0);
        if (nums.size() == 1)
        {
            if (nums[0] % 2 == 0)
            {
                return nums[0];
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                freq[nums[i]]++;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                if (freq[nums[i]] == 1)
                {
                    return nums[i];
                }
            }
        }
        return -1;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> nums = {3, 4, 2, 5, 4, 6};
    cout << s.firstUniqueEven(nums);
    return 0;
}
