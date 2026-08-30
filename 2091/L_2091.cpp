#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
class Solution
{
public:
    int minimumDeletions(vector<int> &nums)
    {
        int maxi = *max_element(nums.begin(), nums.end());
        int mini = *min_element(nums.begin(), nums.end());
        int maxiindex = -1;
        int miniindex = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == maxi)
            {
                maxiindex = i;
            }
            if (nums[i] == mini)
            {
                miniindex = i;
            }
        }
        if (mini == maxi)
        {
            return nums[0];
        }

        int decision1 = max(miniindex, maxiindex) + 1;
        int decision2 = maxiindex + 1 + (nums.size() - miniindex);
        int decision3 = miniindex + 1 + (nums.size() - maxiindex);
        int decision4 = nums.size() - min(miniindex, maxiindex);

        return min({decision2, decision1, decision3, decision4});
    }
};
int main()
{
    Solution s;
    vector<int> q = {0, -4, 19, 1, 8, -2, -3, 5};
    cout << s.minimumDeletions(q);
    return 0;
}