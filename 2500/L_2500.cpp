// 2500. Delete Greatest Value in Each Row
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {
        int sum = 0;
        while (grid[0].size() != 0)
        {
            int finalmax = INT_MIN;
            for (int i = 0; i < grid.size(); i++)
            {
                sort(grid[i].begin(), grid[i].end());
                int maxi = *max_element(grid[i].begin(), grid[i].end());
                if (maxi > finalmax)
                {
                    finalmax = maxi;
                }
                grid[i].pop_back();
            }
            sum += finalmax;
        }
        return sum;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> q = {{10}};
    cout << s.deleteGreatestValue(q);
    return 0;
}