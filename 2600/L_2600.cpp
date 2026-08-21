#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {
        vector<int> ans;
        for (int i = 0; i < numOnes; i++)
        {
            ans.push_back(1);
        }
        for (int i = 0; i < numZeros; i++)
        {
            ans.push_back(0);
        }
        for (int i = 0; i < numNegOnes; i++)
        {
            ans.push_back(-1);
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += ans[i];
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.kItemsWithMaximumSum(3, 2, 0, 4);
    return 0;
}
