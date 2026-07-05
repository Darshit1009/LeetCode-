#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> transformArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                nums[i] = 0;
            }
            if (nums[i] % 2 != 0)
            {
                nums[i] = 1;
            }
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};
int main()
{

    vector<int> q1 = {4, 3, 2, 1};
    Solution s;
    vector<int> ans = s.transformArray(q1);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}