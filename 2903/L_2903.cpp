#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findIndices(vector<int> &nums, int indexDifference, int valueDifference)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                if (abs(i - j) >= indexDifference && abs(nums[i] - nums[j]) >= valueDifference)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return {-1, -1};
    }
};
int main()
{
    Solution s;
    vector<int> q = {5, 1, 4, 1};
    vector<int> ans = s.findIndices(q, 2, 4);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}