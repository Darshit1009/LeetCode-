#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans1;
        vector<int> ans2;

        set<int> n1(nums1.begin(), nums1.end());
        set<int> n2(nums2.begin(), nums2.end());
        for (int x : n1)
        {
            if (n2.find(x) == n2.end())
            {
                ans1.push_back(x);
            }
        }
        for (int x : n2)
        {
            if (n1.find(x) == n1.end())
            {
                ans2.push_back(x);
            }
        }
        return {ans1, ans2};
    }
};
int main()
{
    Solution s;
    vector<int> n1 = {1, 2, 3};
    vector<int> n2 = {2, 4, 6};
    vector<vector<int>> ans = s.findDifference(n1, n2);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}