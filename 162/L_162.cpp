#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int k = -1;
        if (nums.size() == 1)
        {
            return 0;
        }

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < nums[i - 1])
            {
                k = i - 1;
                break;
            }
        }
        return k > -1 ? k : nums.size() - 1;
    }
};
int main()
{

    Solution s;
    vector<int> q = {1, 2, 3, 1};
    cout << s.findPeakElement(q);
    return 0;
}