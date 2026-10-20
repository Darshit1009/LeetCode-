#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countPartitions(vector<int> &nums)
    {
        // int i = 0;
        // int rightsum=0;
        // int j = 0;
        int totalsum = 0;
        int leftsum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            totalsum += nums[i];
        }
        for (int jk = 0; jk < nums.size() - 1; jk++)
        {
            leftsum += nums[jk];
            int rightsum = totalsum - leftsum;
            if ((leftsum - rightsum) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> n = {2, 4, 6, 8};
    cout << s.countPartitions(n);
    return 0;
}