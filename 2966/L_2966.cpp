#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> divideArray(vector<int> &nums, int k)
    {
        vector<vector<int>> ans(nums.size() / 3, vector<int>(3));
        sort(nums.begin(), nums.end());
        int jk = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[0].size(); j++)
            {
                ans[i][j] = nums[jk];
                if (jk < nums.size())
                {
                    jk++;
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if ((ans[i][1] - ans[i][0] > k) || (ans[i][2] - ans[i][1] > k) || (ans[i][2] - ans[i][0] > k))
            {
                return {};
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> num = {1, 3, 4, 8, 7, 9, 3, 5, 1};
    vector<vector<int>> ans = s.divideArray(num, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    return 0;
}