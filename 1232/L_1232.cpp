// 1232. Check If It Is a Straight Line
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];

        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        for (int i = 2; i < coordinates.size(); i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];

            if ((x - x1) * (y2 - y1) != (y - y1) * (x2 - x1))
            {
                return false;
            }
        }

        return true;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<vector<int>> q = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}};
    cout << boolalpha;
    cout << s.checkStraightLine(q);
    return 0;
}
