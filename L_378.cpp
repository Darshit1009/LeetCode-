#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int kthSmallest(vector<vector<int>> &matrix, int k)
    {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                ans.push_back(matrix[i][j]);
            }
        }
        sort(ans.begin(), ans.end());
        return ans[k - 1];
    }
};
int main()
{
    Solution s;
    vector<vector<int>> mat = {{1, 5, 9}, {10, 11, 13}, {12, 13, 15}};
    cout << s.kthSmallest(mat, 8);
    return 0;
}