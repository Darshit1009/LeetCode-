#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        vector<int> ans(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            ans.push_back(nums[nums[i]]);
        }

        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> ab = {1, 2, 3, 4, 5, 6, 7};
    vector<int> asn;
    asn = s.buildArray(ab);
    for (int i = 0; i < asn.size(); i++)
    {
        cout << asn[i];
    }
    return 0;
}