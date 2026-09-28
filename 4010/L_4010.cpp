#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maxPairStrength(vector<int> &nums)
    {
        long long maxii = LLONG_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                long long gcdi = gcd(nums[i], nums[j]);
                long long pr = (1LL * nums[i] * nums[j]) / (gcdi * gcdi);
                if (pr > maxii)
                {
                    maxii = pr;
                }
            }
        }
        return maxii;
    }
};
int main()
{
    Solution s;
    vector<int> q = {2, 3, 5};
    cout << s.maxPairStrength(q);
    return 0;
}