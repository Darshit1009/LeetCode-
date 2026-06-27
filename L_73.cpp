#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> zeroLogic(vector<vector<int>> &matrix)
    {
        vector<int> rows(matrix.size(), false);
        vector<int> cols(matrix[0].size(), false);

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (rows[i] || cols[j])
                    matrix[i][j] = 0;
            }
        }

        return matrix;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> a = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    vector<vector<int>> result = s.zeroLogic(a);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}