#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumPrimeDifference(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 2 || nums[i] == 3 || nums[i] == 5 || nums[i] == 7)
            {
                ans.push_back(i);
            }

            if (nums[i] > 10)
            {
                if (nums[i] % 2 != 0 &&
                    nums[i] % 3 != 0 &&
                    nums[i] % 5 != 0 &&
                    nums[i] % 7 != 0)
                {
                    ans.push_back(i);
                }
            }
        }

        sort(ans.begin(), ans.end());

        return ans.size() == 1 ? 0 : ans[ans.size() - 1] - ans[0];
    }
};
int main()
{
    Solution s;
    vector<int> q = {4, 8, 2, 8};
    cout << s.maximumPrimeDifference(q);
    return 0;
}