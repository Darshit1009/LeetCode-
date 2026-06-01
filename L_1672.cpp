// 1672. Richest Customer Wealth
// Input: accounts = [[1,2,3],[3,2,1]]
// Output: 6
// Explanation:
// 1st customer has wealth = 1 + 2 + 3 = 6
// 2nd customer has wealth = 3 + 2 + 1 = 6/
// Both customers are considered the richest with a wealth of 6 each, so return 6.
#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int maxi = INT16_MIN;
        int count = 0;

        for (int i = 0; i < accounts.size(); i++)
        {
            count = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                count = count + accounts[i][j];
                maxi = max(count, maxi);
            }
        }
        return maxi;
    }
};
int main()
{
    Solution finding;
    vector<vector<int>> ab = {{1, 2, 3}, {2, 5, 4}};
    cout << finding.maximumWealth(ab);
    return 0;
}