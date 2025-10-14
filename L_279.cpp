#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int numSquares(int n)
    {
        // DP array: dp[i] is least number of perfect squares summing to i
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j * j <= i; ++j)
            {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        return dp[n];
    }
};

int main()
{
    Solution s;
    int result = s.numSquares(12);
    cout << result << endl; // Output: 3 (12 = 4+4+4)
    return 0;
}
