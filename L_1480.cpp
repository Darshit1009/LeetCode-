#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};
int main()
{
    Solution s;
    vector<int> q = {1, 2, 3, 4};

    vector<int> ans = s.runningSum(q);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}