#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDivScore(vector<int> &nums, vector<int> &divisors)
    {

        unordered_map<int, int> ans;
        for (int j = 0; j < divisors.size(); j++)
        {
            int c = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] % divisors[j] == 0)
                {
                    c++;
                }
            }
            ans[divisors[j]] = c;
        }
        vector<pair<int, int>> ret(ans.begin(), ans.end());
        auto max_it = std::max_element(ret.begin(), ret.end(), [](const auto &a, const auto &b)
                                       {
                              if (a.second == b.second) {
                         return a.first > b.first; 
                              }
    return a.second < b.second; });
        int divscore = max_it->first;
        return divscore;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 9, 15, 50};
    vector<int> divisors = {5, 3, 7, 2};
    cout << s.maxDivScore(nums, divisors);
    return 0;
}