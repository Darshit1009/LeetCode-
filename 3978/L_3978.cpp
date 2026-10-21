// 3978. Unique Middle Element
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isMiddleElementUnique(vector<int> &nums)
    {
        int n = nums[nums.size() / 2];
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == n)
            {
                cnt++;
            }
        }
        return cnt == 1;
    }
};
int main()
{
    Solution s;
    vector<int> numbers = {1, 2, 3};
    cout << s.isMiddleElementUnique(numbers);
    return 0;
}