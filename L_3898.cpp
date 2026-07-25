#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> findDegrees(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            int c = 0;
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 1)
                {
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> q = {{0, 1, 1}, {1, 0, 1}, {1, 1, 0}};
    vector<int> ans = s.findDegrees(q);
    for (int i : ans)
    {
        cout << i;
    }
    return 0;
}