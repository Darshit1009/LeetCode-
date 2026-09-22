#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int absDifference(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int i = 0;

        int count = 0;
        int minSum = 0;
        int maxSum = 0;
        int j = nums.size() - 1;
        while (count < k)
        {
            minSum += nums[i];
            maxSum += nums[j];
            i++;
            j--;
            count++;
        }

        return maxSum - minSum;
    }
};
int main()
{
    Solution s;
    vector<int> n = {5, 2, 2, 4};
    cout << s.absDifference(n, 2);
    return 0;
}