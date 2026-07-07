#include <vector>
#include <iostream>
using namespace std;

#include <algorithm>
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
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
    vector<int> a = {1, 2, 3, 2, 3};
    vector<int> result = s.findDuplicates(a);

    for (int val : result)
    {
        cout << val << " ";
    }

    return 0;
}