#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int matrixSum(vector<vector<int>> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            sort(nums[i].begin(), nums[i].end());
        }
        int sum = 0;
        while (nums[0].size() != 0)
        {
            int fin = INT_MIN;
            for (int i = 0; i < nums.size(); i++)
            {
                int maxi = *max_element(nums[i].begin(), nums[i].end());
                fin = max(maxi, fin);
                nums[i].pop_back();
            }
            sum += fin;
        }
        return sum;
    }
};
int main()
{
    Solution sl;
    vector<vector<int>> mat = {{7, 2, 1}, {6, 4, 2}, {6, 5, 3}, {3, 2, 1}};
    cout << sl.matrixSum(mat);
    return 0;
}