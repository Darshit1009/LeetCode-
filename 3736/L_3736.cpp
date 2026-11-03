#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minMoves(vector<int> &nums)
    {
        int maxi = *max_element(nums.begin(), nums.end());
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != maxi)
            {
                count += abs(nums[i] - maxi);
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> q = {2, 1, 3};
    cout << s.minMoves(q);
    return 0;
}