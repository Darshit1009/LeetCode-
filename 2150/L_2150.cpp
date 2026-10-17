// 2150. Find All Lonely Numbers in the Array
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findLonely(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int i : nums)
        {
            freq[i]++;
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {

            if (freq[nums[i]] == 1 &&
                freq.find(nums[i] - 1) == freq.end() &&
                freq.find(nums[i] + 1) == freq.end())
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
int main()
{

    Solution s;
    vector<int> num = {1, 3, 5, 3};
    s.findLonely(num);
    vector<int> ans = s.findLonely(num);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}