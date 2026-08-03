#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        if (mat.size() % 2 != 0)
        {

            int i = 0;
            int j = 0;
            while (i < mat.size())
            {
                if (i == j)
                {
                    sum += mat[i][j];
                }
                i++;
                j++;
            }
            int k = 0;
            int l = mat.size() - 1;
            while (k < mat.size())
            {
                sum += mat[k][l];
                k++;
                l--;
            }
            int idx = mat.size() / 2;
            sum = sum - mat[idx][idx];
        }
        if (mat.size() % 2 == 0)
        {

            int i = 0;
            int j = 0;
            while (i < mat.size())
            {
                if (i == j)
                {
                    sum += mat[i][j];
                }
                i++;
                j++;
            }
            int k = 0;
            int l = mat.size() - 1;
            while (k < mat.size())
            {
                sum += mat[k][l];
                k++;
                l--;
            }
        }

        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> mat = {{5}};
    cout << s.diagonalSum(mat);
    return 0;
}
