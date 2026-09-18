#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int arrayPairSum(vector<int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int i = 0;
        int sum = 0;
        while (i < nums.size())
        {
            sum += nums[i];
            i += 2;
        }
        return sum;
    }
};
int main()
{
    Solution s;
    vector<int> q = {1, 4, 3, 2};
    cout << s.arrayPairSum(q);
    return 0;
}