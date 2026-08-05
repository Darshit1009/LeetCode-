#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        vector<int> ans;
        int count = -1;
        int row = -1;
        for (int i = 0; i < mat.size(); i++)
        {
            int countOne = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    countOne++;
                }
                if (countOne > count)
                {
                    count = countOne;
                    row = i;
                }
            }
        }
        ans.push_back(row);
        ans.push_back(count);
        return ans;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> question = {{0, 0, 1}, {0, 1, 1}};
    vector<int> ans;
    ans = s.rowAndMaximumOnes(question);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    return 0;
}
