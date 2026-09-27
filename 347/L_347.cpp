// 347. Top K Frequent Elements
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        vector<pair<int, int>> vec(ans.begin(), ans.end());
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b)
             { return a.second > b.second; });

        vector<int> f;
        for (const auto &i : vec)
        {
            if (f.size() < k)
            {
                f.push_back(i.first);
            }
            else
            {
                break;
            }
        }
        return f;
    }
};
int main()
{
    Solution s;
    vector<int> q = {1, 1, 1, 2, 2, 3};
    vector<int> ans = s.topKFrequent(q, 2);
    for (int i : ans)
    {
        cout << i << ' ';
    }
    return 0;
}