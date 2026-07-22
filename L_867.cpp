#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans(n, vector<int>(m));
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> a = {{2, 4, -1},
                             {-10, 5, 11},
                             {18, -7, 6}};
    vector<vector<int>> ans = s.transpose(a);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}