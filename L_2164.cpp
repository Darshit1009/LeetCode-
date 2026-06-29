#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        vector<int> odd, even;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        vector<int> ans;
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());
        int e = 0, o = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                ans.push_back(even[e]);
                e++;
            }
            else
            {
                ans.push_back(odd[o]);
                o++;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {4, 1, 2, 3};
    vector<int> ans = s.sortEvenOdd(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}