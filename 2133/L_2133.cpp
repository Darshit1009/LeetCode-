#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool checkValid(vector<vector<int>> &matrix)
    {
        vector<int> see(matrix.size());

        for (int i = 0; i < see.size(); i++)
        {
            see[i] = i + 1;
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            vector<int> row;

            for (int j = 0; j < matrix[0].size(); j++)
            {
                row.push_back(matrix[i][j]);
            }

            sort(row.begin(), row.end());

            for (int j = 0; j < row.size(); j++)
            {
                if (see[j] != row[j])
                {
                    return false;
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            vector<int> colo;

            for (int j = 0; j < matrix[0].size(); j++)
            {
                colo.push_back(matrix[j][i]);
            }

            sort(colo.begin(), colo.end());

            for (int j = 0; j < colo.size(); j++)
            {
                if (see[j] != colo[j])
                {
                    return false;
                }
            }
        }

        return true;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> mat = {{1, 1, 1}, {1, 2, 3}, {1, 2, 3}};
    cout << boolalpha;
    cout << s.checkValid(mat);
    return 0;
}
