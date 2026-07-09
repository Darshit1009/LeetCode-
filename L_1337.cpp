#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<pair<int, int>> ans;

        int z, o;

        for (int i = 0; i < mat.size(); i++)
        {
            z = 0;
            o = 0;

            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 0)
                    z++;

                if (mat[i][j] == 1)
                    o++;
            }

            // Store (number of soldiers, row index)
            ans.push_back({o, i});
        }

        sort(ans.begin(), ans.end());

        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            res.push_back(ans[i].second);
        }

        return res;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> q = {
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 0},
        {1, 1, 0, 0, 0},
        {1, 1, 1, 1, 1}};

    vector<int> ans = s.kWeakestRows(q, 3);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}