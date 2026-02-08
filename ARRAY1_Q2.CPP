#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> ans(2 * n);
        int j = 0, k = n;

        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
                ans[i] = nums[j++];
            else
                ans[i] = nums[k++];
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> a = {2, 5, 1, 3, 4, 7};
    vector<int> g = s.shuffle(a, 3);
    for (int j : g)
    {
        cout << j;
    }
    return 0;
}