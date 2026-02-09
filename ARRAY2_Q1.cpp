#include <iostream>
#include <vector>
using namespace std;
// Q=[1,2,2,4]
// ans=[2,3]
class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int act = 0;
        int sum = 0;
        int dj = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    dj = nums[i];
                    ans.push_back(nums[i]);
                }
            }
        }
        for (int i = 1; i <= nums.size(); i++)
        {
            sum += i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            act += nums[i];
        }
        ans.push_back((sum - act) + dj);
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> a = {1, 2, 2, 4};
    s.findErrorNums(a);
}