#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> ans(gain.size() + 1, 0);
        for (int i = 1; i <= gain.size(); i++)
        {
            ans[i] = ans[i - 1] + gain[i - 1];
        }
        int maxi = INT_MIN;
        for (int i = 0; i < ans.size(); i++)
        {
            maxi = max(maxi, ans[i]);
        }
        return maxi;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> gain = {-5, 1, 5, 0, -7};
    cout << s.largestAltitude(gain);
    return 0;
}