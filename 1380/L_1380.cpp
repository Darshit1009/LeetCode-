#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findMINI(vector<vector<int>> matrix, int j)
    {
        int max = INT_MIN;
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
        return max;
    }
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++)
        {
            int min = *min_element(matrix[i].begin(), matrix[i].end());

            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == min)
                {
                    int max = findMINI(matrix, j);
                    if (min == max)
                    {
                        ans.push_back(min);
                    }
                }
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> a = {
        {3, 7, 8},
        {9, 11, 13},
        {15, 16, 17}};
    vector<int> ans = s.luckyNumbers(a);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
