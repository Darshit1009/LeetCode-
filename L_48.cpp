#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
// class Solution
// {
// public:
//     void rotate(vector<vector<int>> &matrix)
//     {
//         int matsize = matrix.size() - 1;
//         for (int i = 0; i < matrix.size(); i++)
//         {
//             for (int j = 0; j < matrix[0].size(); j++)
//             {

//                 int a = matrix[i][j];
//                 int b = matrix[i][size];

//                 swap(matrix[i][j], matrix[i][size]);
//                 size--;
//             }
//             matsize--;
//         }
//     }
// };
// Example 1:

// Input: matrix = [[1,2,3]
// [4,5,6]
// [7,8,9]]
//      Output:    [[7,4,1]
//    [8,5,2]
//     [9,6,3]]
int main()
{
    // Solution s;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    return 0;
}