#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int c = 0;
        int sum = 0;
        int idx = -1;
        for (int i = 0; i < mat.size(); i++)
        {
            c = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {

                if (mat[i][j] == 1)
                {
                    c++;
                    idx = j;
                }
            }
            if (c == 1)
            {
                int cnt = 0;
                for (int jk = 0; jk < mat.size(); jk++)
                {
                    if (mat[jk][idx] == 1)
                    {
                        cnt++;
                    }
                }
                if (cnt == c)
                {
                    sum += cnt;
                }
            }
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> a = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    cout << s.numSpecial(a);
    return 0;
}
