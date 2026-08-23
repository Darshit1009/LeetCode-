#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        map<int, int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        vector<int> ans2;
        for (int i = 0; i < nums.size(); i++)
        {
            if (ans[nums[i]] == 1)
            {
                ans2.push_back(nums[i]);
            }
        }
        return ans2;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 2, 1, 3, 2, 5};
    vector<int> ans = s.singleNumber(nums);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}