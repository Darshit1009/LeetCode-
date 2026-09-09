#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> construct2DArray(vector<int> &original, int m, int n)
    {
        if (m * n != original.size())
        {
            return {};
        }
        if (m * n == original.size())
        {
            vector<vector<int>> ans(m, vector<int>(n));
            int k = 0;
            for (int i = 0; i < ans.size(); i++)
            {
                for (int j = 0; j < ans[0].size(); j++)
                {
                    ans[i][j] = original[k];
                    k++;
                }
            }
            return ans;
        }
        return {};
    }
};
int main()
{
    Solution s;
    vector<int> q = {1, 2, 3, 4};
    vector<vector<int>> ans = s.construct2DArray(q, 2, 2);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << "";
        }
        cout << endl;
    }
    return 0;
}