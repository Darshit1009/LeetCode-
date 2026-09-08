#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();
        // int kl = 0;
        vector<int> onerow(row, 0);
        vector<int> onecol(col, 0);
        vector<int> zerocol(col, 0);
        vector<int> zerorow(row, 0);

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    onerow[i]++;
                }
                if (grid[i][j] == 0)
                {
                    zerorow[i]++;
                }
            }
        }
        for (int jk = 0; jk < col; jk++)
        {
            for (int kl = 0; kl < row; kl++)
            {
                if (grid[kl][jk] == 1)
                {
                    onecol[jk]++;
                }
                if (grid[kl][jk] == 0)
                {
                    zerocol[jk]++;
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                grid[i][j] = (onerow[i] + onecol[j]) - (zerocol[j] + zerorow[i]);
            }
        }

        return grid;
    }
};
int main()
{
    Solution sl;
    vector<vector<int>> q = {{0, 1, 1}, {1, 0, 1}, {0, 0, 1}};
    vector<vector<int>> ans = sl.onesMinusZeros(q);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    return 0;
}