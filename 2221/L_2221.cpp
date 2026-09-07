#include <bits/stdc++.h>
using namespace std;
// 2221. Find Triangular Sum of an Array
class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++)
        {

            int sum = nums[i] + nums[i + 1];
            ans.push_back(sum % 10);
        }
        while (ans.size() != 1)
        {
            for (int i = 0; i < ans.size() - 1; i++)
            {
                int sum = ans[i] + ans[i + 1];
                if (sum >= 10)
                {
                    sum = sum % 10;
                    ans[i] = sum;
                }
                ans[i] = sum;
            }
            ans.pop_back();
        }

        for (int i : ans)
        {
            cout << i;
        }
    }
};
int main()
{
    Solution s;
    vector<int> q = {1, 2, 3, 4, 5};
    s.triangularSum(q);
    return 0;
}