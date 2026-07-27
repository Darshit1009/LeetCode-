#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int m = mat.size();
        int n = mat[0].size();

        // If the total number of elements doesn't match, reshaping is illegal
        if (m * n != r * c)
        {
            return mat;
        }
        vector<vector<int>> ans(r, vector<int>(c));
        int count = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                count++;
            }
        }
        if (count < r * c)
        {
            return mat;
        }
        else
        {
            int row = 0;
            int colo = 0;
            for (int i = 0; i < mat.size(); i++)
            {
                for (int j = 0; j < mat[0].size(); j++)
                {
                    ans[row][colo] = mat[i][j];
                    colo++;
                    if (colo == c)
                    {
                        colo = 0;
                        row++;
                    }
                }
            }
            return ans;
        }
        return mat;
    }
};
int main()
{
    Solution s;
    vector<vector<int>> question = {{1, 2}, {3, 4}};
    vector<vector<int>> ans = s.matrixReshape(question, 1, 4);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }
    return 0;
}