#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        vector<int> ans;
        vector<int> temp;

        
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                ans.push_back(grid[i][j]);
            }
        }

        sort(ans.begin(), ans.end());

        // Find repeated value
        for (int i = 0; i < ans.size() - 1; i++)
        {
            if (ans[i] == ans[i + 1])
            {
                temp.push_back(ans[i]);
                break;
            }
        }

        int idx = 0;
        int min = 1;
        int max = grid.size() * grid.size();

        // Find missing value
        for (int i = min; i <= max; i++)
        {
            if (idx < ans.size() && ans[idx] == i)
            {
                idx++;

                // Skip duplicate
                if (idx < ans.size() && ans[idx] == ans[idx - 1])
                {
                    idx++;
                }
            }
            else
            {
                temp.push_back(i);
                break;
            }
        }

        return temp;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> grid = {{1, 3},
                                {2, 2}};

    vector<int> ans = s.findMissingAndRepeatedValues(grid);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}