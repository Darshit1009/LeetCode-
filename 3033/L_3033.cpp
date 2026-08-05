#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>> &matrix)
    {
        // Loop through each column
        for (int i = 0; i < matrix[0].size(); i++)
        {
            int maxi = INT_MIN;
            int j = 0;

            while (j < matrix.size())
            {
                maxi = max(maxi, matrix[j][i]);
                j++;
            }

            int k = 0;
            while (k < matrix.size())
            {
                if (matrix[k][i] == -1)
                {
                    matrix[k][i] = maxi;
                }
                k++;
            }
        }
        return matrix;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> matrix = {
        {1, 2, -1},
        {4, -1, 6},
        {7, 8, 9}};

    matrix = s.modifiedMatrix(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j];
        }
    }
    return 0;
}
