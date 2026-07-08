#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int diff2 = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            int diff = abs((arr[i - 1] - arr[i]));
            if (diff < diff2)
            {
                diff2 = diff;
            }
        }
        for (int i = 1; i < arr.size(); i++)
        {

            if (abs(arr[i] - arr[i - 1]) == diff2)
            {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> q = {4, 1, 2, 3};
    vector<vector<int>> a = s.minimumAbsDifference(q);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout << a[i][j] << " ";
        }
    }
    return 0;
}