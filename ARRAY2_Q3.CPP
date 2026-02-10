#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> ans;
        vector<int> copy(nums.size() + 1, 0);

        for (int i = 0; i < nums.size(); i++)
        {
            copy[nums[i]]++;
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            if (copy[i] == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
