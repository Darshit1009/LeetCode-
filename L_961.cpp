// 961. N-Repeated Element in Size 2N Array
#include <vector>
#include <iostream>
using namespace std;
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        int s = nums.size();
        vector<int> ans(10000);
        for (int i = 0; i < nums.size(); i++)
        {
            ans[nums[i]]++;
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == nums.size() / 2)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> ans = {1, 2, 3, 4, 5, 4, 4, 4, 4, 5};

    cout << s.repeatedNTimes(ans);
    return 0;
}